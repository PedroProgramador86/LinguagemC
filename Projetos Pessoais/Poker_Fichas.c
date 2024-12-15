/******************************************************************************



*******************************************************************************/
#include <stdio.h>

int main()
{

    int i;
    float dinheiro_apostado;
    int fichas[5];
    int total_de_fichas = 0;
    float dinheiro_a_pagar;

    printf("Digite o dinheiro apostado igualitario entre os ambos os lados: R$");
    scanf("%f", &dinheiro_apostado);
    
    printf("Informe a quantidade de fichas conquistadas de um dos lados: ");
    
    printf("\n\nFichas de 1: ");
    scanf("%d", &fichas[0]);
    fichas[0] = fichas[0] * 1;
    
    printf("\nFichas de 5: ");
    scanf("%d", &fichas[1]);
    fichas[1] = fichas[1] * 5;
    
    printf("\nFichas de 10: ");
    scanf("%d", &fichas[2]);
    fichas[2] = fichas[2] * 10;
    
    printf("\nFichas de 25: ");
    scanf("%d", &fichas[3]);
    fichas[3] = fichas[3] * 25;
    
    printf("\nFichas de 50: ");
    scanf("%d", &fichas[4]);
    fichas[4] = fichas[4] * 50;
    
    
    //////////////////////////////////////////////////////////////////////////////////////
    
    for( i=0 ; i<5 ; i++ ){
        
        total_de_fichas += fichas[i];    
        
    }
    
    dinheiro_a_pagar = ((total_de_fichas * dinheiro_apostado) / 1820) - dinheiro_apostado;
    
    if(dinheiro_a_pagar > dinheiro_apostado){
        
        printf("O dinheiro a ser pago é R$%.2f", dinheiro_a_pagar);
        
    }
    
    else{
        
        printf("Você está devendo R$%.2f", dinheiro_a_pagar);
        
    }
    
    return 0;
}