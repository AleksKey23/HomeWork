#include <stdio.h>
#include <iostream>

/*ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

main()
{	setlocale (LC_ALL, "russian");

 printf ("   Задание №1 \n\n");
 
   int mass[7];
    
   for (int i=0;i<7;i++)
   { printf (" Введите число: ");
	 scanf ("%i", &mass[i]); }
    
   printf ("\n Последовательность введенных Вами чисел:\n ");
    
   for (int i=0;i<7;i++)
   { printf ("%i ", mass[i]); }    
 
 printf ("\n\n   Задание №2 \n\n");
   // next program
   
   int n;
   int mass2[100];
   printf (" Укажите кол-во элементов массива: ");
   scanf ("%i", &n);
    
   for (int i=0;i<n;i++)
   { printf (" Введите число: ");
	 scanf ("%i", &mass2[i]); }
	  
   printf ("\n Последовательность введенных Вами чисел:\n ");
    
   for (int i=0;i<n;i++)
   { printf ("%i ", mass2[i]); }

}
