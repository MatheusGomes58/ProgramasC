/*
Autor:RedBullDog
Data:22/02/2017
Descri��o:Primeiro prototipo de sistema especialista usando conceitos de IA
----------------------------------------------------------------------------
Autor:RedBullDog
Data:02/03/201
Descri��o:Criando base de conhecimento, balan�o e matriz de memorias e core��o de bugs
*/

//bibliotecas padr�es de entra e saida
#include<stdio.h>
#include<stdlib.h>

//definindo constante n no valor de 3
#define n 3
#define m 8

//declarando vetor que funciona com base de raciocinio
int cerebro[n];
//int vetguard[1][n];
//variavel para controle de raciocinio para fila
int ponteiro=0;
int vjr,dl,bcj;

//vetor para armazenar as repostas
int vetresp[n];
int pont=0;

//banco de conhecimento
int bconhecimento[m][n];

int ressystem = 1;
int ressystem1 = 1;
int ressystem2 = 1;


int fBrain(); //fun��o que constroi pilha para matriz de raciocinio e retorna resposta
void fsauda();//fun��o de sauda��o para o usu�rio
void fJurosin();//fun��o de valida��o de juros
void fDolarAlta();//fun��o para valida��o aumento do dolar
void fBCJuros();//fun��o para validar BCJuros
void fLimpaConciencia();//fun��o limpa a matriz conciencia
void fCompra();//pilha que armazena
void flimpaResp();
void fRespCompra();


int main(){
   int resp,lc;
   int resp2;
   int retsoma;
   fsauda();
   
   scanf("%d",&resp2);
   if(resp2 == 1){
      do{      
         system("cls");   
         fJurosin();
         fLimpaConciencia();   
         fDolarAlta();
         fLimpaConciencia();   
         fBCJuros();
         fLimpaConciencia();
         retsoma=fBrain();   
         printf("%d\n",retsoma);
         if(retsoma == 0){
            printf("Compra sem ricos\n");
         }else if(retsoma == 1){
            printf("Compra com um possivel risco\n");
         }else{
            printf("Compra com muito risco\n");
         }
         for(lc=0;lc<n;lc++){
            flimpaResp();
            
         }
         printf("Deseja simular novamente 1= Sim 0 = Nao\n");
         scanf("%d",&resp);
         
      }while(resp!=0);
      printf("Fim de simulacao\n");
   }else{
      printf("Fim de simulacao\n");
   }
      
}


//fun��o para suada��o ao usu�rio
void fsauda(){
   printf("Versao:BT7271\n");
   printf("Bem vindo.\n");
   printf("Eu vou ajudar voce na compra e venda de acoes\n");
   printf("Iniciar Simulacao 1=Sim 2=Nao");
}



//fun��o carrega matriz de raciocinio
int fBrain(){
   
   bconhecimento[0][0]=1;
   bconhecimento[0][1]=1;
   bconhecimento[0][2]=1;
   //--------------------
   bconhecimento[1][0]=1;
   bconhecimento[1][1]=1;
   bconhecimento[1][2]=0;
   //--------------------
   bconhecimento[2][0]=1;
   bconhecimento[2][1]=0;
   bconhecimento[2][2]=1;
   //--------------------
   bconhecimento[3][0]=0;
   bconhecimento[3][1]=1;
   bconhecimento[3][2]=1;
   //--------------------
   bconhecimento[4][0]=0;
   bconhecimento[4][1]=0;
   bconhecimento[4][2]=1;
   //--------------------
   bconhecimento[5][0]=1;
   bconhecimento[5][1]=0;
   bconhecimento[5][2]=0;
   //--------------------
   bconhecimento[6][0]=0;
   bconhecimento[6][1]=1;
   bconhecimento[6][2]=0;
   //--------------------
   bconhecimento[7][0]=0;
   bconhecimento[7][1]=0;
   bconhecimento[7][2]=0;
   int i,soma=0;
   

   //busca na base de conhecimento
   for(i=0;i<m;i++){
      if((bconhecimento[i][0]==vetresp[0])&&(bconhecimento[i][1]==vetresp[1])&&(bconhecimento[i][2]==vetresp[2])){
         soma=bconhecimento[i][0]+bconhecimento[i][1]+bconhecimento[i][2];
      } 
   }
   //retorna soma de dados na busca
   return soma;
}



//fun��o limpa matriz
void fLimpaConciencia(){
   int i;
   if(ponteiro > 0){
     for(i=0;i<ponteiro;i++){
      cerebro[i]=cerebro[i+1];
     }
   }
   else{
      printf("Pensamento Processado\n");
     }
}

//Fun��o para obter dados de juros
void fJurosin(){
   char resp1;
   
   printf("\nJuros em Alta?[y = yes ou sim /n = not ou n�o]");
   scanf("%s",&resp1);
   
   if((resp1 == 'y') || (resp1 == 'Y')){
      vjr = 1;
      fCompra(vjr);
   }
   else if((resp1 == 'n')||(resp1 == 'N'))
   {
      fCompra(0);
   }else{
      if(ressystem%2==0){
      
         printf("Ja falei para prestar atencaos.\n");
      }else{
         printf("Por favor se atente a pergunta.\n");
         
      }
      ressystem++;
      fJurosin();
   }
}


//fun��o para validar alta do dolar
void fDolarAlta(){
   char dolar;
      
   printf("\nDolar em Alta?[y/n]");
   scanf("%s",&dolar);
   
   if((dolar == 'y') || (dolar == 'Y')){
      dl = 1;
      fCompra(dl);
   }
   else if((dolar == 'n')||(dolar == 'N')){
      fCompra(0);
   }
   else{
      
      if(ressystem1%2==0){
         
         printf("Ja falei para prestar atencao.\n");
      }else{
         printf("Por favor se atente a pergunta.\n");
         
      }
      ressystem1++;
      fDolarAlta();
    }
   
}

//fun��o para validar BCJuros
void fBCJuros(){
   char bcjr;
   
   printf("\nBCJuros em alta [y/n]?");
   scanf("%s",&bcjr);
   
   if((bcjr == 'y') || (bcjr == 'Y')){
      bcj = 1;
      fCompra(bcj);
   }
   else if((bcjr == 'n' )||(bcjr == 'N')){
      fCompra(0);
   }
   else{
      if(ressystem2%2==0){
      
         printf("Ja falei para prestar atencao.\n");
      }else{
         printf("Por favor se atente a pergunta.\n");
         
      }
      
      fBCJuros();
   }
   
}

//armazena informa��es na pilha de respostas
void fCompra(int rp){
   if(pont < n){
      vetresp[pont]=rp;
      pont++;
   }
}

//limpa pilha de respostas da simula��o
void flimpaResp(){
   int laco1;
   if(pont > 0){
         for(laco1=0;laco1<n;laco1++){
            vetresp[laco1]=vetresp[laco1+1];
            pont--;
         }
   }
}
