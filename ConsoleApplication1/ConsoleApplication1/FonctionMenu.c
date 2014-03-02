#include "FonctionMenu.h"

void	NewGame() // lance une nouvelle partie avec de nouveaux joueurs
{
	int end = 0 ;
	int tour = 1;
	int column = 0;
	int SizeCol = 0;
	int nbTour = 0;
	int saisieUser = 0;
	int PasBon = 1;
	int IswinOrEnd = -1;
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

		PasBon = 1; // booleen tant que la saisie est fausse
		nbTour++; // compteur de tour
		if( (nbTour % 2) == 1 ) // alternance entre les joueurs
		{

			JoueurEnCours = joueur1;

		}
		else
		{
			JoueurEnCours = joueur2;
		}
		printf("saisissez la colonne de votre choix, %s :\r\n", JoueurEnCours.prenom);
			do
			{
				scanf("%d", &saisieUser);
				// verification de la saisie de colonne par le joueur et placement du pion si possible
				SizeCol = ColumnSize(saisieUser, Tab); // Taille de la colonne 

				if ((saisieUser < 1) | (saisieUser >7)) // verifie que la colonne choisie fait partie du tableau
				{
					printf("saisie de colonne impossible, recommencez \r\n");
					nbTour--; // annule l'ajout du tour en du fait de la mauvaise saisie
				}

				else 
				{
					if(SizeCol == 7) // Verifie que la colonne n'est pas déjà remplie
					{
						printf("saisie de colonne impossible, celle-ci est déjà complete, recommencez \r\n");
					}
					else // remplie la case de la colonne par X ou Y
					{
						
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

			system("cls");
			ShowTab(Tab); // affiche le tableau
			
			// verification de l'état de la partie( finie ? )
			IswinOrEnd = IsEnd( Tab,  saisieUser, SizeCol , nbTour);
			if(IswinOrEnd == 1 )
			{
				printf("Felicitation %s %s, tu as win la partie \r\n", JoueurEnCours.nom, JoueurEnCours.prenom);
				system("pause");
				end=1;
			}
			else
			{
				if (IswinOrEnd == 0)
				{
					printf("Match nul ! ");
					system("pause");
					end=1;
				}

			}

	} while (end == 0 );

}





/*
void	loadgame();
void	Rules();
void	backin();
void	play();
*/