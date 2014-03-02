#include"traitements.h"

// Traitement préparatoire avant la partie


void creerjoueur(Joueur *joueur, int id)   // Création d'un joueur
{
	char  Nom[100] = { '\0' } ; // variable temp pour le nom du joueur
	char Prenom[100] = { '\0' } ;// variable temp pour le prenom du joueur
	int cond = 0; // verifie si c'est bon




	printf("Entrez le nom du joueur %i :\r\n", id); 
	scanf("%s", Nom);
	printf("Entrez le prenom du joueur %i :\r\n", id); 
	scanf("%s", Prenom);


	 // assigne le numéro du joueur dans la partie, pas besoin de boucle car int


	if (joueur->nom != NULL) //boucle pour assigné le nom du joueur
	{
		free(joueur->nom); 
		joueur->nom = NULL;

	}
	joueur->nom = (char*)calloc(strlen(Nom) + 1, sizeof(char)); //Initialise le tableau
	strcpy(joueur->nom, Nom); //Copie le pseudo dans la structeur joueur
	cond++;

	if (joueur->prenom != NULL) //boucle pour assigné le prenom du joueur
	{
		free(joueur->prenom); 
		joueur->prenom = NULL;
	}
	joueur->prenom = (char*)calloc(strlen(Prenom) + 1, sizeof(char)); 
	strcpy(joueur->prenom, Prenom); 

	joueur->id = id; //assigne le numéro de la personne pas besoin de boucle du fait

}

void InitPersonne(Joueur *joueur)
{
		joueur->nom = NULL; // initialisation nom du joueur
		joueur->prenom = NULL; // initialisation prenom du joueur
		joueur->id= 0;
}



	




