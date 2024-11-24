/*******************************************************************************
 
Elabore um programa que preencha uma matriz 6 x 3, calcule e mostre: 

o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna; 

o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna. 

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int i, j;
    int matriz[6][3];
    
    int emaior;
    int emenor;
    
    int posicao_maior_i, posicao_maior_j;
    int posicao_menor_i, posicao_menor_j;

    printf("Preencha a matriz 6 x 3 correspondente:\n");

    for( i=0 ; i<6 ; i++ ){

        for( j=0 ; j<3 ; j++ ){

            printf("Matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

        }
        
    }
    
    emaior = matriz[0][0];

    for( i=0 ; i<6 ; i++ ){

        for( j=0 ; j<3 ; j++ ){
        
            if(matriz[i][j] > emaior){
                
                emaior = matriz[i][j];
                posicao_maior_i = i + 1;
                posicao_maior_j = j + 1;
                
            }

        }

    }
    
    emenor = matriz[0][0];

    for( i=0 ; i<6 ; i++ ){

        for( j=0 ; j<3 ; j++ ){
        
            if(matriz[i][j] < emenor){
                
                emenor = matriz[i][j];
                posicao_menor_i = i + 1;
                posicao_menor_j = j + 1;
                
            }

        }

    }
    
    
    printf("O elemento maior da matriz é o %d e esta na posição [%d][%d]\n", emaior, posicao_maior_i, posicao_maior_j);
    printf("O elemento menor da matriz é o %d e esta na posicao [%d][%d]\n", emenor, posicao_menor_i, posicao_menor_j);

    return 0;
}