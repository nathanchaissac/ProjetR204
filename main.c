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
#include "cesar.h"
#include "vigenere.h"
#include "verif.h"

void main() {
    char tab1[10000];
    char tab2[10000];
    FILE *fichier = NULL;
    fichier = fopen("resultat.txt","w");
    //Initialisation du tableau et saisie du text
    printf("Tapez votre message (sans caractere special) :\n");
    scanf("%[^\n]s",tab1);
    for(int j = 0; j<=strlen(tab1);j++){
        tab2[j]=toupper(tab1[j]);
    }
    //verification de la validite du texte saisi
    if(verifTexte(tab2)==false){
        printf("Erreur dans le texte\n");
        exit(1);
    } else {
        printf("Texte valide\n");
    }
    //choix de l'algorithme
    int rep;
    printf("Choisir la methode de chiffrement :\n 1-Cesar\n 2-Vigenere\n Toute autre valeur entrainera la fermeture du programme.\n");
    scanf("%d",&rep);
    if(rep!=1 || rep!=2) {
        printf("Fermeture du programme..");
        exit(0);
    }
    //choix pour chiffrer ou dechiffre le message saisi
    printf("Taper 1 pour chiffrer votre message, et 2 pour le dechiffrer.\n");
    int rep2;
    scanf("%d",&rep2);
    //déroulé du programme
    if(rep==1){
        int k;
        printf("Saisir la cle.\n");
        scanf("%d",&k);
        if(rep2==1){
            printf("Message chiffre : %s\n",chiffreTexte(tab2,k));
            fprintf(fichier, "%s\n",tab2);
            fclose(fichier);
        } else if (rep2==2){
            printf("Message dechiffre : %s\n",dechiffreTexte(tab2,k));
            fprintf(fichier, "%s\n",tab2);
            fclose(fichier);
        } else {
            printf("Taper 1 pour chiffrer votre message, et 2 pour le déchiffrer.\n");
            scanf("%d",&rep2);
        }
    } else if (rep==2){
        char cle[1000];
        int k;
        printf("Saisir la cle.\n");
        scanf("%s",cle);
        if(rep2==1){
            printf("Message chiffre : %s\n",chiffreTexteVigenere(tab2,cle));
            fprintf(fichier, "%s\n",tab2);
            fclose(fichier);
        } else if (rep2==2){
            printf("Message dechiffre : %s\n",dechiffreTexteVigenere(tab2,cle));
            fprintf(fichier, "%s\n",tab2);
            fclose(fichier);
        } else {
            printf("Taper 1 pour chiffrer votre message, et 2 pour le dechiffrer.\n");
            scanf("%d",&rep2);
        }
    }
    printf("Retrouvez le resultat dans le fichier : resultat.txt \n");
}










