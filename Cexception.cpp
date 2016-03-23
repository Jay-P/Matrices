#include "Cexception.h"

/****************************************************************
Nom : Cexception
*****************************************************************
Constructeur par d�faut de la classe Cexception
*****************************************************************
Entr�e : vide
N�cessite : vide
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
Entr�e : vide
N�cessite : vide
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
Entr�e : La nouvelle valeur de l'exception
N�cessite : vide
Sortie : vide
Entraine : L'exception est modifi�e
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
Entr�e : vide
N�cessite : vide
Sortie : La valeur de l'exception
Entraine : L'exception est retourn�e
****************************************************************/
unsigned int Cexception::EXCLireValeur()
{
	return uiEXCvaleur;
}
