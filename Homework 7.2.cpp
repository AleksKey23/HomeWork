#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <time.h>
/*ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

void zez (int mass[], int x)      // zez - от "заполнить элементы значени€ми"
{
  srand (time(NULL));
  
  for(int i=0;i<x;i++) 
      { 
	    mass[i]=rand()%50+(-15);
	  }	
  for (int i=0;i<x;i++)
   { printf (" %i ", mass[i]); }	  
}

int main()
{ setlocale (LC_ALL, "russian");

 int x=0;
 printf ("¬ведите размер массива 1: ");
 scanf ("%i", &x);
 int mass1[x];
 printf ("\n¬аш массив: \n");
 zez(mass1,x);
 
 printf ("\n\n¬ведите размер массива 2: ");
 scanf ("%i", &x);
 int mass2[x];
 printf ("\n Vash massiv: \n");
 zez(mass2,x);

 
  return EXIT_SUCCESS;
}
