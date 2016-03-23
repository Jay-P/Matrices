#ifndef CMatrice_h
#define CMatrice_h

template<typename tTypeElements> class CMatrice
{

private:

	int iMATnbLignes;
	int iMATnbColonnes;
	tTypeElements pptMATelements;

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
	CMatrice(int iColonnes,int iLignes, const tTypeElements** pptMatrice);
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
	CMatrice(const CMatrice<tTypeElements>&);
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
	~CMatrice();

};

	template<typename tTypeElements>
	CMatrice<tTypeElements>::CMatrice()
	{
		iMATnbLignes = 0;
		iMATnbColonnes = 0;
		pptMATelements = NULL;
	}

	template<typename tTypeElements>
	CMatrice<tTypeElements>::CMatrice(int iColonnes, int iLignes, const tTypeElements** pptMatrice)
	{
		iMATnbLignes = iLignes;
		iMATnbColonnes = iColonnes;
		for(int iBoucleLignes=0;iBoucleLignes <= iLignes-1; iBoucleLignes++)
		{
			for(int iBoucleColonnes=0;iBoucleColonnes <= iColonnes-1; iBoucleColonnes++)
				pptMATelements[iBoucleLignes][iBoucleColonnes]=pptMatrice[iBoucleLignes][iBoucleColonnes];
		}
	}

	template<typename tTypeElements>
	CMatrice<tTypeElements>::CMatrice(CMatrice MATParam&)
	{
		iMATnbLignes = MATparam.iMATnbLignes;
		iMATnbColonnes = MATparam.iMATnbColonnes;
		for(int iBoucleLignes=0;iBoucleLignes <= iLignes-1; iBoucleLignes++)
		{
			for(int iBoucleColonnes=0;iBoucleColonnes <= iColonnes-1; iBoucleColonnes++)
				pptMATelements[iBoucleLignes][iBoucleColonnes]=MATparam.pptMatrice[iBoucleLignes][iBoucleColonnes];
		}
	}

	template<typename tTypeElements>
	int CMatrice<tTypeElements>::MATretournerNbLignes()
	{
		return iMATnbLignes;
	}

	template<typename tTypeElements>
	void CMatrice<tTypeElements>::MATmodifierNbLignes(int iLignes)
	{
		iMATnbLignes=iLignes;
	}

	template<typename tTypeElements>
	int CMatrice<tTypeElements>::MATretournerNbColonnes()
	{
		return iMATnbColonnes;	
	}

	template<typename tTypeElements>
	void CMatrice<tTypeElements>::MATmodifierNbColonnes(int iColonnes)
	{
		iMATnbColonnes=iColonnes;
	}

	template<typename tTypeElements>
	void CMatrice<tTypeElements>::MATafficherMatrice()
	{
	}

	template<typename tTypeElements>
	CMatrice<tTypeElements> operator*(const tTypeElements& MATparam) const 
	{
		CMatrice<tTypeElements> NewMatrice = 
         return CMatrice<tTypeElements>(*this).operator*=(MATparam);
      }

	template<typename tTypeElements>
	CMatrice<tTypeElements> operator/(const tTypeElements& MATparam) {
        return CMatrice<tTypeElements>(*this).operator/=(MATparam);
      }

	template<typename tTypeElements>
	CMatrice<tTypeElements> operator/(const tTypeElements& MATparam, double constante) 
	{
        return CMatrice<tTypeElements>(*this).operator/=(MATparam);
      }
#endif