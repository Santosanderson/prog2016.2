#include<stdio.h>
/*
dizer se o n�mero e par ou imp�r

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

