#include <stdio.h>
#include <iostream>

/*ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

main()
{	setlocale (LC_ALL, "russian");

   int n;
   printf (" Укажите кол-во целочисленных элементов, с которыми предстоит работать - ");
   scanf ("%i", &n);
   
   int c;
   int sum=0;
   int max=c;
   int min=c;
   
   for (int a=0;a<n;a=a+1)
  { 
     printf ("\n Введите число - ");
     scanf ("%i", &c);
	 sum=sum+c;
	   if (c>=max)
	   { max=c; }
	   if (c<=min)
	   {min=c;}
   }
   
   printf ("\n Сумма введенных чисел = %i", sum); 
   float sr=float(sum)/float(n); 
   printf ("\n Среднее арифметическое этих чисел = %.2f", sr); 
   printf ("\n Максимальное из введенных чисел - %i", max);
   printf ("\n Минимальное из введенных чисел - %i", min);

}
