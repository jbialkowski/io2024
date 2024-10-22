#include <stdio.h>
#include "funkcje.h"

int wypisz(int indeks) 
{
   switch (indeks) {
     case 123456:
       wypisz_123456();
       return 1;
     default:
       return 0;
   }
}

int wypisz_wszystkich(void)
{
   int i, ilosc = 0;
   for (i = INDEX_MIN; i <= INDEX_MAX; i++)
     ilosc += wypisz(i);
   return ilosc;
}

