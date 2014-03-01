#ifndef DEF_INGAME
#define DEF_INGAME

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"traitements.h"






int		ColumnSize(int col, char (*Tab)[10]);  // retourne le nombre de pion déjà présent dans la colonne
int		IsEnd(int* (*Tab)[10], int x, int y, Joueur joueur, int nbCase);  // le jeu est-il fini ? Renvoie le numéro du joueur gagnant, 0 si nulle
int		IsWin(int* (*Tab)[10], int x, int y); // renvoie 1 si le joueur à gagné, sinon 0 ; 
void	ShowTab( char (*Tab)[10]);

#endif