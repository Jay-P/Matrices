#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	/*string line;
	ifstream myReadFile;
	myReadFile.open("ExempleMatrice.txt");
	if(myReadFile.is_open())
	{
	while(myReadFile.good())
	{
	getline(myReadFile,line);
	cout << line << endl;
	}
	myReadFile.close();
	}*/


	/*FILE * pFile;
	long lSize;
	char * buffer;
	size_t result;

	pFile = fopen ( "ExempleMatrice.txt" , "rb" );
	if (pFile==NULL) 
	{
	fputs ("File error",stderr); 
	exit (1);
	}

	// obtain file size:
	fseek (pFile , 0 , SEEK_END);
	lSize = ftell (pFile);
	rewind (pFile);

	// allocate memory to contain the whole file:
	buffer = (char*) malloc (sizeof(char)*lSize);
	if (buffer == NULL) 
	{
	fputs ("Memory error",stderr); 
	exit (2);
	}

	// copy the file into the buffer:
	result = fread (buffer,1,lSize,pFile);
	if (result != lSize) 
	{
	fputs ("Reading error",stderr); 
	exit (3);
	}
	cout << buffer << endl;

	/* the whole file is now loaded in the memory buffer. */

	// terminate
	/*fclose (pFile);
	free (buffer);*/




	/*ifstream fichier("ExempleMatrice.txt", ios::in);  // on ouvre le fichier en lecture

	if(fichier)  // si l'ouverture a réussi
	{       
	// instructions
	fichier.close();  // on ferme le fichier
	}
	else  // sinon
	{
	cerr << "Impossible d'ouvrir le fichier !" << endl;
	}*/

	FILE * pFile;
	char type[30] ;
	char nblignes[30] ;
	char nbcolonnes[30] ;
	char lignematrice[30] ;

	pFile = fopen ("ExempleMatrice.txt" , "r");
	if (pFile == NULL) 
		perror ("Error opening file");
	else 
	{
		fseek ( pFile , 12 , SEEK_SET );
		if ( fgets (type , 30 , pFile) != NULL )
			puts (type);

		fseek ( pFile , 9 , SEEK_CUR );
		if ( fgets (nblignes , 30 , pFile) != NULL )
			puts (nblignes);

		fseek ( pFile , 11 , SEEK_CUR );
		if ( fgets (nbcolonnes , 30 , pFile) != NULL )
			puts (nbcolonnes);

		fseek ( pFile , 9 , SEEK_CUR );
		for (int i = 1; i<=3; i++)
		{
			fgets (lignematrice , 30 , pFile);
			puts (lignematrice);
		}

		fclose (pFile);
	}

	return 0;
}
