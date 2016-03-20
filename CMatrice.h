template<typename tTypeElements> class CMatrice
{

private:

	int iMATNbLignes;
	int iMATNbColonnes;
	tTypeElements pptMATElements;

public:
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
	void CMatrice();
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
	void CMatrice(int iColonnes,int iLignes, tTypeElements** pptMatrice);
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
	void CMatrice(CMatrice MATparam);
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
	int MATretournerNbLignes();
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
	void MATmodifierNbLignes(int iLignes);
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
	int MATretournerNbColonnes();/**
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
	void MATmodifierNbColonnes(int iColonnes);/**
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
	tTypeElements** MATretournerpptElements();/**
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
	void MATmodifierMatrice();
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
	void ~CMatrice();

};
