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
* Constructeur par d�faut
* ************************
* Entr�e:
* Pr�-condition :
* Sortie :
* Post-condition :
* ***********************
*/
	void CMatrice();
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
	void CMatrice(int iColonnes,int iLignes, tTypeElements** pptMatrice);
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
	void CMatrice(CMatrice MATparam);
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
	int MATretournerNbLignes();
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
	void MATmodifierNbLignes(int iLignes);
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
	int MATretournerNbColonnes();/**
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
	void MATmodifierNbColonnes(int iColonnes);/**
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
	tTypeElements** MATretournerpptElements();/**
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
	void MATmodifierMatrice();
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
	void ~CMatrice();

};
