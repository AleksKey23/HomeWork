#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string.h>
/*������ �� ����������� - https://github.com/AleksKey23/HomeWork.git */

int main()
{ setlocale (LC_ALL, "russian");
   
   char stroka[100];
   int q=0;
   
    
    // ������� �1
    printf (" ������� �1 \n ������ ������ ������. \n");
    printf (" ������� �����:  ");
    gets(stroka);
    q=strlen(stroka);
    for (int j=0;j<q;j++)
    { stroka[j]=stroka[j+1]; }
    printf (" ��� ��� ����������:  %s", stroka);
    
    
    // ������� �2
    printf ("\n\n ������� �2 \n ��������� ���������. \n");
    printf (" ������� �����:  ");
    gets(stroka);
    q=strlen(stroka);

    char str[100];
    for (int i=q-1;i>=0;i--)
    {
      str[(q-1)-i]=stroka[i];
    }
    str[q]=stroka[q];  // -------------------------> ������� �������� '\0' �� ������ ������ �� ������
    printf (" ��� ��� ����������:  %s", str);     // (������ �� ������ ������� ��������� ��� 
                                                  // �����/������� ������).
                                                  
                                 
    printf ("\n � �����:  ");
    
    for (int j=q-1;j>=0;j--)         //--------------> ������ ������ ����� �������, ���� ����� ������
	  { printf ("%c", stroka[j]); }  //--------------> ������� ������ �� ����� � � ���������� ��� 
                                     //                ����� ������������ ���������� �������.
                                     
  return EXIT_SUCCESS;
}
