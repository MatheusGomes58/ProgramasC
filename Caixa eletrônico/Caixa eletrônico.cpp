#include <stdio.h> 
#include <math.h> 


int main()
{
	
	int num, quociente, saque;
	
	printf("\n Entre com o valor para saque\n");
	scanf("%i", &num);
	
	quociente=num/100;
	saque=num%100;
	printf("\n Notas de 100 = %d \n", quociente );
	
	quociente=saque/50;
	saque=num%50;
	printf("\n Notas de 50 =  %d \n", quociente );
	
	quociente=saque/20;
	saque=num%20;
	printf("\n Notas de 20 = %d \n", quociente );
	
	quociente=saque/10;
	saque=num%10;
	printf("\n Notas de 10 = %d \n", quociente );
	
	quociente=saque/5;
	saque=num%5;
	printf("\n Notas de 5 = %d \n", quociente );
	
	quociente=saque/2;
	saque=num%2;
	printf("\n Notas de 2 = %d \n", quociente );


	return 0;
}
