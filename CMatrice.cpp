#include "CMatrice.h"

template<typename tTypeElements> class CMatrice
{
public:

	void CMatrice()
	{
		iMATNbLignes = 0;
		iMATNbColonnes = 0;
		pptMATElements = NULL;
	}

	void CMatrice(int iColonnes, int iLignes, tTypeElements** pptMatrice)
	{
		iMATNbLignes = iLignes;
		iMATNbColonnes = iColonnes;
		for(int iBoucleLignes=0;iBoucleLignes <= iLignes-1; iBoucleLignes++)
		{
			for(int iBoucleColonnes=0;iBoucleColonnes <= iColonnes-1; iBoucleColonnes++)
				pptMATElements[iBoucleLignes][iBoucleColonnes]=pptMatrice[iBoucleLignes][iBoucleColonnes];
		}
	}

	void CMatrice(CMatrice MATParam)
	{
		iMATNbLignes = MATParam.iMATNbLignes;
		iMATNbColonnes = MATParam.iMATNbColonnes;
		for(int iBoucleLignes=0;iBoucleLignes <= iLignes-1; iBoucleLignes++)
		{
			for(int iBoucleColonnes=0;iBoucleColonnes <= iColonnes-1; iBoucleColonnes++)
				pptMATElements[iBoucleLignes][iBoucleColonnes]=MATParam.pptMatrice[iBoucleLignes][iBoucleColonnes];
		}
	}

	int MATretournerNbLignes()
	{
		return iMATNbLignes;
	}

	void MATmodifierNbLignes(int iLignes)
	{
		iMATNbLignes=iLignes;
	}

	int MATretournerNbColonnes()
	{
		return iMATNbColonnes;	
	}

	void MATmodifierNbColonnes(int iColonnes)
	{
		iMATNbColonnes=iColonnes;
	}

	void MATafficherMatrice()
	{
	}

	
};