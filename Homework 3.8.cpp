#include <stdio.h>
#include <iostream>

/*������ �� ����������� - https://github.com/AleksKey23/HomeWork.git */

main()
{	setlocale (LC_ALL, "russian");

   int n;
   printf (" ������� ���-�� ������������� ���������, � �������� ��������� �������� - ");
   scanf ("%i", &n);
   
   int c;
   int sum=0;
   int max=c;
   int min=c;
   
   for (int a=0;a<n;a=a+1)
  { 
     printf ("\n ������� ����� - ");
     scanf ("%i", &c);
	 sum=sum+c;
	   if (c>=max)
	   { max=c; }
	   if (c<=min)
	   {min=c;}
   }
   
   printf ("\n ����� ��������� ����� = %i", sum); 
   float sr=float(sum)/float(n); 
   printf ("\n ������� �������������� ���� ����� = %.2f", sr); 
   printf ("\n ������������ �� ��������� ����� - %i", max);
   printf ("\n ����������� �� ��������� ����� - %i", min);

}
