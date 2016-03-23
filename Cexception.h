#pragma once
class Cexception
{
	//Attributs
private : 
	unsigned int uiEXCvaleur; //Contient la valeur de l'exception

	//Constructeurs & Destructeur
public:
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
	Cexception();

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
	~Cexception();

	//Méthodes
public :
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
	void EXCmodifierValeur(unsigned int uiParam);

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
	unsigned int EXCLireValeur();
};

