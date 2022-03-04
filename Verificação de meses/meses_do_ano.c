#include <stdio.h> 
#include <windows.h>
#include <math.h> 


int main(void)
{
	int a, b, c, d, mes;
	
	do
    {
        printf("\n\n________________________________________________________________\n");
        printf("________________________________________________________________\n");
				
		printf("\n\t\t Entre com o numero do mes\n\n\t\t\t");
		scanf("%d", &mes);
		
		switch (mes)
		{
			case 1: printf(" janeiro "); break;
			case 2: printf(" fevereiro "); break;
			case 3: printf(" março "); break;
			case 4: printf(" abril "); break;
			case 5: printf(" maio "); break;
			case 6: printf(" junho "); break;
			case 7: printf(" julho "); break;
			case 8: printf(" agosto "); break;
			case 9: printf(" setembto "); break;
			case 10: printf(" outubro "); break;
			case 11: printf(" novembro "); break;
			case 12: printf(" dezembro "); break;
		}
			
		
		
		printf("\n________________________________________________________________\n");
        printf("________________________________________________________________\n\n\n");
        
        
        if (mes >= 13)
		{
			Sleep(3000);
        	system("cls");	
		} 
	 	
	}while(mes != 0);


	return 0;
}