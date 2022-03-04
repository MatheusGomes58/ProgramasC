#include <stdio.h> 
#include <math.h> 


int main()
{
	float a, b, c;
	
	printf("\nInsira o valor do cateto adjascente\n");
	scanf("%f", &b);
     
    printf("\nInsira o valor do cateto oposto\n");
    scanf("%f", &c);

	a = sqrt(b*b + c*c);

	printf("\Efetuando a operação\n");
	printf("\na = raiz(b = %.1f^2 + c = %.1f^2) = %.1f\n", b, c, a );

	return 0;
}