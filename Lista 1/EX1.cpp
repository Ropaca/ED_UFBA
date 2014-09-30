#include <stdio.h>
#include <stdlib.h>
int troca (int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int A, B;
	printf("Digite um valor para A\n");
	scanf("%d",&A);
	printf("Digite um valor para B\n");
	scanf("%d",&B);
	troca (&A, &B);
	printf ("A=%d B=%d", A, B);
}
