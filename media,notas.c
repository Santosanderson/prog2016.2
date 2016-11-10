#include<stdio.h>

int main()
{   
   float av1,av2,media;
    char nome[20]; 
  
   printf("\nQual seu nome:");
   scanf("%s",nome);
  
   printf("\nEntre com nota Av1:");
   scanf("%f",&av1);
  
   printf("\nEntre com nota Av2:");
   scanf("%f",&av2);

   media=(av1+av2) /2;
  
   printf("\nOla %s, Media = %.2f\n",nome,media);
  
  return 0;
 }
 