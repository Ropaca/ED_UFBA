#include <stdio.h>
#include <stdlib.h>
int maior (int a, int b)
{
	if(a<b)
		printf ("O maior valor = %d, O segundo maior valor = %d", b, a);
	else
		printf ("O maior valor = %d, O segundo maior valor = %d", a, b);
}
int main()
{
	int A, B;
	printf("Digite um valor\n");
	scanf("%d",&A);
	printf("Digite outro valor\n");
	scanf("%d",&B);
	maior (A, B);	
}
