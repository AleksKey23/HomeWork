#include <stdio.h>
#include <iostream>

/*ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

main()
{
	long long int log,pass;
	printf ("Enter your login (phone number)\n");
	scanf ("%lli", &log);
	printf ("Enter password\n");
	scanf ("%lli", &pass);
	
	if (((log==89061239876)&&(pass==123456789))||((log==89264860646)&&(pass==112233445566778899))||((log==89032164812)&&(pass==923862335004687))||((log==88002008001)&&(pass==4959167171)))
	{printf ("\n Vi voshli kak polzovatel %lli", log);}
	else
	{printf ("\n ERROR!!! Please, try again.");}
	
	
}
