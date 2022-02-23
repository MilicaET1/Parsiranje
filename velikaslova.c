#include <stdio.h>
#include <string.h>
#include "funkcije.h"
#include <stdlib.h>
#include <ctype.h>

void VelikaSlova (char* NestoVeliko)
{
	int duzina = strlen(NestoVeliko);

	for(int i =0; i < duzina; i++)
	{
		NestoVeliko[i] = toupper(NestoVeliko[i]);
	}

	printf("\nRec velikim slovima:%s\n", NestoVeliko);
}
