#ifndef CMatrice_h
#define CMatrice_h

template<typename tTypeElements> class CMatrice
{

private:

	int iMATnbLignes;
	int iMATnbColonnes;
	tTypeElements** pptMATelements;

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
	CMatrice(int iColonnes,int iLignes, const tTypeElements** pptMatrice);
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
	CMatrice(const CMatrice<tTypeElements>&);
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
	CMatrice<tTypeElements> operator*(const tTypeElements& MATparam, double constante) const 
	{	
		inbLignes = MATparam.iMATnbLignes;
		inbColonnes = MATparam.iMATnbColonnes;
		tTypeElements newpptMatrice[inbLignes][inbColonnes];
		for(int iBoucleLignes=0; iBoucleLignes<=MATparam.nbLignes;iBoucleLignes++)
		{
			for(int iBoucleColonnes=0; iBoucleColonnes<MATparam.nbColonnes;iBoucleColonnes++)
			{
				newpptMatrice[iBoucleLignes][iBoucleColonnes]= MATparam.pptMatrice[iBoucleLignes][iBoucleColonnes]*constante;
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice(int inbColonnes, int inbLignes, const tTypeElements** newpptMatrice)
         return NewMatrice;
      }

	template<typename tTypeElements>
	CMatrice<tTypeElements> operator/(const tTypeElements& MATparam, double constante) 
	{	
		if(constante==0)
			throw eExceptionDivisionByZero;
		inbLignes = MATparam.iMATnbLignes;
		inbColonnes = MATparam.iMATnbColonnes;
		tTypeElements newpptMatrice[inbLignes][inbColonnes];
		for(int iBoucleLignes=0; iBoucleLignes<=MATparam.nbLignes;iBoucleLignes++)
		{
			for(int iBoucleColonnes=0; iBoucleColonnes<MATparam.nbColonnes;iBoucleColonnes++)
			{
				newpptMatrice[iBoucleLignes][iBoucleColonnes]= MATparam.pptMatrice[iBoucleLignes][iBoucleColonnes]/constante;
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice(int inbColonnes, int inbLignes, const tTypeElements** newpptMatrice)
         return NewMatrice;
      }

	template<typename tTypeElements>
	CMatrice<tTypeElements> operator+(const tTypeElements& MATparam1, const tTypeElements& MATparam2)
	{
		if(MATparam1.iMATnbLignes != MATparam2.iMATnbLignes || MATparam1.iMATnbColonnes != MATparam2.iMATnbColonnes)
			throw eExceptionDifferentSizes;
		inbLignes = MATparam1.iMATnbLignes;
		inbColonnes = MATparam1.iMATnbColonnes;
		tTypeElements newpptMatrice[inbLignes][inbColonnes];
		for(int iBoucleLignes=0; iBoucleLignes<=MATparam.nbLignes;iBoucleLignes++)
		{
			for(int iBoucleColonnes=0; iBoucleColonnes<MATparam.nbColonnes;iBoucleColonnes++)
			{
				newpptMatrice[iBoucleLignes][iBoucleColonnes]= MATparam1.pptMatrice[iBoucleLignes][iBoucleColonnes]+MATparam2.pptMatrice[iBoucleLignes][iBoucleColonnes];
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice(int inbColonnes, int inbLignes, const tTypeElements** newpptMatrice);
        return NewMatrice;
	}

	template<typename tTypeElements>
	CMatrice<tTypeElements> operator-(const tTypeElements& MATparam1, const tTypeElements& MATparam2)
	{
		if(MATparam1.iMATnbLignes != MATparam2.iMATnbLignes || MATparam1.iMATnbColonnes != MATparam2.iMATnbColonnes)
			throw eExceptionDifferentSizes;
		inbLignes = MATparam1.iMATnbLignes;
		inbColonnes = MATparam1.iMATnbColonnes;
		tTypeElements newpptMatrice[inbLignes][inbColonnes];
		for(int iBoucleLignes=0; iBoucleLignes<=MATparam.nbLignes;iBoucleLignes++)
		{
			for(int iBoucleColonnes=0; iBoucleColonnes<MATparam.nbColonnes;iBoucleColonnes++)
			{
				newpptMatrice[iBoucleLignes][iBoucleColonnes]= MATparam1.pptMatrice[iBoucleLignes][iBoucleColonnes]-MATparam2.pptMatrice[iBoucleLignes][iBoucleColonnes];
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice(int inbColonnes, int inbLignes, const tTypeElements** newpptMatrice);
        return NewMatrice;
	}

	template<typename tTypeElements>
	CMatrice<tTypeElements> operator*(const tTypeElements& MATparam1, const tTypeElements& MATparam2) 
	{	
		if(MATparam1.iMATnbColonnes!=MATparam2.iMATnbLignes)
			throw eIncompatibleMatrices;
		inbLignes = MATparam1.iMATnbLignes;
		inbColonnes = MATparam1.iMATnbColonnes;
		tTypeElements newpptMatrice[inbLignes][inbColonnes];
		for(int iBoucleLignes=0; iBoucleLignes<=MATparam1.nbLignes;iBoucleLignes++)
		{
			for(int iBoucleColonnes=0; iBoucleColonnes<MATparam1.nbColonnes;iBoucleColonnes++)
			{
				newpptMatrice[iBoucleLignes][iBoucleColonnes]= MATparam1.pptMatrice[iBoucleLignes][iBoucleColonnes]*MATparam2.pptMatrice[iBoucleLignes][iBoucleColonnes];
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice(int inbColonnes, int inbLignes, const tTypeElements** newpptMatrice)
         return NewMatrice;
      }
	
	template<typename tTypeElements>
	CMatrice<tTypeElements> transpose(const tTypeElements& MATparam)
	{
		inbLignes = MATparam1.iMATnbLignes;
		inbColonnes = MATparam1.iMATnbColonnes;
		tTypeElements newpptMatrice[inbColonnes][inbLignes];
		for(int iBoucleLignes=0; iBoucleLignes<=MATparam1.nbLignes;iBoucleLignes++)
		{
			for(int iBoucleColonnes=0; iBoucleColonnes<MATparam1.nbColonnes;iBoucleColonnes++)
			{
				newpptMatrice[iBoucleLignes][iBoucleColonnes]= MATparam1.pptMatrice[iBoucleColonnes][iBoucleLignes];
		}
	}
#endif