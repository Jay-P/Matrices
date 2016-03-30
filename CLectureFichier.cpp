#define _CRT_SECURE_NO_DEPRECATE //pour utiliser fopen sous VisualStudio
#include <stdio.h>
#include <iostream> //pour strtok
#include "CLectureFichier.h"
#include "Cexception.h"

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
char * CLectureFichier::LEClectureLigne(char *pcFichierALire, unsigned int uiNumLigne)
{
	FILE * pFile;
	pFile = fopen(pcFichierALire , "rt"); //Ouverture du fichier en lecture et en mode texte
	char * pcLigne; //Chaine dans laquelle on va stocker la ligne lue
	pcLigne = (char *)malloc(4096*sizeof(char));//On defini une grande taille, arbitraire

	if (pFile == NULL) 
	{
		throw new Cexception();//perror ("Erreur lors de l'ouverture du fichier");
	}
	else 
	{
		unsigned int uiBoucleAvancement;
		for(uiBoucleAvancement=0; uiBoucleAvancement<uiNumLigne-1; uiBoucleAvancement++)
		{
			if (fgets(pcLigne , 4096 , pFile) != NULL)
				; //On lit la ligne mais on ne fait rien,z pour avancer dans le fichier
			else 
				throw new Cexception();//perror ("Erreur de la lecture dans LEClectureLigne");
		}
		if (fgets(pcLigne , 4096 , pFile) != NULL)
			fputs (pcLigne, pFile);//On stocke la ligne dans pcLigne pour la retourner
		else 
			throw new Cexception();//perror ("Erreur de la lecture dans LEClectureLigne");
		fclose (pFile);
	}

	//On teste si la ligne lue est corrrecte par rapport au format impos�
	if (LECLigneEstOK(pcLigne, uiNumLigne))
		;
	else
		throw new Cexception();//Ligne incorrecte

	return pcLigne;
	free(pcLigne);
}

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
bool CLectureFichier::LECLigneEstOK(char * pcAComparer, unsigned int uiNumLigne)
{
	char * pcSource;//La chaine sans erreur
	if (uiNumLigne==1)
		pcSource="TypeMatrice=";
	else if (uiNumLigne==2)
		pcSource="NBLignes=";
	else if (uiNumLigne==3)
		pcSource="NBColonnes=";
	else
		throw new Cexception();

	if (*pcAComparer == *pcSource && *pcAComparer!=NULL && *pcAComparer!=NULL)
	{
		pcAComparer++;
		pcSource++;
	}
	else 
		return false;
	return true;
}

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
double** CLectureFichier::LECCreerTab2D(char *pcFichierALire)
{
	/*On recupere le nombre de lignes et colonnes dans le fichier � lire en 
	ignorant les premiers caract�res de chaque ligne*/
	const unsigned int uiNBLignes = atoi(LEClectureLigne(pcFichierALire, 2)+9);
	const unsigned int uiNBColonnes = atoi(LEClectureLigne(pcFichierALire, 3)+11);

	char * pcASeparer;//La chaine de caract�re � d�couper
	char * pcToken;//La partie d�coup�e que l'on va stocker dans le tableau 2D

	//Allocation d'un tableau 2D dynamique
	double **teTableau = new double * [uiNBLignes];
	unsigned int uiBoucleTab;
	for(uiBoucleTab=0; uiBoucleTab < uiNBLignes; uiBoucleTab++)
		teTableau[uiBoucleTab]= new double[uiNBColonnes];

	unsigned int uiBoucleLignes, uiBoucleColonnes;
	for(uiBoucleLignes=0; uiBoucleLignes<uiNBLignes; uiBoucleLignes++)
	{
		pcASeparer=LEClectureLigne(pcFichierALire,uiBoucleLignes+5);
		pcToken=strtok (pcASeparer," ");
		for(uiBoucleColonnes=0; uiBoucleColonnes<uiNBColonnes; uiBoucleColonnes++)
		{
			//Affectation de la valeur lue apr�s transformation en double
			teTableau[uiBoucleLignes][uiBoucleColonnes]=atof(pcToken);
			pcToken = strtok (NULL, " ");
		}
	}
	return teTableau;
}