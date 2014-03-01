#include "InGame.h"
// tout ce qui se passe dans la partie, affichage, conditions de victoire





int ColumnSize(int col, char (*Tab)[10])
{
	int i;
	for (i = 1; Tab[col][i] != '_'; i++);
	return i;
}




// LIé  END GAME
int IsEnd(char (*Tab)[10], int x, int y, Joueur joueur, int nbCase)
{
	if (IsWin(Tab, x, y) == 1)
	{
		return joueur.id;
	}

	else if (nbCase == 0)
	{
		return 0;

	}

}

/* mon tableau fait 9 colonnes et 8 lignes. Les colonnes 1 et 9 et les lignes 1 et 8 ne sont pas modifié lors du jeu, porte le char '_'
quand le curseur se trouve sur un '_', il met fin à la boucle en cours.
*/
int IsWin(char (*Tab)[10], int x, int y) // Verifie si les conditions de victoires sont réunies
{
	int i = 1; // curseur horizontal
	int j = 1; // curseur vertical
	int point; // compteur de point aligné


	point = 0;


	// Cas vertical
	if (Tab[x][y] == Tab[x][y + i])
	{
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x][y + i]) && (point <4));

		i = 1;
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x][y - i]) && (point <4));

	}
	if (point == 4)
	{
		return 1;
	}
	point = 0;
	// cas horizontale

	if (Tab[x][y] == Tab[x + i][y])
	{
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x + i][y]) && (point <4));

		i = 0;
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x - i][y]) && (point <4));

	}
	if (point == 4)
	{
		return 1;
	}
	point = 0;

	// première bissectrice
	if (Tab[x][y] == Tab[x + i][y + i])
	{
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x + i][y + j]) && (point <4));

		i = 1;
		j = 1;
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x - i][y - j]) && (point <4));

	}
	if (point == 4)
	{
		return 1;
	}
	point = 0;

	// dernière bissectrice
	if (Tab[x][y] == Tab[x + i][y])
	{
		do
		{
			point++;
			i++;
			j++;

		} while ((Tab[x][y] == Tab[x + i][y - i]) && (point <4));

		i = 0;
		do
		{
			point++;
			i++;
			j++;

		} while ((Tab[x][y] == Tab[x - i][y + 1]) && (point <4));

	}




	if (point == 4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void ShowTab( char (*Tab)[10]) // affiche le puissance4
{
	int i = 1; // "mot, afficher à la verticale
	int j  = 7; // colonne
	int fini = -1;
	char charaff; 

	printf("|");
	do
	{

		if ( (i == 8) && (j == 1))
		{
			fini = 0;
				printf("\r\n|_____________|\r\n");
		}
		else
		{
			if ( (i + 1) == 9)
			{
				i = 1;
				j--;
				printf("\r\n");
				printf("|");
			} else
			{
				charaff = Tab[j][i];
				printf("%c", charaff);
				printf("|");
				i++;
			}
		}
	} while ( fini == -1 );

	printf("\r|1|2|3|4|5|6|7|\r\n");
}