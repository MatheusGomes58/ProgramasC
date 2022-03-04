#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(void)
{
    float ALT,
          PES,
          IMC;
    
 
            printf("\n\n_____________________________________________________________\n");
            printf("\t\t Calcule seu IMC \n\n");
            printf("INSIRA SEU PESO E ALTURA\n");
            printf("\nPeso em Kg\nExemplo: 60.5\n");
            scanf("%f", &PES);
            printf("\nAltura em Cm\nExemplo: 7.5\n");
            scanf("%f", &ALT);

            IMC = PES / pow(ALT,2);
            printf("Calculando: %.2f %c (%.2f * %.2f) = %1f", PES,47,ALT,ALT,IMC);

            printf("\n________________________________________________________________\n\n\n");
        
        return 0;
 }