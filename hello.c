
#include <stdio.h>

//Prototypes (signatures) des fonctions
void boucleAvant();

int main(int argc, char**argv) {

	if (argc > 2) 
	{
		printf("Un seul argument permis\n");
	} else 
	{
		printf("Hello, %s \n",argv[1]);
	}	
	
	boucleAvant();
	return 0;
}

//Fonction  qui fait un for avec un printf de i
void boucleAvant()
{
	for(int i=0;i<10;++i)
	{
		printf("Valeur de i : %i\n",i);
	}
}
