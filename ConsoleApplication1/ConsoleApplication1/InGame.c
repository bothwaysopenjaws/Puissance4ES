#include "InGame.h"
// tout ce qui se passe dans la partie, affichage, conditions de victoire





int ColumnSize(int col, char (*Tab)[10])
{
	int i;
	for (i = 1; Tab[i][col] != '_'; i++);
	return i;
}




// regarde si la partie est finie
int IsEnd(char (*Tab)[10], int x, int y, int nbCase)
{
	if ((IsWin(Tab, x, y)) == 1)
	{
		return 1;
	}

	else 
	{
		if (nbCase == 42)
		{
		return 0;
		}
		else
		{
			return 4;
		}

	}

}

/* mon tableau fait 9 colonnes et 8 lignes. Les colonnes 1 et 9 et les lignes 1 et 8 ne sont pas modifié lors du jeu, porte le char '_'
quand le curseur se trouve sur un '_', il met fin à la boucle en cours.
*/
int IsWin(char (*Tab)[10], int x, int y) // Verifie si les conditions de victoires sont réunies
{



	int i = 1; // curseur horizontal
	int j = 1; // curseur vertical
	int point = 1; // compteur de points alignés, 1 de base du fait du primier pion




	// Cas vertical
	if ((Tab[y][x] == Tab[y][x + i]) || (Tab[y][x] == Tab[y][x - i]))
	{
		
		while (Tab[y][x] == Tab[y][x + i])
		{
			point++;
			i++;

		}

		i = 1;
		while (Tab[y][x] == Tab[y][x - i])
		{
			point++;
			i++;

		}


	}
	if(point >= 4)
	{
		return 1;
	}else
	{
	point = 1;
	}
	i = 1;
	// cas horizontale

	if ((Tab[y][x] == Tab[y + i][x]) || (Tab[y][x] == Tab[y - i][x]))
	{
		while (Tab[y][x] == Tab[y + i][x])
		{
			point++;
			i++;

		}
		i = 1;
		while (Tab[y][x] == Tab[y - i][x])
		{
			point++;
			i++;

		}		

	}
	if(point >= 4)
	{
		return 1;
	}else
	{
	point = 1;
	}

	i = 1;
	// première bissectrice


	if ((Tab[y][x] == Tab[y + i][x + i]) || (Tab[y][x] == Tab[y - i][x - i]))
	{

		while (Tab[y][x] == Tab[y + i][x + i])
		{
			point++;
			i++;

		}


		i = 1;
		while (Tab[y][x] == Tab[y - i][x - i])
		{
			point++;
			i++;

		}


	}

	if(point >= 4)
	{
		return 1;
	}else
	{
		point = 1;
	}

	i = 1;
	// dernière bissectrice

	if ((Tab[y][x] == Tab[x + i][x]) || (Tab[y][x] == Tab[y - i][x - i]))
	{
		while (Tab[y][x] == Tab[y + i][x - i])
		{
			point++;
			i++;

		}


		i = 1;

		while (Tab[y][x] == Tab[y - i][x + i])
		{
			point++;
			i++;

		}
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
	int j  = 6; // colonne
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