#include "FonctionMenu.h"

void	NewGame() // lance une nouvelle partie avec de nouveaux joueurs
{
	int win = 0 ;
	int tour = 1;
	int column = 0;
	int SizeCol = 0;
	int nbTour = 0;
	int saisieUser = 0;
	int PasBon = 1;
	char *Pointeur;
	Joueur JoueurEnCours;
	Joueur joueur1 ;
	Joueur joueur2 ;
	char Tab[][10] = { 
	  "_________",
	  "_________",
	  "_________",
	  "_________",
	  "_________",
	  "_________",
	  "_________",
	  "_________",

	}; 

printf(" bienvenue ! Creation des joueurs : \r\n");


	  InitPersonne(&joueur1); // Initialisation des joueurs
	  InitPersonne(&joueur2);

	  creerjoueur(&joueur1, 1); //créer les joueurs
	  creerjoueur(&joueur2, 2);

	  system("cls");
	  printf("les deux joueurs sont initalises \r\n");
	  printf(" Que la partie commence \r\n");
	  system("pause");
	  system("cls");


	ShowTab(Tab); // affiche le tableau




	do
	{
		system("cls");
		ShowTab(Tab); // affiche le tableau
		PasBon = 1;
		nbTour++; // compteur de tour
		if( (nbTour % 2) == 1 ) // alternance entre les joueurs
		{

			JoueurEnCours = joueur1;

		}
		else
		{
			JoueurEnCours = joueur2;
		}
			printf("saisissez la colonne de votre choix :\r\n");
			do
			{
				scanf("%d", &saisieUser);
				// verification de la saisie de colonne par le joueur et placement du pion si possible

				if ((saisieUser < 1) | (saisieUser >7)) // verifie que la colonne choisie fait partie du tableau
				{
					printf("saisie de colonne impossible, recommencez \r\n");
					nbTour--;
				}

				else 
				{
					if(ColumnSize(saisieUser,  Tab) == 7) // Verifie que la colonne n'est pas déjà remplie
					{
						printf("saisie de colonne impossible, celle-ci est déjà complète, recommencez \r\n");
					}
					else // remplie la case de la colonne par X ou Y
					{
						SizeCol = ColumnSize(saisieUser, Tab);
						if ( JoueurEnCours.id == 1) // insertion pour le joueur 1
						{
							Tab[SizeCol][saisieUser] = 'X';

						}
						else // insertion pour le joueur 2
						{
							Tab[SizeCol][saisieUser] = 'O';
						}
						PasBon = 0;
					}
				}
		
			}while( PasBon == 1);

	} while (win == 0 );

}





/*
void	loadgame();
void	Rules();
void	backin();
void	play();
*/