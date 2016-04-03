#ifndef CMatrice_h
#define CMatrice_h

template<typename tTypeElements> class CMatrice
{

private:

	unsigned int uiMATnbLignes;
	unsigned int uiMATnbColonnes;
	tTypeElements** pptMATelements;

public:

	//Operateurs externes
	friend CMatrice<tTypeElements> operator*(double constante,CMatrice<tTypeElements> Matparam);
	friend CMatrice<tTypeElements> operator*(CMatrice<tTypeElements> Matparam,double constante);

	/**
* ************************
* CMatrice
* ************************
* Constructeur par défaut
* ************************
* Entrée:
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice();
	/**
* ************************
* Catrice
* ************************
* Constructeur à 3 paramètres
* ************************
* Entrée: int iColonnes, int iLignes, tTypeElements** pptMatrice
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice(unsigned int uiColonnes,unsigned int uiLignes, tTypeElements** pptMATelements);
	/**
* ************************
* CMatrice
* ************************
* Constructeur de recopie
* ************************
* Entrée:
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice(CMatrice<tTypeElements>&);
	/**
* ************************
* MATretournerNbLignes
* ************************
* Getter de NbLignes
* ************************
* Entrée:
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	unsigned int MATretournerNbLignes();
	/**
* ************************
* MATmodifierNbLignes
* ************************
* Setter de NbLignes
* ************************
* Entrée: int iLignes
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	void MATmodifierNbLignes(unsigned int uiLignes);
	/**
* ************************
* MATretournerNbColonnes
* ************************
* Getter de NbColonnes
* ************************
* Entrée:
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	unsigned int MATretournerNbColonnes();/**
* ************************
* MATmodifierNbColonnes
* ************************
* Setter de NbColonnes
* ************************
* Entrée: iColonnes
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	void MATmodifierNbColonnes(unsigned int uiColonnes);/**
* ************************
* MATretournerpptElements
* ************************
* Getter de Elements
* ************************
* Entrée:
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	 tTypeElements MATretournerpptelements(unsigned int uiLigne, unsigned int uiColonne);/**
* ************************
* MATmodifierMatrice
* ************************
* Setter de Elements
* ************************
* Entrée:
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	void MATmodifierMatrice(unsigned int uinbLignes,unsigned int uinbColonnes,tTypeElements** pptMatrice);
	/**
* ************************
* MATafficherMatrice
* ************************
* Affiche la matrice
* ************************
* Entrée:
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	void MATafficherMatrice();
	/**
* ************************
* ~CMatrice
* ************************
* Destructeur par défaut
* ************************
* Entrée:
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	~CMatrice();

/**
* ************************
* operator+
* ************************
* Surcharge de l'opérateur +
* ************************
* Entrée: const tTypeElements& MATparam1, const tTypeElements& MATparam2
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice<tTypeElements> operator+(CMatrice<tTypeElements>& MATparam);

/**
* ************************
* operator-
* ************************
* Surcharge de l'opérateur -
* ************************
* Entrée: const tTypeElements& MATparam1, const tTypeElements& MATparam2
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice<tTypeElements> operator-(CMatrice<tTypeElements>& MATparam);

		/**
* ************************
* operator*
* ************************
* Surcharge de l'opérateur * : multiplication avec une constante
* ************************
* Entrée: const tTypeElements& MATparam, double constante
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	//CMatrice<tTypeElements> operator*(double constante);

/**
* ************************
* operator*
* ************************
* Surcharge de de l'opérateur * : multiplication entre deux matrices
* ************************
* Entrée: const tTypeElements& MATparam1, const tTypeElements& MATparam2
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice<tTypeElements> operator*(CMatrice<tTypeElements>& MATparam);

/**
* ************************
* operator/
* ************************
* Surcharge de de l'opérateur / : division d'une matrice par une constante
* ************************
* Entrée: const tTypeElements& MATparam, double constante
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice<tTypeElements> operator/(double constante);

/**
* ************************
* operator=
* ************************
* Surcharge de de l'opérateur =
* ************************
* Entrée: const tTypeElements& MATparam
* Pré-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice<tTypeElements>& operator=(CMatrice<tTypeElements>& MATparam);

};

#include "CMatrice.hpp"

#endif