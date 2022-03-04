#include <stdio.h> 
#include <windows.h>
#include <math.h> 


int main(void)
{
	int a, b, c, d, idade;
	
	do
    {
        printf("\n\n________________________________________________________________\n");
        printf("________________________________________________________________\n");
				
		printf("\n\t\t Entre com um sua idade\n\n\t\t\t");
		scanf("%d", &idade);
		
		if (idade >= 18)
		{
		printf("\n\t\t Parabens voce e maior de idade \n" );
		} else{
			printf("\n\t\t voce e menor de idade \n" );	
		}
		
		printf("\n________________________________________________________________\n");
        printf("________________________________________________________________\n\n\n");
        
        
        if (idade >= 1000)
		{
			Sleep(3000);
        	system("cls");	
		} 
	 	
	}while(idade != 0);


	return 0;
}