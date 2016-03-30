#pragma once
class CLectureFichier
{
	//Méthodes
public:
	/****************************************************************
	Nom : LEClectureLigne
	*****************************************************************
	Cette fonction permet de lire une ligne dans un fichier passé
	en paramètre
	*****************************************************************
	Entrée : le chemin du fichier à lire, le numéro de la ligne à 
	lire
	Nécessite : vide
	Sortie : La ligne lue 
	Entraine : La ligne est retournée et une exception est envoyée 
	en cas d'erreur
	****************************************************************/
	char * LEClectureLigne(char *pcFichierALire, unsigned int uiNumLigne);

	/****************************************************************
	Nom : LECLigneEstOK
	*****************************************************************
	Cette fonction permet de vérifier si une ligne du fichier ne
	contient pas d'erreur
	*****************************************************************
	Entrée : la chaine à vérifier, le numero de la ligne dont elle
	provient
	Nécessite : vide
	Sortie : un booleen correspondant au résultat de la comparaison
	Entraine : vrai si les chaines sont identiques, faux sinon
	****************************************************************/
	bool LECLigneEstOK(char * pcAComparer, unsigned int uiNumLigne);

	/****************************************************************
	Nom : LECCreerTab2D
	*****************************************************************
	Cette fonction permet de créer un tableau 2D de double à partir
	d'un fichier
	*****************************************************************
	Entrée : le chemin du fichier à lire
	Nécessite : vide
	Sortie : un tableau 2D de double
	Entraine : le tableau est bien rempli si la matrice est de type
	double, lance une exception sinon
	****************************************************************/
	double** LECCreerTab2D(char *pcFichierALire);
};

