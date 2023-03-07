#include <stdio.h>
#include <iostream>
#include <cstdlib>

/* ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

int main()
{ setlocale (LC_ALL, "russian");

   
   int n=0;
   int mass[100];
   printf (" Укажите кол-во элементов массива: ");
   scanf ("%i", &n);
   
   for (int i=0;i<n;i++)
   { printf (" Введите число: ");
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
   printf ("\n Сумма введенных чисел = %i", sum); 
   float sr=float(sum)/float(n);
   printf ("\n Среднее арифметическое этих чисел = %.3f", sr); 
   printf ("\n Минимальное из введенных чисел = %i", min); 
   printf ("\n Максимальное из введенных чисел = %i", max); 
   
   
 return EXIT_SUCCESS;
}
