#include <stdio.h>
#include <windows.h>
#include <math.h>



int main(void)
{
        float num1=0, 
			  divisor=0,
              num2=0,
              A=0,
              B=0,
              C=0,
              positivo=0, 
			  negativo=0,
              V=0;
        char oper;
        int x=0,y=0,a=0,b=0,c=0, m=0, z=0;

        
        
        do
        {
            
            Sleep(6000);
            system("cls");
            
            printf("\n\n____________________________________________________________________________________________________________________\n");
            printf("____________________________________________________________________________________________________________________\n");
            printf("\t\t\t\t\t Calculadora de MatheusGomes58 \n\n");
            
            printf("\nOperacoes Simples\t\t\tOperacoes Intermediarias\t\t\tOperacoes Avancadas\n");
			printf("'+' : soma\t\t\t\t'^' : potenciacao\t\t\t\t'3' : volume da esfera\n");
            printf("'-' : subtracao\t\t\t\t'#' : raiz quadradra\t\t\t\t'h' : hipotenuza\n");
            printf("'*' : multiplicao\t\t\t'$' : numeros divisores\t\t\t\t'2' : baskara\n");
            printf("'/' : divisao\t\t\t\t\t\t\t\t\t\t'r' : radianos\n");
            printf("'%c' : resto da divisao\n",37);
        
            
            printf("\n\t\t\t\t\tConfiguracoes\n");
            printf("\t\t\t\t\t'!' : limpa a calculadora\n");
            printf("\nExemplos de como efetuar operacoes: 1 + 1 ,  2.1 * 3.1");
            printf("\nPara sair digite: 0 a 0");
            printf("\n____________________________________________________________________________________________________________________\n");
            printf("____________________________________________________________________________________________________________________\n\n\n");


     
            scanf("%f", &num1);
      
            scanf(" %c",&oper, &m);
     
            scanf("%f", &num2);


            printf("Calculando: %.2f %c %.2f = ", num1,oper,num2);
            

            switch( oper )
            {
                case '+':
                        printf("%.2f\n\n", num1 + num2);
                        break;

                case '-':
                        printf("%.2f\n\n", num1 - num2);
                        break;

                case '*':
                        printf("%.2f\n\n", num1 * num2);
                        break;

                case '/':
                        if(num2 != 0)
                            printf("%.2f\n\n", num1 / num2);
                        else
                            printf("Nao existe divisao por 0\n\n");
                        break;

                case '%':
                        printf("%d\n\n", (int)num1 % (int)num2);
                        break;

                case '^':
                        a = (int)num1;
                        b = (int)num2;
                        c = pow(a,b);
                        printf("%d\n\n", c);
                        break;

                case '#':
                        a = (int)num1;
                        c = sqrt(a);
                        printf("%d\n\n", c);
                        break;

                case '!':
                        Sleep(5000);
                        system("cls");
                        break;

                case '$':
	                    for ( divisor = 1; divisor <= num1; divisor++) 
						printf("%2d", divisor);
						break;

                
                case '3':
                	
                		Sleep(700);
            			system("cls");
                	
	                	printf("\nEntre com um sua Raio da Esfera\n\n");
						scanf("%f", &A);
						
						V = (4 * 3.141592 * pow(A,3)) / 3;
						
						printf("\n Calculando Volume da Esfera\n");
						printf("\nV = (4 * 3.141592 * (%.1f^3)) / 3 = %.1f\n", A, V );
						break;
                
                
                case 'h':
                	
                		Sleep(700);
            			system("cls");
                		
	                	printf("\nInsira o valor do cateto adjascente\n");
						scanf("%f", &B);
					     
					    printf("\nInsira o valor do cateto oposto\n");
					    scanf("%f", &C);
					
						A = sqrt(B*B + C*C);
					
						printf("\n Descobrindo hipotenuza\n");
						printf("\na = raiz(b = %.1f^2 + c = %.1f^2) = %.1f\n", B, C, A );
	                	break;
                	
                
                case '2':
                		
                		Sleep(700);
            			system("cls");
                		
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
						break;
					
                
                case 'r':
                		x=0;
						break;
            }

			z++;
			
        }while(z=20000000000000000000000000000);
		
		printf(" Fechando calculadora!\n ");
        return 0;
}
