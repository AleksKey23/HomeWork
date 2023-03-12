#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string.h>
/* ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

  void sbp(char str[])
{
  printf ("Введите строку: ");
  gets (str);	
  int q=strlen(str);
  for (int i=0;i<q-1;i++)	
  {
  	while ((str[i]==' ')&&(str[i+1]==' '))
  	{ 
	  for (int j=i;j<q-1;j++)
	  { str[j+1]=str[j+2]; }
	}
	if (str[0]==' ')
	{
	  for (int j=0;j<q-1;j++)
	  { str[j]=str[j+1]; }	
	}
	q=strlen(str);
	if (str[q-1]==' ')
	{ int buf=str[q-1];
	  str[q-1]=str[q];
	  str[q]=buf;      }
  }
  printf ("Вот что получилось:|%s|", str); 	  // символы || использованы для показа отсутствия пробелов 
}

  void sis(char str[], char s)   
{
  printf ("Введите строку: ");
  gets (str);
  int q=strlen(str);
  printf ("Введите символ: ");
  scanf ("%c", &s);
  str[0]=str[q-1]=s;
  printf ("Вот что у вас получилось: %s", str); 
}


int main()
{ setlocale (LC_ALL, "russian");
  
  char str[100];
  printf ("Сейчас Вы введете строку, а я удалю из нее все лишние пробелы \n");
  sbp(str);
  
  printf ("\n\nСейчас Вы введете строку и символ, а я изменю первый и последний символы строки на Ваш символ \n");
  char str2[100];
  char s;
  sis(str2,s);

  return EXIT_SUCCESS;
}
