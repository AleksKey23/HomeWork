#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <time.h>
/*������ �� ����������� - https://github.com/AleksKey23/HomeWork.git */

int main()
{ setlocale (LC_ALL, "russian");
   
   int line=0;
   int col=0;
   int mass[100][100];
   
   printf (" ������������. \n ������� ���-�� ����� �������: ");
   scanf ("%i", &line);
   printf (" ������� ���-�� �������� �������: ");
   scanf ("%i", &col);
   
   srand (time(NULL));
   
   for (int j=0;j<line;j++)
    { 
	  for(int i=0;i<col;i++) 
      { 
	    mass[j][i]=rand()%10+(-2);
	  }
    }
   
   printf ("\n ������������ ����� ��������� ������: \n\n");  
   for (int j=0;j<line;j++)         
    { 
	  for(int i=0;i<col;i++)         
      { printf (" %6i", mass[j][i]); }
      printf ("\n\n");
    }


  return EXIT_SUCCESS;
}
