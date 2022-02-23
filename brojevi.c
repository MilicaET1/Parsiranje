#include <stdio.h>
#include <string.h>
#include "funkcije.h"



void IzbaciBroj (char* uzaludno)
{
	int duzina = strlen(uzaludno);
	int j;
	int i;

	for(i = 0; uzaludno[i] != '\0'; i++)
	{
		while(uzaludno[i] >= '0' && uzaludno[i] <= '9')
		{
			for(j = i; uzaludno[j] != '\0'; j++)
			{
				uzaludno[j] = uzaludno[j+1];
			}
		}

	}

	printf("\nRec bez brojeva je:%s\n", uzaludno);

}
