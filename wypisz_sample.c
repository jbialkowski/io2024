#include <stdio.h>
#include "funkcje.h"


const char *autor_123456(void)
{
   return "Przykładowa Osoba";
}
 
void wypisz_123456(void)
{
   printf(" * %s\n", autor_123456());
}

