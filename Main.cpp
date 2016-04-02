#include "CMatrice.h"

int main()
{
	double** pptMatrice = new double*[2];
	for(unsigned int i = 0; i < 2; i++)
		pptMatrice[i] = new double[2];
	pptMatrice[0][0]=1;
	pptMatrice[0][1]=5;
	pptMatrice[1][0]=1;
	pptMatrice[1][1]=5;
	double** pptMatrice2 = new double*[2];
	for(unsigned int i2 = 0; i2 < 2; i2++)
		pptMatrice2[i2] = new double[2];
	pptMatrice2[0][0]=1;
	pptMatrice2[0][1]=5;
	pptMatrice2[1][0]=1;
	pptMatrice2[1][1]=5;
	CMatrice<double> M1 = CMatrice<double>(2,2,pptMatrice);
	//for(unsigned int uiBoucle=0; uiBoucle<2;uiBoucle++)
			//delete(pptMatrice[uiBoucle]);
	//delete(pptMatrice);
	CMatrice<double> M2 = CMatrice<double>(2,2,pptMatrice2);
	//for(unsigned int uiBoucle=0; uiBoucle<2;uiBoucle++)
			//delete(pptMatrice2[uiBoucle]);
	//delete(pptMatrice2);
	CMatrice<double> M3 = M1*M2;
	//return M3.MATretournerpptelements(0,0);
	return 0;
}