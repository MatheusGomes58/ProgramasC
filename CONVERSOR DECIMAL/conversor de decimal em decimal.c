#include <stdio.h> 
#include <math.h> 


int main()
{
	int a, b, c, d, num, quociente, resto;
	
	printf("\n Entre com o valor para saque\n");
	scanf("%d", &num);
	
	quociente = num/10;
	resto=num%10;
	printf("\n %d \n", resto );
	
	resto = quociente%10;
	printf("\n %d \n", resto );
	
	resto = quociente/10;
	printf("\n %d \n", resto );


	return 0;
}
