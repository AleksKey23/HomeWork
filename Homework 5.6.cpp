#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*������ �� ����������� - https://github.com/AleksKey23/HomeWork.git */

int main()
{ setlocale (LC_ALL, "russian");
   
   int line=0;
   int col=0;
   int mass[100][100];
   bool flag=true;
   
   
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

   
   printf ("\n ������� 1 \n");
   printf (" ������ ������������ ��������� \n\n");
   
   while (flag)
   {flag=false;
    for (int j=0;j<line;j++)
     { for (int i=0;i<col;i++)
        { for (int i=0;i<col-1;i++)
           {
           	if (mass[j][i]>mass[j][i+1])
           	{ int buf=mass[j][i];
           	  mass[j][i]=mass[j][i+1];
           	  mass[j][i+1]=buf;
           	  flag=true;
			}
		   }
	    }
  	 }
   }
   
   for (int j=0;j<line;j++)         
    { 
	  for(int i=0;i<col;i++)         
      { printf (" %6i", mass[j][i]); }
      printf ("\n\n");
    }
    
    
   printf ("\n ������� 2 \n");
   printf (" �������� ������ � ��������� ������� \n\n");
   
   for (int j=0;j<line;j++)
    { int buf=mass [j][0];
        mass [j][0]=mass [j][col-1];
        mass [j][col-1]=buf;         }
	
   
   for (int j=0;j<line;j++)         
    { 
	  for(int i=0;i<col;i++)         
      { printf (" %6i", mass[j][i]); }
      printf ("\n\n");
    }
   
   

  return EXIT_SUCCESS;
}
