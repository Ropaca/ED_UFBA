#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<math.h> 
float le_notas (float n1, float n2)
{
	if(n1<0 || n1>10 || n2<0 || n2>10)
		//printf("Notas Válidas: N1 = %f e N2 = %f", n1, n2);
		printf("Notas Inválidas. Nota tem que estar entre 0 e 10!");
	else
		//printf("Notas Inválidas. Nota tem que estar entre 0 e 10!");
		printf("Notas Válidas: N1 = %f e N2 = %f", n1, n2);
		//*n1=null;
		//*n2=null;
		exit(0);
}
float calc_media (float n_1, float n_2)
{
	float Ms, Mp;
	Ms=(n_1+n_2)/2;
	Mp=(n_1+n_2*2)/3;
	printf("Media Simples = %f e Media Ponderada = %f", Ms, Mp);	
}
float exibe_dados (float N1, float N2)
{
	le_notas (N1,N2);
	calc_media (N1,N2);
	//return 0;
}
int main()
{
	float N_1, N_2;
	printf("Digite a primeira nota\n");
	scanf("%f",&N_1);
	printf("Digite a segunda nota\n");
	scanf("%f",&N_2);
	exibe_dados (N_1, N_2);
	return 0;	
}
