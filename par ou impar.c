#include<stdio.h>
/*
dizer se o número e par ou impár

*/
int main()
{
	int num;
	
	printf("\nEntre com o numero:");
	scanf("%d",&num);
	
	if( (num%2)==0 )
	{//condicao vedadeira
		printf("\nNumero par!!");
	}
	else
	{//condicao falsa
		
		printf("\nNumero impar!!");
	}
	return 0;
}

