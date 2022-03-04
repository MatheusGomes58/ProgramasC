#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(void)
{
    int x;
    float Senha;
    
 
        do
        {
            printf("\n\n_____________________________________________________________\n");
            printf("\t\t Verificar Senha \n\n");
            printf("Digite a sua Senha:\n");
            scanf("%f", &Senha);
            
            if(x < 6 && Senha != /*insira a senha correta*/)
            {
                x++;
                printf("\nSenha Incorreta\n");
            } else if (Senha == /*insira a senha correta*/)
                {
                    printf("\nSenha Correta\n");    
            }else {
                printf("\nVocê ultrapassou o limite de tentativas\n");
            }

            printf("\n________________________________________________________________\n\n\n");
        
        }while (x == 200000 or x == 0)
        {
            return 0;
        }
 }