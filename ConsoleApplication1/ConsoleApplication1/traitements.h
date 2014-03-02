#ifndef DEF_TRAITEMENT
#define DEF_TRAITEMENT

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct joueur Joueur;

struct joueur
{
	char *nom;
	char *prenom;
	int id;

};


void creerjoueur(Joueur *joueur, int id);  // création de joueur
void InitPersonne(Joueur *joueur); // initalise une personne

#endif