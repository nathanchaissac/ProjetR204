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
bool verifTexte(wchar_t tab[10000]){
    wchar_t verifTab[67] =L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789'-,() ";
    for(int i=0; i<=wcslen(tab); i++){
        if(iswpunct(tab[i])!=0){
            return false;
        }
    }
    return true;
}

bool verifCleV(wchar_t tab[1000]){
    wchar_t verifTab[53]=L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    for(int i=0; i<=wcslen(tab); i++){
        if(wcschr(verifTab, tab[i])==NULL){
            return false;
        }
    }
    return true;
}

bool verifCleC(int cle){
    if(isdigit(cle)==false || cle<0){
        return false;
    }
    return true;
}

wchar_t replaceAccent(wchar_t tab[10000],int i){
    if(tab[i]==L'é'|| tab[i]==L'è' || tab[i]==L'ê'){
        return tab[i]=='e';
    } else {
        return tab[i];
    } 
}


