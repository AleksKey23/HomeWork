#include <stdio.h>
#include <iostream>

/* ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

main()
{
	int day;
    printf ("Vvedite nomer dnya nedeli\n");
    scanf ("%i", &day);
    
    switch (day)
    { case 1:
       { printf ("Eto ponedelnik (devil day)");}
      break;
      
      case 2:
       { printf ("Eto vtornik");}
       break;
       
       case 3:
       { printf ("Eto sreda");}
       break;
       
       case 4:
       { printf ("Eto chetverg (so close)");}
       break;
       
       case 5:
       { printf ("Eto pyatniza! yuhooo");}
       break;
       
       case 6:
       { printf ("Eto subbota");}
       break;
       
       case 7:
       { printf ("Eto voskresenie");}
       break;
       
       default:
       { printf ("Error. Takogo dnya nedeli poka net, mozhet let cherez 50...");}
       break;
    }
	
}
