template <typename tTypeElements> 
CMatrice<tTypeElements>::CMatrice()
{
		iMATnbLignes = 0;
		iMATnbColonnes = 0;
		pptMATelements = NULL;
}

template<typename tTypeElements>
CMatrice<tTypeElements>::CMatrice(unsigned int uiColonnes, unsigned int uiLignes, tTypeElements** pptMatparam)
{
	uiMATnbLignes = uiLignes;
	uiMATnbColonnes = uiColonnes;
	pptMATelements = new tTypeElements*[uiMATnbLignes];
	for(unsigned int uiBoucle = 0; uiBoucle < uiMATnbLignes; ++uiBoucle)
	{
		pptMATelements[uiBoucle] = new tTypeElements[uiMATnbColonnes];
	}
	for(unsigned int uiBoucleLignes=0;uiBoucleLignes < uiMATnbLignes; uiBoucleLignes++)	
	{
		for(unsigned int uiBoucleColonnes=0;uiBoucleColonnes < uiMATnbColonnes; uiBoucleColonnes++)
			pptMATelements[uiBoucleLignes][uiBoucleColonnes]=pptMatparam[uiBoucleLignes][uiBoucleColonnes];
	}

}

template<typename tTypeElements>
CMatrice<tTypeElements>::CMatrice(CMatrice<tTypeElements>& MATparam)
{
	uiMATnbLignes = MATparam.MATretournerNbLignes();
	uiMATnbColonnes = MATparam.MATretournerNbColonnes();
	pptMATelements = new tTypeElements*[uiMATnbLignes];
	for(unsigned int uiBoucle = 0; uiBoucle < uiMATnbLignes; ++uiBoucle)
	{
		pptMATelements[uiBoucle] = new tTypeElements[uiMATnbColonnes];
	}
	for(unsigned int uiBoucleLignes=0;uiBoucleLignes < uiMATnbLignes; uiBoucleLignes++)	
	{
		for(unsigned int uiBoucleColonnes=0;uiBoucleColonnes < uiMATnbColonnes; uiBoucleColonnes++)
			pptMATelements[uiBoucleLignes][uiBoucleColonnes]=MATparam.MATretournerpptelements(uiBoucleLignes,uiBoucleColonnes);
	}
}
template<typename tTypeElements>
CMatrice<tTypeElements>::~CMatrice()
{
	for(unsigned int uiBoucle=0; uiBoucle<uiMATnbLignes;uiBoucle++)
			delete(pptMATelements[uiBoucle]);
	delete(pptMATelements);
	uiMATnbLignes=0;
	uiMATnbColonnes=0;
}
	template<typename tTypeElements>
	unsigned int CMatrice<tTypeElements>::MATretournerNbLignes()
	{
		return uiMATnbLignes;
	}

	template<typename tTypeElements>
	void CMatrice<tTypeElements>::MATmodifierNbLignes(unsigned int uiLignes)
	{
		uiMATnbLignes=uiLignes;
		tTypeElements** newpptMatrice = new tTypeElements*[uiMATnbLignes];
		for(unsigned int ui = 0; ui < uiMATnbLignes; ++ui)
		{
			newpptMatrice[ui] = new tTypeElements[uiMATnbColonnes];
		}
		for(unsigned int uiBoucle=0; uiBoucle<uiMATnbLignes;uiBoucle++)
			delete(pptMATelements[uiBoucle]);
		delete(pptMATelements);
		pptMATelements = newpptMatrice;
		
	}

	template<typename tTypeElements>
	unsigned int CMatrice<tTypeElements>::MATretournerNbColonnes()
	{
		return uiMATnbColonnes;	
	}

	template<typename tTypeElements>
	void CMatrice<tTypeElements>::MATmodifierNbColonnes(unsigned int uiColonnes)
	{
		uiMATnbColonnes=uiColonnes;
		tTypeElements** newpptMatrice = new tTypeElements*[uiMATnbLignes];
		for(unsigned int ui = 0; ui < uiMATnbLignes; ++ui)
		{
			newpptMatrice[ui] = new tTypeElements[uiMATnbColonnes];
		}
		for(unsigned int uiBoucle=0; uiBoucle<uiMATnbLignes;uiBoucle++)
			delete(pptMATelements[uiBoucle]);
		delete(pptMATelements);
		pptMATelements = newpptMatrice;
	}

	template<typename tTypeElements>
	void CMatrice<tTypeElements>::MATmodifierMatrice(unsigned int uinbLignes,unsigned int uinbColonnes,tTypeElements** pptMatrice)
	{
		tTypeElements** newpptMatrice = new tTypeElements*[uinbLignes];
		for(unsigned int ui = 0; ui < uinbLignes; ++ui)
		{
			newpptMatrice[ui] = new tTypeElements[uinbColonnes];
		}
		for(unsigned int uiBoucleLignes=0; uiBoucleLignes<uinbLignes;uiBoucleLignes++)
		{
			for(unsigned int uiBoucleColonnes=0; uiBoucleColonnes<uinbColonnes;uiBoucleColonnes++)
			{
				pptMATelements[uiBoucleLignes][uiBoucleColonnes]= pptMatrice[uiBoucleLignes][uiBoucleColonnes];
			}
		}
		for(unsigned int uiBoucle=0; uiBoucle<uinbLignes;uiBoucle++)
			delete(newpptMatrice[uiBoucle]);
		delete(newpptMatrice);
	}

	template<typename tTypeElements>
	tTypeElements CMatrice<tTypeElements>::MATretournerpptelements(unsigned int uiLigne, unsigned int uiColonne)
	{
		return pptMATelements[uiLigne][uiColonne];
	}

	template<typename tTypeElements>
	void CMatrice<tTypeElements>::MATafficherMatrice()
	{
	}

	template<typename tTypeElements>
	CMatrice<tTypeElements> CMatrice<tTypeElements>::operator+(CMatrice<tTypeElements>& MATparam)
	{
		if(uiMATnbLignes != MATparam.MATretournerNbLignes() || MATparam.MATretournerNbColonnes() != uiMATnbColonnes)
		{
			//throw eExceptionDifferentSizes;
		}
		unsigned int uinbLignes = MATparam.MATretournerNbLignes();
		unsigned int uinbColonnes = MATparam.MATretournerNbColonnes();
		tTypeElements** newpptMatrice = new tTypeElements*[uinbLignes];
		for(unsigned int ui = 0; ui < uinbLignes; ++ui)
		{
			newpptMatrice[ui] = new tTypeElements[uinbColonnes];
		}
		for(unsigned int uiBoucleLignes=0; uiBoucleLignes<uinbLignes;uiBoucleLignes++)
		{
			for(unsigned int uiBoucleColonnes=0; uiBoucleColonnes<uinbColonnes;uiBoucleColonnes++)
			{
				newpptMatrice[uiBoucleLignes][uiBoucleColonnes]= pptMATelements[uiBoucleLignes][uiBoucleColonnes]+MATparam.MATretournerpptelements(uiBoucleLignes,uiBoucleColonnes);
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice(uinbColonnes, uinbLignes, newpptMatrice);
		for(unsigned int uiBoucle=0; uiBoucle<uinbLignes;uiBoucle++)
			delete(newpptMatrice[uiBoucle]);
		delete(newpptMatrice);
        return NewMatrice;
	}

	template<typename tTypeElements>
	CMatrice<tTypeElements> CMatrice<tTypeElements>::operator-(CMatrice<tTypeElements>& MATparam)
	{
		if(uiMATnbLignes != MATparam.MATretournerNbLignes() || MATparam.MATretournerNbColonnes() != uiMATnbColonnes)
		{
			//throw eExceptionDifferentSizes;
		}
		unsigned int uinbLignes = MATparam.MATretournerNbLignes();
		unsigned int uinbColonnes = MATparam.MATretournerNbColonnes();
		tTypeElements** newpptMatrice = new tTypeElements*[uinbLignes];
		for(unsigned int ui = 0; ui < uinbLignes; ++ui)
		{
			newpptMatrice[ui] = new tTypeElements[uinbColonnes];
		}
		for(unsigned int uiBoucleLignes=0; uiBoucleLignes<uinbLignes;uiBoucleLignes++)
		{
			for(unsigned int uiBoucleColonnes=0; uiBoucleColonnes<uinbColonnes;uiBoucleColonnes++)
			{
				newpptMatrice[uiBoucleLignes][uiBoucleColonnes]= pptMATelements[uiBoucleLignes][uiBoucleColonnes]-MATparam.MATretournerpptelements(uiBoucleLignes,uiBoucleColonnes);
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice(uinbColonnes, uinbLignes, newpptMatrice);
		for(unsigned int uiBoucle=0; uiBoucle<uinbLignes;uiBoucle++)
			delete(newpptMatrice[uiBoucle]);
		delete(newpptMatrice);
        return NewMatrice;
	}

	template<typename tTypeElements>
	CMatrice<tTypeElements> multiplication(double constante,const CMatrice<tTypeElements>& MATparam) 
	{	
		unsigned int uinbLignes = MATparam.MATretournerNbLignes();
		unsigned int uinbColonnes = MATparam.MATmodifierNbColonnes();
		tTypeElements** newpptMatrice = new tTypeElements*[uinbLignes];
		for(unsigned int ui = 0; ui < uinbLignes; ++ui)
		{
			newpptMatrice[ui] = new tTypeElements[uinbColonnes];
		}
		for(unsigned int uiBoucleLignes=0; uiBoucleLignes<=uinbLignes;uiBoucleLignes++)
		{
			for(unsigned int uiBoucleColonnes=0; uiBoucleColonnes<uinbColonnes;uiBoucleColonnes++)
			{
				newpptMatrice[uiBoucleLignes][uiBoucleColonnes]= pptMATelements[uiBoucleLignes][uiBoucleColonnes]*constante;
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice(uinbColonnes, uinbLignes, newpptMatrice)
        return NewMatrice;
      }

	template<typename tTypeElements>
	CMatrice<tTypeElements> CMatrice<tTypeElements>::operator*(CMatrice<tTypeElements>& MATparam)
	{	
		//if(uiMATnbColonnes!=MATparam.MATretournerNbLignes())
			//throw CException(eMatricesIncompatibles);
		unsigned int uinbLignes = MATparam.MATretournerNbLignes();
		unsigned int uinbColonnes = MATparam.MATretournerNbColonnes();
		tTypeElements** newpptMatrice = new tTypeElements*[uinbLignes];
		for(unsigned int uiBoucle = 0; uiBoucle < uinbLignes; ++uiBoucle)
		{
			newpptMatrice[uiBoucle] = new tTypeElements[uinbColonnes];
		}
		for(unsigned int uiBoucleLignes=0; uiBoucleLignes<uinbLignes;uiBoucleLignes++)
		{
			for(unsigned int uiBoucleColonnes=0; uiBoucleColonnes<uinbColonnes;uiBoucleColonnes++)
			{
				newpptMatrice[uiBoucleLignes][uiBoucleColonnes]= pptMATelements[uiBoucleLignes][uiBoucleColonnes]*MATparam.MATretournerpptelements(uiBoucleLignes,uiBoucleColonnes);
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice(uinbColonnes, uinbLignes, newpptMatrice);
		for(unsigned int uiBoucle=0; uiBoucle<uinbLignes;uiBoucle++)
			delete(newpptMatrice[uiBoucle]);
		delete(newpptMatrice);
        return NewMatrice;
      }

	template<typename tTypeElements>
	CMatrice<tTypeElements> CMatrice<tTypeElements>::operator/(double constante) 
	{	
		//if(constante==0)
			//throw eExceptionDivisionByZero;
		unsigned int uinbLignes = uiMATnbLignes;
		unsigned int uinbColonnes = uiMATnbColonnes;
		tTypeElements** newpptMatrice = new tTypeElements*[uinbLignes];
		for(unsigned int ui = 0; ui < uinbLignes; ++ui)
		{
			newpptMatrice[ui] = new tTypeElements[uinbColonnes];
		}
		for(unsigned int uiBoucleLignes=0; uiBoucleLignes<uinbLignes;uiBoucleLignes++)
		{
			for(unsigned int uiBoucleColonnes=0; uiBoucleColonnes<uinbColonnes;uiBoucleColonnes++)
			{
				newpptMatrice[uiBoucleLignes][uiBoucleColonnes]= pptMATelements[uiBoucleLignes][uiBoucleColonnes]/constante;
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice(uinbColonnes, uinbLignes, newpptMatrice);
		for(unsigned int uiBoucle=0; uiBoucle<uinbLignes;uiBoucle++)
			delete(newpptMatrice[uiBoucle]);
		delete(newpptMatrice);
        return NewMatrice;
      }

	template<typename tTypeElements>
	CMatrice<tTypeElements>& CMatrice<tTypeElements>::operator=(CMatrice<tTypeElements>& MATparam) 
	{	
		unsigned int uinbLignes = MATparam.MATretournerNbLignes();
		unsigned int uinbColonnes = MATparam.MATretournerNbColonnes();
		tTypeElements** newpptMatrice = new tTypeElements*[uinbLignes];
		for(unsigned int ui = 0; ui < uinbLignes; ++ui)
		{
			newpptMatrice[ui] = new tTypeElements[uinbColonnes];
		}
		for(unsigned int uiBoucleLignes=0; uiBoucleLignes<uinbLignes;uiBoucleLignes++)
		{
			for(unsigned int uiBoucleColonnes=0; uiBoucleColonnes<uinbColonnes;uiBoucleColonnes++)
			{
				newpptMatrice[uiBoucleLignes][uiBoucleColonnes] = MATparam.MATretournerpptelements(uiBoucleLignes,uiBoucleColonnes);
			}
		}
        MATmodifierNbLignes(uinbLignes);
		MATmodifierNbColonnes(uinbColonnes);
		MATmodifierMatrice(uinbLignes,uinbColonnes,newpptMatrice);
		for(unsigned int uiBoucle=0; uiBoucle<uinbLignes;uiBoucle++)
			delete(newpptMatrice[uiBoucle]);
		delete(newpptMatrice);
		return *this;
      }

	template<typename tTypeElements>
	CMatrice<tTypeElements> transpose(CMatrice<tTypeElements>& MATparam)
	{
		unsigned int uinbLignes = MATparam.MATretournerNbLignes();
		unsigned int uinbColonnes = MATparam.MATretournerNbColonnes();
		tTypeElements** newpptMatrice = new tTypeElements*[uinbLignes];
		for(unsigned int ui = 0; ui < uinbLignes; ++ui)
		{
			newpptMatrice[ui] = new tTypeElements[uinbColonnes];
		}
		for(unsigned int uiBoucleLignes=0; uiBoucleLignes<uinbLignes;uiBoucleLignes++)
		{
			for(unsigned int uiBoucleColonnes=0; uiBoucleColonnes<uinbColonnes;uiBoucleColonnes++)
			{
				newpptMatrice[uiBoucleLignes][uiBoucleColonnes]= MATparam.MATretournerpptelements(uiBoucleColonnes,uiBoucleLignes);
			}
		}
		CMatrice<tTypeElements> transposee = CMatrice<tTypeElements>(uinbColonnes, uinbLignes, newpptMatrice);
		for(unsigned int uiBoucle=0; uiBoucle<uinbLignes;uiBoucle++)
			delete(newpptMatrice[uiBoucle]);
		delete(newpptMatrice);
		return transposee;
	}

	template<typename tTypeElements>
	CMatrice<tTypeElements> operator*(CMatrice<tTypeElements> MATparam, double constante)
	{
		//if(uiMATnbColonnes!=MATparam.MATretournerNbLignes())
			//throw CException(eMatricesIncompatibles);
		unsigned int uinbLignes = MATparam.MATretournerNbLignes();
		unsigned int uinbColonnes = MATparam.MATretournerNbColonnes();
		tTypeElements** newpptMatrice = new tTypeElements*[uinbLignes];
		for(unsigned int uiBoucle = 0; uiBoucle < uinbLignes; ++uiBoucle)
		{
			newpptMatrice[uiBoucle] = new tTypeElements[uinbColonnes];
		}
		for(unsigned int uiBoucleLignes=0; uiBoucleLignes<uinbLignes;uiBoucleLignes++)
		{
			for(unsigned int uiBoucleColonnes=0; uiBoucleColonnes<uinbColonnes;uiBoucleColonnes++)
			{
				newpptMatrice[uiBoucleLignes][uiBoucleColonnes]= constante*MATparam.MATretournerpptelements(uiBoucleLignes,uiBoucleColonnes);
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice<tTypeElements>(uinbColonnes, uinbLignes, newpptMatrice);
		for(unsigned int uiBoucle=0; uiBoucle<uinbLignes;uiBoucle++)
			delete(newpptMatrice[uiBoucle]);
		delete(newpptMatrice);
        return NewMatrice;
	}

	template<typename tTypeElements>
	CMatrice<tTypeElements> operator*(double constante, CMatrice<tTypeElements> MATparam)
	{
		//if(uiMATnbColonnes!=MATparam.MATretournerNbLignes())
			//throw CException(eMatricesIncompatibles);
		unsigned int uinbLignes = MATparam.MATretournerNbLignes();
		unsigned int uinbColonnes = MATparam.MATretournerNbColonnes();
		tTypeElements** newpptMatrice = new tTypeElements*[uinbLignes];
		for(unsigned int uiBoucle = 0; uiBoucle < uinbLignes; ++uiBoucle)
		{
			newpptMatrice[uiBoucle] = new tTypeElements[uinbColonnes];
		}
		for(unsigned int uiBoucleLignes=0; uiBoucleLignes<uinbLignes;uiBoucleLignes++)
		{
			for(unsigned int uiBoucleColonnes=0; uiBoucleColonnes<uinbColonnes;uiBoucleColonnes++)
			{
				newpptMatrice[uiBoucleLignes][uiBoucleColonnes]= constante*MATparam.MATretournerpptelements(uiBoucleLignes,uiBoucleColonnes);
			}
		}
		CMatrice<tTypeElements> NewMatrice = CMatrice<tTypeElements>(uinbColonnes, uinbLignes, newpptMatrice);
		for(unsigned int uiBoucle=0; uiBoucle<uinbLignes;uiBoucle++)
			delete(newpptMatrice[uiBoucle]);
		delete(newpptMatrice);
        return NewMatrice;
	}
	