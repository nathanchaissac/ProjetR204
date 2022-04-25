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
*  Nom du fichier : verif.h                                                   *
*                                                                             *
******************************************************************************/

//verif caratere special
bool verifTexte(wchar_t tab[10000]);
//verif cle Vigenere
bool verifCleV(wchar_t tab[10000]);
//verif cle cesar
bool verifCleC(int cle);
//remplacer accent
wchar_t replaceAccent(wchar_t tab[10000],int i);