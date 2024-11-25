/******************************************************************************

Elabore um programa que preencha uma matriz 12 x 4 com os valores das vendas de uma loja,
em que cada linha representa um mês do ano e cada coluna representa uma semana do mês.
O programa deverá calcular e mostrar:

o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
o total vendido em cada semana durante todo o ano;
o total vendido pela loja no ano. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int i, j;
    int matriz[12][4];
    
    printf("Digite a quantidade de vendas em cada semana:\n");
    
    for( i=0 ; i<12 ; i++ ){
        
        printf("Mês %d:\n", i + 1);
        
        for( j=0 ; j<4 ; j++ ){
            
            printf("Quantidade de vendas na %dº semana: ", j + 1);
            scanf("%d", &matriz[12][4]);
            
        }
    }
    
    int soma[12];
    
    for( i=0 ; i<12 ; i++ ){
        
        soma[i] += j;
        
        for( j=0 ; j<4 ; j++ ){
            
            
        }
    }
    
    printf("Soma de cada mês correspondente:\n");
    
    for( i=0 ; i<12 ; i++ ){
        
        printf("Mês %d com R$%d vendas", i + 1, soma[i]);
        
    }

    return 0;
}