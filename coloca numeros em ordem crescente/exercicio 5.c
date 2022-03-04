
    #include <windows.h> // Biblioteca com Funções Basicas Windows 32/64 bits
    #include <math.h> // Biblioteca com Operações Matematicas Windows 32/64 bits
    #include <iostream> // Biblioteca com Funçoes Avançadas Windows 32/64 bits
    
    using namespace std;
    
    int main(void) // Void Padrão de execução
    {
      int num1,
            num2,
            num3,
            troca;

      int resp; // constante de programação
      
      do // void de repetição constante
      {
        printf("\n\n_____________________________________________________________\n"); //escreve na tela o valor entre aspas   
            printf("Digite o primeiro numero inteiro: ");//escreve na tela o valor entre aspas
            scanf("%d", &num1); // recebe o primeiro numero
            printf("Digite o segundo numero inteiro: ");//escreve na tela o valor entre aspas
            scanf("%d",&num2); // recebe o segundo numero
            printf("Digite o terceiro numero inteiro: ");//escreve na tela o valor entre aspas
            scanf ("%d", &num3); // recebe o terceiro numero
        
            if ((num1 <= num2) && (num2 <= num3))//compara os para gerar uma ordem 
            {
                printf ("A ordem Crescente e: %d %d %d", num1, num2, num3);//imprime a ordem correta
            }
            if ((num2 <= num1) && (num1 <= num3))//compara os para gerar uma ordem
            {
                printf ("A ordem Crescente e:  %d %d %d", num2, num1, num3);//imprime a ordem correta
            }
                
        printf("\n________________________________________________________________\n\n\n"); //escreve na tela o valor entre aspas
        
        printf("Digite 1 para continuar ou 2 para sair\n"); //escreve na tela o valor entre aspas
        scanf("%d", &resp); //recebe o valor de operação
        Sleep(600); // pausa com o resultado inicial 
        system("cls"); //limpa a tela reiniciando o programa
      
      }while (resp==1); // selo de repetição enquanto a resposta for 1
      
      return 0; //finaliza o programa
    }