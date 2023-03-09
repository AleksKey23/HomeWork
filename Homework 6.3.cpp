#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string.h>
/*ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

int main()
{ setlocale (LC_ALL, "russian");
   
   char stroka[100];
   printf (" Введите слово:  ");
   gets(stroka);
   
   printf ("\n Задание №1 \n");
   printf (" Второй символ слова - %c\n", stroka[1]);
   
   
     printf ("\n\n Задание №2 \n");
     printf (" Я поменял местами третью и последнюю буквы:  ");
     int q=strlen(stroka);                                      // определяется кол-во элементов в введенной строке
   
     char buf=stroka[2];
     stroka[2]=stroka[q-1];
     stroka[q-1]=buf;
   
     puts (stroka);
   
   
       printf ("\n\n Задание №3 \n");
       int n;
	   printf (" Я удалю нужный Вам символ из этого слова.\n Введите номер символа:  ");
	   scanf ("%d", &n);
	   
       for (int j=n-1;j<strlen(stroka);j++)
       { stroka[j]=stroka[j+1]; }
       printf (" Вот что получилось:  %s", stroka);
        
       
       
   
   
   
   
   
   
   





  return EXIT_SUCCESS;
}
