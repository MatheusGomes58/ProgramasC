#include <stdio.h> 
#include <windows.h>
#include <math.h> 


int main(void)
{
	char resp1, resp2, resp3, resp4, a;
	
	do
    {
        printf("\n\n________________________________________________________________\n");
        printf("__________________________Chat_Bot______________________________\n");
				
		printf("\n\t\t Maquina : oi\n");
		scanf("%s",&resp1);
		printf("\n\t\t Maquina : tudo bem? \n" );
		scanf("%s",&resp2);
		printf("\n\t\t Maquina : que bom, posso te ajudar? \n" );
		scanf("%s",&resp3);
		printf("\n\t\t Maquina : nao voce e chato! \n" );
		scanf("%s",&resp4);
		printf("\n\t\t Maquina : provavelmente nao \n" );
		
		printf("\n________________________________________________________________\n");
        printf("________________________________________________________________\n\n\n");
        
        
        if (a >= 'e')
		{
			Sleep(3000);
        	system("cls");	
		} 
	 	
	}while(a != 0);


	return 0;
}
