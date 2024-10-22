#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funkcje.h"

int main(int argc, char* argv[]) 
{
   if (argc == 2 && !strcmp("-a", argv[1])) {
     int ilosc_autorow;

     printf("Współautorzy programu:\n");      
     ilosc_autorow = wypisz_wszystkich();
     printf("Ilość współautorów: %d\n", ilosc_autorow);      
   } else if (argc != 2) {
     printf("Sposób użycia:\n\t%s <numer indeksu> | -a\n", argv[0]);
   } else {
     int numer_indeksu, czy_znaleziony = 0;
     numer_indeksu = atoi(argv[1]);

     if (numer_indeksu >= INDEX_MIN && numer_indeksu <= INDEX_MAX)
     {
       czy_znaleziony = wypisz(numer_indeksu);       
     }    

     if (!czy_znaleziony) {
        printf("Nie znaleziono współautora numerze indeksu \"%s\"\n", argv[1]);
     }
   }   
   return 0;
}

