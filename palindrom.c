#include <stdio.h>
#include <string.h>
#include "funkcije.h"

void Palindrom (char* opcija)
{
	int i = 0;
	int duzina = strlen(opcija)-1;

	while(duzina > 1)
	{
		if(opcija[i++] != opcija[duzina--])
		{
			printf("\n%s Rec nije palindrom!\n", opcija);
			return;
		}
	}

	printf("\n%s Rec jeste palindrom!\n", opcija);
}
