#include<stdio.h>

int main()
  
{   
  char letra;
  
   printf("\nEntre com a letra");
   scanf("%d",&letra);
  
  if( (letra>=65)&&(letra<=90) );
  {
  printf("\nLetra Maiscula!!!\n");
  }
  else if( (letra>=48)&&(letra<=57) );
  {
  printf("\nvoce digitou um numero\n");
  }
  else if( (letra>=97)&&(letra<=122) );
  {
    printf("\nLetra Minuscula!!!\n");
  }
  
  
  system("pause");
return 0;
}