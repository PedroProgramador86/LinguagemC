/*******************************************************************************
 
 Crie um programa que preencha uma matriz 2 x 4 com números inteiros, calcule e mostre: 

 a quantidade de elementos entre 12 e 20 em cada linha; 

 a média dos elementos pares da matriz.

*******************************************************************************/

#include <stdio.h>

int main(void)
{

    int i, j;
    int matriz[2][4];

    int quant1520 = 0;

    printf("Preencha a matriz[2][4] a seguir:\n");

    for( i=0 ; i<2 ; i++ ){

        for( j=0 ; j<4 ; j++ ){

            printf("Posição[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

        }

    }

    for( i=0 ; i<2 ; i++ ){

        for( j=0 ; j<4 ; j++ ){

            if(matriz[i][j] > 12 && matriz[i][j] < 20){

                quant1520++;

            }

        }

    }

    int quantpar = 0;
    int somapar = 0;

    for( i=0 ; i<2 ; i++ ){

        for( j=0 ; j<4 ; j++ ){

            if(matriz[i][j] % 2 == 0){

                quantpar++;

            }

        }

    }

    for( i=0 ; i<2 ; i++ ){

        for( j=0 ; j<4 ; j++ ){

            if(matriz[i][j] % 2 == 0){

                somapar += matriz[i][j];

            }

        }

    }

    int media;

    media = somapar / quantpar;

    printf("A quantidade de elementos entre 12 e 20, é igual a %d", quant1520);
    printf("A quantidade de elementos pares é igual a %d e sua media por dado os respectivos valores é igual a %d", quantpar, media);

    return 0;
}