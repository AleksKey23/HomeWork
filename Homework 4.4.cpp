#include <stdio.h>
#include <iostream>
#include <cstdlib>

/* ������ �� ����������� - https://github.com/AleksKey23/HomeWork.git */

int main()
{ setlocale (LC_ALL, "russian");

   
   int n=0;
   int mass[100];
   printf (" ������� ���-�� ��������� �������: ");
   scanf ("%i", &n);
   
   for (int i=0;i<n;i++)
   { printf (" ������� �����: ");
	 scanf ("%i", &mass[i]); }
	 
   int max,min;
   min=max=mass[0];
   int sum=0;
   for (int i=0;i<n;i++)  
   { if (mass[i]>=max)
	 { max=mass[i]; }
	 if (mass[i]<=min)
	 { min=mass[i]; }
     sum=sum+mass[i]; }
   printf ("\n ����� ��������� ����� = %i", sum); 
   float sr=float(sum)/float(n);
   printf ("\n ������� �������������� ���� ����� = %.3f", sr); 
   printf ("\n ����������� �� ��������� ����� = %i", min); 
   printf ("\n ������������ �� ��������� ����� = %i", max); 
   
   
 return EXIT_SUCCESS;
}
