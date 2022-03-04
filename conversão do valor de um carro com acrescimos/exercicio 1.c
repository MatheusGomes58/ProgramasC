    #include <stdio.h> // Biblioteca Visual Padrão Windows 32/64 bits 
    #include <windows.h> // Biblioteca com Funções Basicas Windows 32/64 bits
    #include <math.h> // Biblioteca com Operações Matematicas Windows 32/64 bits
    #include <iostream> // Biblioteca com Funçoes Avançadas Windows 32/64 bits
    
    using namespace std;
    
    int main(void) // Void Padrão de execução
    {
      float valor, // Variavel com valor de entrada
            valorfin; // Variavel com valor de saida
      int resp; // constante de programação
      
      do // void de repetição constante
      {
        printf("\n\n_____________________________________________________________\n"); //escreve na tela o valor entre aspas   
            printf("\t\t Valor final do Carro \n\n"); //escreve na tela o valor entre aspas
            printf("Insira o valor de tabela do Carro:"); //escreve na tela o valor entre aspas
            scanf("%f", &valor); //recebe o valor de entrada ou valor inicial do carro
            
            valorfin=valor+(valor*0.3); //efetua a operação do exercicio em questão
            
            cout << fixed; //Operação para restringir o numero de casas decimais
            cout.precision(2); //escala de precisão das casas decimais
            cout << valorfin << endl; //Operação para restringir o numero de casas decimais
            
            printf("Valor final do Carro e: %.2f", valorfin); //escreve na tela o valor final da operação
            valor=0;//reseta o valor de entrada para reiniciar a operação
            
        printf("\n________________________________________________________________\n\n\n"); //escreve na tela o valor entre aspas
        
        printf("Digite 1 para continuar ou 2 para sair\n"); //escreve na tela o valor entre aspas
        scanf("%d", &resp); //recebe o valor de operação
        Sleep(600); // pausa com o resultado inicial 
        system("cls"); //limpa a tela reiniciando o programa
      
      }while (resp==1); // selo de repetição enquanto a resposta for 1
      
      return 0; //finaliza o programa
    }