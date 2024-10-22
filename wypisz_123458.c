#include <stdio.h>
#include "funkcje.h"


const char *autor_123458(void)
{
   return "Kolejna Osoba";
}
 
void wypisz_123458(void)
{
   printf(" * %s\n", autor_123458());
}

