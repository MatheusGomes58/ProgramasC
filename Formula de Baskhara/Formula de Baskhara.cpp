#include <stdio.h> 
#include <math.h> 


int main()
{
	float A, B, C, positivo, negativo;
	
	printf("\n\n________________________________________________________________\n");
    printf("________________________________________________________________\n");
		
	
	printf("\nInsira o valor da variavel A\n");
	scanf("%f", &A);
     
    printf("\nInsira o valor da variavel B\n");
    scanf("%f", &B);

	printf("\nInsira o valor da variavel C\n");
    scanf("%f", &C);

	positivo = (-B + sqrt(B*B - 4*A*C)) / 2*A;
	
	negativo = (-B - sqrt(B*B - 4*A*C)) / 2*A;

	printf("\n Calculando Resultados\n");
	printf("\nFator A = %.1f Fator B = %.1f\n", negativo, positivo);

	printf("\n________________________________________________________________\n");
    printf("________________________________________________________________\n\n\n");
        

	return 0;
}
