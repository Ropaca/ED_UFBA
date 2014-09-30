#include <stdio.h>
#include <stdlib.h>
int maior_3 (int a, int b, int c)
{
	int t;
	if(a==b && a==c)
		return 1;
	else
		if(b>a && b>c)
			if(a>c)
				printf ("O valores ordenados são = %d, %d, %d", c, a, b);
			else
				printf ("O valores ordenados são = %d, %d, %d", a, c, b);
		else
			if(c>a && c>b)
				if(a>b)
					printf ("O valores ordenados são = %d, %d, %d", b, a, c);
				else
					printf ("O valores ordenados são = %d, %d, %d", a, b, c);
			else
				if(c>b)
					printf ("O valores ordenados são = %d, %d, %d", b, c, a);
				else
					printf ("O valores ordenados são = %d, %d, %d", c, b, a);
		return 0;				
		
}
int main()
{
	int A, B, C;
	printf("Digite o primeiro valor\n");
	scanf("%d",&A);
	printf("Digite o segundo valor\n");
	scanf("%d",&B);
	printf("Digite o terceiro valor\n");
	scanf("%d",&C);
	maior_3 (A, B, C);	
}
