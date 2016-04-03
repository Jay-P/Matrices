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
* Constructeur par d�faut
* ************************
* Entr�e:
* Pr�-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice();
	/**
* ************************
* Catrice
* ************************
* Constructeur � 3 param�tres
* ************************
* Entr�e: int iColonnes, int iLignes, tTypeElements** pptMatrice
* Pr�-condition :
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
* Entr�e:
* Pr�-condition :
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
* Entr�e:
* Pr�-condition :
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
* Entr�e: int iLignes
* Pr�-condition :
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
* Entr�e:
* Pr�-condition :
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
* Entr�e: iColonnes
* Pr�-condition :
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
* Entr�e:
* Pr�-condition :
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
* Entr�e:
* Pr�-condition :
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
* Entr�e:
* Pr�-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	void MATafficherMatrice();
	/**
* ************************
* ~CMatrice
* ************************
* Destructeur par d�faut
* ************************
* Entr�e:
* Pr�-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	~CMatrice();

/**
* ************************
* operator+
* ************************
* Surcharge de l'op�rateur +
* ************************
* Entr�e: const tTypeElements& MATparam1, const tTypeElements& MATparam2
* Pr�-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice<tTypeElements> operator+(CMatrice<tTypeElements>& MATparam);

/**
* ************************
* operator-
* ************************
* Surcharge de l'op�rateur -
* ************************
* Entr�e: const tTypeElements& MATparam1, const tTypeElements& MATparam2
* Pr�-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice<tTypeElements> operator-(CMatrice<tTypeElements>& MATparam);

		/**
* ************************
* operator*
* ************************
* Surcharge de l'op�rateur * : multiplication avec une constante
* ************************
* Entr�e: const tTypeElements& MATparam, double constante
* Pr�-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	//CMatrice<tTypeElements> operator*(double constante);

/**
* ************************
* operator*
* ************************
* Surcharge de de l'op�rateur * : multiplication entre deux matrices
* ************************
* Entr�e: const tTypeElements& MATparam1, const tTypeElements& MATparam2
* Pr�-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice<tTypeElements> operator*(CMatrice<tTypeElements>& MATparam);

/**
* ************************
* operator/
* ************************
* Surcharge de de l'op�rateur / : division d'une matrice par une constante
* ************************
* Entr�e: const tTypeElements& MATparam, double constante
* Pr�-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice<tTypeElements> operator/(double constante);

/**
* ************************
* operator=
* ************************
* Surcharge de de l'op�rateur =
* ************************
* Entr�e: const tTypeElements& MATparam
* Pr�-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	CMatrice<tTypeElements>& operator=(CMatrice<tTypeElements>& MATparam);

};

#include "CMatrice.hpp"

#endif