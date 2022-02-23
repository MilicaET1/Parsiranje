#include <stdio.h>
#include <string.h>
#include "funkcije.h"

int main(int argc, char** argv)
{
	char* opcija = argv[argc-1];
	char opc = opcija[0];

	switch(opc)
	{
		case '1':
			for(int i=1; i<argc-1; i++)
			{
				VelikaSlova(argv[i]);
			}
			break;
		case '2':
			for(int i=1; i<argc-1; i++)
			{
				Abc(argv[i]);
			}
			break;
		case '3':
			for(int i=1; i<argc-1; i++)
			{
				IzbaciBroj(argv[i]);
			}
			break;
		case '4':
			for(int i=1; i<argc-1; i++)
			{
				Palindrom(argv[i]);
			}
			break;
		default:
			printf("---------------------");
			printf("\nUnos je pogresan!!!\n");
			printf("---------------------\n");
			break;
	}
}
