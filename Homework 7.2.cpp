#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <time.h>
/*������ �� ����������� - https://github.com/AleksKey23/HomeWork.git */

void zez (int mass[], int x)      // zez - �� "��������� �������� ����������"
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
 printf ("������� ������ ������� 1: ");
 scanf ("%i", &x);
 int mass1[x];
 printf ("\n��� ������: \n");
 zez(mass1,x);
 
 printf ("\n\n������� ������ ������� 2: ");
 scanf ("%i", &x);
 int mass2[x];
 printf ("\n Vash massiv: \n");
 zez(mass2,x);

 
  return EXIT_SUCCESS;
}
