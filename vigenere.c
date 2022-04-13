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
*  Nom du fichier : vigenere.c                                                *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

//
char* chiffreTexteVigenere(char tab[10000],char k[1000]){ 
    int key;
    int j;
     for(int i=0;i<=10000;i++){
        if(isalnum(tab[i])){
            j = i%strlen(k);
            key=k[j]-97;
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
    char *r = tab;
    return tab;
}

char* dechiffreTexteVigenere(char tab[10000],char k[1000]){ 
    int key;
    int j;
     for(int i=0;i<=10000;i++){
        if(isalnum(tab[i])){
            j = i%strlen(k);
            key=k[j]-97;
            for(int p = 1;p<=key; p++){
                if(tab[i]=='A'){
                    tab[i]='Z';
                } else if (tab[i]=='9') {
                    tab[i]='1';
                } else {
                    tab[i]=tab[i]-1;
                }
            }
        } else {
            tab[i]=tab[i];
        }
    }
    char *r = tab;
    return tab;
}