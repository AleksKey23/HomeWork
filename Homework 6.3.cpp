#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string.h>
/*������ �� ����������� - https://github.com/AleksKey23/HomeWork.git */

int main()
{ setlocale (LC_ALL, "russian");
   
   char stroka[100];
   printf (" ������� �����:  ");
   gets(stroka);
   
   printf ("\n ������� �1 \n");
   printf (" ������ ������ ����� - %c\n", stroka[1]);
   
   
     printf ("\n\n ������� �2 \n");
     printf (" � ������� ������� ������ � ��������� �����:  ");
     int q=strlen(stroka);                                      // ������������ ���-�� ��������� � ��������� ������
   
     char buf=stroka[2];
     stroka[2]=stroka[q-1];
     stroka[q-1]=buf;
   
     puts (stroka);
   
   
       printf ("\n\n ������� �3 \n");
       int n;
	   printf (" � ����� ������ ��� ������ �� ����� �����.\n ������� ����� �������:  ");
	   scanf ("%d", &n);
	   
       for (int j=n-1;j<strlen(stroka);j++)
       { stroka[j]=stroka[j+1]; }
       printf (" ��� ��� ����������:  %s", stroka);
        
       
       
   
   
   
   
   
   
   





  return EXIT_SUCCESS;
}
