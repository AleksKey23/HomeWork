#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string.h>
/*ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

int main()
{ setlocale (LC_ALL, "russian");
   
   char stroka[100];
   int q=0;
   
    
    // Задание №1
    printf (" Задание №1 \n Удалим первый символ. \n");
    printf (" Введите слово:  ");
    gets(stroka);
    q=strlen(stroka);
    for (int j=0;j<q;j++)
    { stroka[j]=stroka[j+1]; }
    printf (" Вот что получилось:  %s", stroka);
    
    
    // Задание №2
    printf ("\n\n Задание №2 \n Зеркально отобразим. \n");
    printf (" Введите слово:  ");
    gets(stroka);
    q=strlen(stroka);

    char str[100];
    for (int i=q-1;i>=0;i--)
    {
      str[(q-1)-i]=stroka[i];
    }
    str[q]=stroka[q];  // -------------------------> Передаю значение '\0' из первой строки во вторую
    printf (" Вот что получилось:  %s", str);     // (правда не совсем понимаю насколько это 
                                                  // нужно/ненужно делать).
                                                  
                                 
    printf ("\n и также:  ");
    
    for (int j=q-1;j>=0;j--)         //--------------> Данный способ самый простой, если нужно только
	  { printf ("%c", stroka[j]); }  //--------------> вывести строку на экран и в дальнейшем нет 
                                     //                нужды пользоваться полученной строкой.
                                     
  return EXIT_SUCCESS;
}
