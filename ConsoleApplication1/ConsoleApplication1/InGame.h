#ifndef DEF_INGAME
#define DEF_INGAME

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"traitements.h"



int		ColumnSize(int col, char (*Tab)[10]);  // retourne le nombre de pion d�j� pr�sent dans la colonne
int		IsEnd(char (*Tab)[10], int x, int y, int nbCase);  // le jeu est-il fini ? Renvoie le num�ro du joueur gagnant, 0 si nulle
int		IsWin(char (*Tab)[10], int x, int y); // renvoie 1 si le joueur � gagn�, sinon 0 ; 
void	ShowTab( char (*Tab)[10]);

#endif