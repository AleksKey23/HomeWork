#include <stdio.h>
#include <iostream>

/*������ �� ����������� - https://github.com/AleksKey23/HomeWork.git */

main()
{	setlocale (LC_ALL, "russian");
   
   int n;
   int mass[100];
   printf (" ������� ���-�� ��������� �������: ");
   scanf ("%i", &n);
    
   for (int i=0;i<n;i++)
   { printf (" ������� �����: ");
	 scanf ("%i", &mass[i]); }
	  
   printf ("\n ������������������ ��������� ���� �����: \n");
    
   for (int i=0;i<n;i++)
   { printf (" %i", mass[i]); }

      printf ("\n\n");
   
   bool flag=true;     // ��������� ����, ����� ����� � ����
  
   while (flag)        // ���� ���������� true --> ���������� ����
   { flag=false;       // �������� ����
    for (int i=0;i<n-1;i++)
    { if (mass[i]>mass[i+1])
     {
   	   int c=mass[i];
   	   mass[i]=mass[i+1];
   	   mass[i+1]=c;
   	   flag=true;       // ���� ��������� ������ ���������� �������, ��������� ����
     }
    }
   }
   printf ("\n ������������������ �� �������� � ��������: \n");
   for (int i=0;i<n;i++)
   { printf (" %i", mass[i]); }









}
