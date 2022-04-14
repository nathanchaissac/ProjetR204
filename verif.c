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
*  Nom du fichier : verif.c                                                   *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

//Verif caractere special
bool verifTexte(char tab[10000]){
    char verifTab[67] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789'-,() ";
    for(int i=0; i<=strlen(tab); i++){
        if(strchr(verifTab, tab[i])==NULL){
            return false;
        }
    }
    return true;
}

bool verifCle(char tab[10000]){
    char verifTab[53]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    for(int i=0; i<=strlen(tab); i++){
        if(strchr(verifTab, tab[i])==NULL){
            return false;
        }
    }
    return true;
}
