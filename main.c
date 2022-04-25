/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Chiffrement de message                                          *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : PETIT Auxence                                                *
*                                                                             *
*  Nom-prénom2 : LECLERC Flavien                                              *
*                                                                             *
*  Nom-prénom3 : BIBICH Rim                                                   *
*                                                                             *
*  Nom-prénom4 : CHAISSAC Nathan                                              *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : main.c                                                    *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <wchar.h>
#include "cesar.h"
#include "vigenere.h"
#include "verif.h"

void main() {
    wchar_t tab1[10000];
    wchar_t tab2[10000];
    FILE *fichier = NULL;
    fichier = fopen("resultat.txt","w");
    //Initialisation du tableau et saisie du text
    wprintf(L"Tapez votre message (sans caractère spécial) :\n>");
    wscanf(L"%L[^\n]s",tab1);
    for(int j = 0; j<=wcslen(tab1);j++){
        tab2[j]=towupper(tab1[j]);
    }
    
    //verification de la validite du texte saisi
    if(verifTexte(tab2)==false){
        printf("Erreur dans le texte\n");
        exit(0);
    } else {
        printf("Texte valide\n");
    }
    
    //choix de l'algorithme
    int rep;
    printf("Choisir la methode de chiffrement :\n 1-Cesar\n 2-Vigenere\nToute autre valeur entrainera la fermeture du programme.\n>");
    fflush(stdin);
    scanf("%d",&rep);
    if(rep!=1 && rep!=2) {
        printf("Valeur incorrecte. Fermeture du programme..");
        exit(0);
    }
    //choix pour chiffrer ou dechiffre le message saisi
    printf("Taper 1 pour chiffrer votre message, et 2 pour le dechiffrer.\nToute autre valeur entrainera la fermeture du programme.\n>");
    int rep2;
    fflush(stdin);
    scanf("%d",&rep2);
    if(rep2!=1 && rep2!=2) {
        printf("Valeur incorrecte. Fermeture du programme..\n");
        exit(0);
    }
    //déroulé du programme
    if(rep==1){
        int k;
        printf("Saisir la cle. (Nombre entier attendu)\n");
        fflush(stdin);
        scanf("%d",&k);
        printf("%d",k);
        //if(verifCleC(k)==false){
            //printf("Cle mal saisie.\nFermeture du programme..\n");
            //exit(0);
        //}
        if(rep2==1){
            wprintf(L"Message chiffre : %ls\n",chiffreTexte(tab2,k));
            fprintf(fichier, "%ls\n",tab2);
            fclose(fichier);
        } else if (rep2==2){
            wprintf(L"Message dechiffre : %ls\n",dechiffreTexte(tab2,k));
            fprintf(fichier, "%ls\n",tab2);
            fclose(fichier);
        } else {
            printf("Taper 1 pour chiffrer votre message, et 2 pour le déchiffrer.\n>");
            scanf("%d",&rep2);
        }
    } else if (rep==2){
        wchar_t cle[1000];
        int k;
        fflush(stdin);
        wprintf(L"Saisir la clé.(mot attendu)\n");
        wscanf(L"%ls",cle);
        if(verifCleV(cle)==false){
            printf("Erreur dans la saisie de la cle.\nFermeture du programme..");
            exit(0);
        }
        if(rep2==1){
            wprintf(L"Message chiffre : %ls\n",chiffreTexteVigenere(tab2,cle));
            fprintf(fichier, "%ls\n",tab2);
            fclose(fichier);
        } else if (rep2==2){
            wprintf(L"Message dechiffre : %ls\n",dechiffreTexteVigenere(tab2,cle));
            fprintf(fichier, "%s\n",tab2);
            fclose(fichier);
        } else {
            printf("Taper 1 pour chiffrer votre message, et 2 pour le dechiffrer.\n>");
            scanf("%d",&rep2);
        }
    }
    printf("Retrouvez le resultat dans le fichier : resultat.txt \n");
}










