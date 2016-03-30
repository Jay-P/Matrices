#pragma once
class CLectureFichier
{
	//M�thodes
public:
	/****************************************************************
	Nom : LEClectureLigne
	*****************************************************************
	Cette fonction permet de lire une ligne dans un fichier pass�
	en param�tre
	*****************************************************************
	Entr�e : le chemin du fichier � lire, le num�ro de la ligne � 
	lire
	N�cessite : vide
	Sortie : La ligne lue 
	Entraine : La ligne est retourn�e et une exception est envoy�e 
	en cas d'erreur
	****************************************************************/
	char * LEClectureLigne(char *pcFichierALire, unsigned int uiNumLigne);

	/****************************************************************
	Nom : LECLigneEstOK
	*****************************************************************
	Cette fonction permet de v�rifier si une ligne du fichier ne
	contient pas d'erreur
	*****************************************************************
	Entr�e : la chaine � v�rifier, le numero de la ligne dont elle
	provient
	N�cessite : vide
	Sortie : un booleen correspondant au r�sultat de la comparaison
	Entraine : vrai si les chaines sont identiques, faux sinon
	****************************************************************/
	bool LECLigneEstOK(char * pcAComparer, unsigned int uiNumLigne);

	/****************************************************************
	Nom : LECCreerTab2D
	*****************************************************************
	Cette fonction permet de cr�er un tableau 2D de double � partir
	d'un fichier
	*****************************************************************
	Entr�e : le chemin du fichier � lire
	N�cessite : vide
	Sortie : un tableau 2D de double
	Entraine : le tableau est bien rempli si la matrice est de type
	double, lance une exception sinon
	****************************************************************/
	double** LECCreerTab2D(char *pcFichierALire);
};

