#include <stdio.h>
#include <iostream>

/*������ �� ����������� - https://github.com/AleksKey23/HomeWork.git */

main()
{	setlocale (LC_ALL, "russian");

 printf ("   ������� �1 \n\n");
 
   int mass[7];
    
   for (int i=0;i<7;i++)
   { printf (" ������� �����: ");
	 scanf ("%i", &mass[i]); }
    
   printf ("\n ������������������ ��������� ���� �����:\n ");
    
   for (int i=0;i<7;i++)
   { printf ("%i ", mass[i]); }    
 
 printf ("\n\n   ������� �2 \n\n");
   // next program
   
   int n;
   int mass2[100];
   printf (" ������� ���-�� ��������� �������: ");
   scanf ("%i", &n);
    
   for (int i=0;i<n;i++)
   { printf (" ������� �����: ");
	 scanf ("%i", &mass2[i]); }
	  
   printf ("\n ������������������ ��������� ���� �����:\n ");
    
   for (int i=0;i<n;i++)
   { printf ("%i ", mass2[i]); }

}
