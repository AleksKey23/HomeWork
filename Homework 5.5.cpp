#include <stdio.h>
#include <cstdlib>
#include <iostream>
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
   
   for (int j=0;j<line;j++) 
    { int s=j+1;
	  printf ("\n ������� �������� ��� %i ������ \n", s);
	  for(int i=0;i<col;i++)
      { 
	    printf (" ������� ��������: ");
	    scanf ("%i", &mass[j][i]);
	  }
    }
   
   printf ("\n �� ������� ��� ����� ��������� ������: \n\n");  
   for (int j=0;j<line;j++)         
    { 
	  for(int i=0;i<col;i++)         
      { printf (" %6i", mass[j][i]); }
      printf ("\n\n");
    }

   printf ("\n �������� �� ������� ���������: \n\n");
   for (int i=0;i<col;i++)         
    { 
	  for(int j=0;j<line;j++)         
      { printf (" %6i", mass[j][i]); }
      printf ("\n\n");
    }
    





  return EXIT_SUCCESS;
}
