#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string.h>
/* ������ �� ����������� - https://github.com/AleksKey23/HomeWork.git */

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
  
  printf (" ������� 3 ����������� �����. \n");
  printf ("������� 1 �����: ");
  scanf ("%u", &n1);
  printf ("������� 2 �����: ");
  scanf ("%u", &n2);
  printf ("������� 3 �����: ");
  scanf ("%u", &n3);
  
  printf ("\n ��������� 1: \n");
  if (kv(n1)==true)
  { printf ("1 ����� �������� ��������� ������� �����\n"); }
  else
  { printf ("1 ����� �� �������� ��������� ������� �����\n"); }
  if (kv(n2)==true)
  { printf ("2 ����� �������� ��������� ������� �����\n"); }
  else
  { printf ("2 ����� �� �������� ��������� ������� �����\n"); }
  if (kv(n3)==true)
  { printf ("3 ����� �������� ��������� ������� �����\n"); }
  else
  { printf ("3 ����� �� �������� ��������� ������� �����\n"); }  
  
  //____________________________________________________________
  
  printf ("\n������� 1 �����: ");
  scanf ("%u", &n1);
  printf ("������� 2 �����: ");
  scanf ("%u", &n2);
  printf ("������� 3 �����: ");
  scanf ("%u", &n3);
  
  printf ("\n ��������� 2: \n");
  k=kv(n1,k);
  if (k==1)
  { printf ("1 ����� �������� ��������� ������� �����\n"); }
  else
  { printf ("1 ����� �� �������� ��������� ������� �����\n"); }
  k=kv(n2,k);
  if (k==1)
  { printf ("2 ����� �������� ��������� ������� �����\n"); }
  else
  { printf ("2 ����� �� �������� ��������� ������� �����\n"); }
  k=kv(n3,k);
  if (k==1)
  { printf ("3 ����� �������� ��������� ������� �����\n"); }
  else
  { printf ("3 ����� �� �������� ��������� ������� �����\n"); }
  
  //____________________________________________________________
  
  printf ("\n������� 1 �����: ");
  scanf ("%u", &n1);
  printf ("������� 2 �����: ");
  scanf ("%u", &n2);
  printf ("������� 3 �����: ");
  scanf ("%u", &n3);
  
  int *j;
  j=&k;
  
  printf ("\n ��������� 3: \n");
  kv(n1,j);
  if (*j==1)
  { printf ("1 ����� �������� ��������� ������� �����\n"); }
  else
  { printf ("1 ����� �� �������� ��������� ������� �����\n"); }
  kv(n2,j);
  if (*j==1)
  { printf ("2 ����� �������� ��������� ������� �����\n"); }
  else
  { printf ("2 ����� �� �������� ��������� ������� �����\n"); }
  kv(n3,j);
  if (*j==1)
  { printf ("3 ����� �������� ��������� ������� �����\n"); }
  else
  { printf ("3 ����� �� �������� ��������� ������� �����\n"); }  
    
 
  return EXIT_SUCCESS;
}
