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
*  Nom du fichier : cesar.c                                                   *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

//chiffrage Cesar
wchar_t* chiffreTexte(wchar_t tab[10000],int k){ 
    int key = k%26;
     for(int i=0;i<=wcslen(tab);i++){
        if(isalnum(tab[i])){
            for(int p = 1;p<=key; p++){
                if(tab[i]=='Z'){
                    tab[i]='A';
                } else if (tab[i]=='9') {
                    tab[i]='1';
                } else {
                    tab[i]=tab[i]+1;
                }
            }
        } else {
            tab[i]=tab[i];
        }
    }
    wchar_t *r = tab;
    return r;
}
//Dechiffage Cesar
wchar_t* dechiffreTexte(wchar_t tab[10000],int k){ 
    int key = k%26;
     for(int i=0;i<=wcslen(tab);i++){
        if(isalnum(tab[i])){
            for(int p = 1;p<=key; p++){
                if(tab[i]=='A'){
                    tab[i]='Z';
                } else if (tab[i]=='1') {
                    tab[i]='9';
                } else {
                    tab[i]=tab[i]-1;
                }
            }
        } else {
            tab[i]=tab[i];
        }
    }
    wchar_t *r = tab;
    return r;
}