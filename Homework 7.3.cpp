#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string.h>
/* ссылка на репозиторий - https://github.com/AleksKey23/HomeWork.git */

  bool kv (unsigned int n)
{
  for (int i=1;i*i<=n;i++)
  {
    if (i*i==n) 
	{ return true; }
  }
  return false;
}
//______________________________ 

  int kv (unsigned int n, int k)
{ 
  for (int i=1;i*i<=n;i++)
  { 
	if (i*i==n) 
	{ return k=1; }
  }
	return k=0;   
}
//______________________________ 

  int kv (unsigned int n, int *j)
{    
  for (int i=1;i*i<=n;i++)
  {
    if (i*i==n)
    { return *j=1; }
  }
    return *j=0; 
}
 

int main()
{ setlocale (LC_ALL, "russian");
  
  unsigned int n1,n2,n3;
  int k;
  
  printf (" ¬ведите 3 натуральных числа. \n");
  printf ("¬ведите 1 число: ");
  scanf ("%u", &n1);
  printf ("¬ведите 2 число: ");
  scanf ("%u", &n2);
  printf ("¬ведите 3 число: ");
  scanf ("%u", &n3);
  
  printf ("\n –езультат 1: \n");
  if (kv(n1)==true)
  { printf ("1 число €вл€етс€ квадратом другого числа\n"); }
  else
  { printf ("1 число не €вл€етс€ квадратом другого числа\n"); }
  if (kv(n2)==true)
  { printf ("2 число €вл€етс€ квадратом другого числа\n"); }
  else
  { printf ("2 число не €вл€етс€ квадратом другого числа\n"); }
  if (kv(n3)==true)
  { printf ("3 число €вл€етс€ квадратом другого числа\n"); }
  else
  { printf ("3 число не €вл€етс€ квадратом другого числа\n"); }  
  
  //____________________________________________________________
  
  printf ("\n¬ведите 1 число: ");
  scanf ("%u", &n1);
  printf ("¬ведите 2 число: ");
  scanf ("%u", &n2);
  printf ("¬ведите 3 число: ");
  scanf ("%u", &n3);
  
  printf ("\n –езультат 2: \n");
  k=kv(n1,k);
  if (k==1)
  { printf ("1 число €вл€етс€ квадратом другого числа\n"); }
  else
  { printf ("1 число не €вл€етс€ квадратом другого числа\n"); }
  k=kv(n2,k);
  if (k==1)
  { printf ("2 число €вл€етс€ квадратом другого числа\n"); }
  else
  { printf ("2 число не €вл€етс€ квадратом другого числа\n"); }
  k=kv(n3,k);
  if (k==1)
  { printf ("3 число €вл€етс€ квадратом другого числа\n"); }
  else
  { printf ("3 число не €вл€етс€ квадратом другого числа\n"); }
  
  //____________________________________________________________
  
  printf ("\n¬ведите 1 число: ");
  scanf ("%u", &n1);
  printf ("¬ведите 2 число: ");
  scanf ("%u", &n2);
  printf ("¬ведите 3 число: ");
  scanf ("%u", &n3);
  
  int *j;
  j=&k;
  
  printf ("\n –езультат 3: \n");
  kv(n1,j);
  if (*j==1)
  { printf ("1 число €вл€етс€ квадратом другого числа\n"); }
  else
  { printf ("1 число не €вл€етс€ квадратом другого числа\n"); }
  kv(n2,j);
  if (*j==1)
  { printf ("2 число €вл€етс€ квадратом другого числа\n"); }
  else
  { printf ("2 число не €вл€етс€ квадратом другого числа\n"); }
  kv(n3,j);
  if (*j==1)
  { printf ("3 число €вл€етс€ квадратом другого числа\n"); }
  else
  { printf ("3 число не €вл€етс€ квадратом другого числа\n"); }  
    
 
  return EXIT_SUCCESS;
}
