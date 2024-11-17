/*******************************************************************************
 
Faça um programa que preencha uma matriz 3 x 5 com números inteiros, calcule e mostre a quantidade de 
elementos entre 15 e 20. 

*******************************************************************************/
#include <stdio.h>

int main()
{

    int i, j;
    int matriz[3][5];
    int elementos = 0;

    printf("preencha a matriz 3x5 a seguir:\n\n");

    for( i=0 ; i<3 ; i++ ){

        for( j=0 ; j<5 ; j++ ){

            printf("Matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
    
        }

    }

    for( i=0 ; i<3 ; i++ ){

        for( j=0 ; j<5 ; j++ ){

            if(matriz[i][j] > 15 && matriz[i][j] < 20){
                
                elementos++;

            }
    
        }

    }

    printf("A quantidade de elementos entre 15 e 20 e igual a %d", elementos);

    return 0;
}