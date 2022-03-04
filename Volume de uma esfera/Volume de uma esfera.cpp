#include <stdio.h> 
#include <windows.h>
#include <math.h>

int main(void)
{
	float a, b, c, d, V,raio;
	
	do
    {
        printf("\n\n________________________________________________________________\n");
        printf("________________________________________________________________\n");
				
		printf("\n\t\t Entre com um sua Raio da Esfera\n\n");
		scanf("%f", &a);
		
		V = (4 * 3.141592 * pow(a,3)) / 3;
		
		printf("\n\t\t Calculando Volume da Esfera\n");
		printf("\n\t\t V = (4 * 3.141592 * (%.1f^3)) / 3 = %.1f\n", a, V );

		
		printf("\n________________________________________________________________\n");
        printf("________________________________________________________________\n\n\n");
        
        
        if (raio >= 1000)
		{
			Sleep(5000);
        	system("cls");	
		} 
	 	
	}while(raio != 0);


	return 0;
}

