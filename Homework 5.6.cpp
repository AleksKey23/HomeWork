#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

int main()
{ setlocale (LC_ALL, "russian");
   
   int line=0;
   int col=0;
   int mass[100][100];
   bool flag=true;
   
   
   printf (" Здравствуйте. \n Введите кол-во строк массива: ");
   scanf ("%i", &line);
   printf (" Введите кол-во столбцов массива: ");
   scanf ("%i", &col);
   
   for (int j=0;j<line;j++) 
    { int s=j+1;
	  printf ("\n Введите значения для %i строки \n", s);
	  for(int i=0;i<col;i++)
      { 
	    printf (" Введите значение: ");
	    scanf ("%i", &mass[j][i]);
	  }
    }
   
   printf ("\n Вы сделали вот такой двумерный массив: \n\n");  
   for (int j=0;j<line;j++)         
    { 
	  for(int i=0;i<col;i++)         
      { printf (" %6i", mass[j][i]); }
      printf ("\n\n");
    }

   
   printf ("\n Задание 1 \n");
   printf (" Массив отсортирован построчно \n\n");
   
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
    
    
   printf ("\n Задание 2 \n");
   printf (" Поменяны первый и последний столбцы \n\n");
   
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
