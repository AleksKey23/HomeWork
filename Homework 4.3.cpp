#include <stdio.h>
#include <iostream>

/*ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

main()
{	setlocale (LC_ALL, "russian");
   
   int n;
   int mass[100];
   printf (" Укажите кол-во элементов массива: ");
   scanf ("%i", &n);
    
   for (int i=0;i<n;i++)
   { printf (" Введите число: ");
	 scanf ("%i", &mass[i]); }
	  
   printf ("\n Последовательность введенных Вами чисел: \n");
    
   for (int i=0;i<n;i++)
   { printf (" %i", mass[i]); }

      printf ("\n\n");
   
   bool flag=true;     // поднимаем флаг, чтобы зайти в цикл
  
   while (flag)        // если переменная true --> начинается цикл
   { flag=false;       // опускаем флаг
    for (int i=0;i<n-1;i++)
    { if (mass[i]>mass[i+1])
     {
   	   int c=mass[i];
   	   mass[i]=mass[i+1];
   	   mass[i+1]=c;
   	   flag=true;       // если произошла замена переменных местами, поднимаем флаг
     }
    }
   }
   printf ("\n Последовательность от меньшего к большему: \n");
   for (int i=0;i<n;i++)
   { printf (" %i", mass[i]); }









}
