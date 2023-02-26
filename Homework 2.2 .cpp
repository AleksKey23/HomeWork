#include <stdio.h>
#include <iostream>

/*ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

main()
{
	int a,b;
	printf ("Get me first number and press Enter - ");
	scanf ("%i",&a);
	printf ("Get me second number and press Enter - ");
	scanf ("%i",&b);
	int c=a+b;
	printf ("Summa = %i, ", c);
	int d=a-b;
	printf ("Raznica = %i, ", d);
	int e=a*b;
	float f=float(a)/float(b);
	printf ("Proizvedenie = %i, Delenie = %f. \n\n", e,f);
	
	if (a>b)
	{printf ("Pervoe chislo bolshe vtorogo!");}
	else
	{
	 if (a==b)
		{printf ("Chisla ravnie (odinakovie)!");}
	 else
	    {printf ("Vtoroe chislo bolshe pervogo!");}
	}
	
}
