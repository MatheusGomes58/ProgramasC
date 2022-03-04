#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(void)
{
        float num1,
              num2;
        char oper;
        int x,y,a,b,c, divisor;

        
        
        do
        {
            
            printf("\n\n________________________________________________________________\n");
            printf("________________________________________________________________\n");
            printf("\t\t Calculadora de MatheusGomes58 \n\n");
            printf("Operacoes Disponiveis\n");
            printf("'+' : soma\n");
            printf("'-' : subtracao\n");
            printf("'*' : multiplicao\n");
            printf("'^' : potenciacao\n");
            printf("'#' : raiz quadradra\n");
            printf("'/' : divisao\n");
            printf("'%' : resto da divisao\n");
            printf("'$' : numeros divisores\n");
            printf("'!' : limpa a calculadora\n");
            printf("\nExemplos de como efetuar operacoes: 1 + 1 ,  2.1 * 3.1");
            printf("\nPara sair digite: 0 0 0");
            printf("\n________________________________________________________________\n");
            printf("________________________________________________________________\n\n\n");


     
            scanf("%f", &num1);
      
            scanf(" %c",&oper);
     
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

                case '$':
                    for ( divisor = 1; divisor <= num1; divisor++) printf("%2d", divisor);

                

                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf(" Operador invalido\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");
                            
            }

        }while(num1 != 0 && oper != '0' && num2 != 0);

        return 0;
}
