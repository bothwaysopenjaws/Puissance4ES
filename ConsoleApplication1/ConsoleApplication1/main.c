/*
Désormais, on doit créer un fichier .h associé (avec le même nom) à chaque fichier .c
Le fichier .h va contenir :
-Les différents #include dont on a besoin (lib standard, librairies externes, fichier .c du projet)
-Les déclarations des fonctions du fichier .c
*/
#include"Main.h" 
//#include avec des guillemets "" copie le contenu d'un fichier .h situé dans le dossier du projet

int main()
{
	
	int choix = 0;
	int gameEnCour = 0;

	/*
	printf("Bienvenue dans le puissance4 le plus puissant du monde (enfin, maybe) !\r\n");
	printf("O - Quitter\r\n");
	printf("1 - Nouvelle partie\r\n");
	printf("2 - Charger une partie\r\n");
	printf("3 - Règle du jeu\r\n");

	if (gameEnCour == 1)
	{

		printf("4 - Sauvegarder la partie\r\n");
		printf("5 - Reprendre la partie\r\n");
	}

	*/

			NewGame();

	do
	{

		scanf("%d", &choix);

		switch (choix)
		{
		case 0:
			break;
		case 1:

			printf("nouvelle partie ! \r\n");

			break;
		case 2:
			system("pause");
			break;
		case 3:
			system("pause");
			break;
		case 4:
			system("pause");
			break;
		case 5:
			system("pause");
			break;

		default:
			printf("\r\n%d n'est pas un choix valide.");
			choix = -1;
			system("pause");
			break;
		}
	} while (choix != 0);

	printf("Au revoir !");

	printf("\r\n__________________________________________\r\n");
	system("pause");
}
