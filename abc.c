#include <stdio.h>
#include <string.h>
#include "funkcije.h"

void Abc (char* abcsortiranje)
{
	char temp;
	int duzina = strlen(abcsortiranje);
	int i;
	int j;

	for(i=0; i<duzina-1; i++)
	{
		for(j=i+1; j<duzina; j++)
		{
			if(abcsortiranje[i]>abcsortiranje[j])
			{
				temp = abcsortiranje[i];
				abcsortiranje[i] = abcsortiranje[j];
				abcsortiranje[j] = temp;
			}
		}
	}

	printf("\nData rec u abecednom redu je:%s\n", abcsortiranje);
}
