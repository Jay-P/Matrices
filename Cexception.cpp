#include "Cexception.h"

/****************************************************************
Nom : Cexception
*****************************************************************
Constructeur par défaut de la classe Cexception
*****************************************************************
Entrée : vide
Nécessite : vide
Sortie : vide
Entraine : vide
****************************************************************/
Cexception::Cexception(void)
{
}

/****************************************************************
Nom : ~Cexception
*****************************************************************
Destructeur de la classe Cexception
*****************************************************************
Entrée : vide
Nécessite : vide
Sortie : vide
Entraine : vide
****************************************************************/
Cexception::~Cexception(void)
{
}

/****************************************************************
Nom : EXCmodifierValeur
*****************************************************************
Cette fonction permet de modifier la valeur de l'exception
*****************************************************************
Entrée : La nouvelle valeur de l'exception
Nécessite : vide
Sortie : vide
Entraine : L'exception est modifiée
****************************************************************/
void Cexception::EXCmodifierValeur(unsigned int uiParam)
{
	uiEXCvaleur = uiParam;
}

/****************************************************************
Nom : EXCLireValeur
*****************************************************************
Cette fonction permet de lire la valeur de l'exception
*****************************************************************
Entrée : vide
Nécessite : vide
Sortie : La valeur de l'exception
Entraine : L'exception est retournée
****************************************************************/
unsigned int Cexception::EXCLireValeur()
{
	return uiEXCvaleur;
}
