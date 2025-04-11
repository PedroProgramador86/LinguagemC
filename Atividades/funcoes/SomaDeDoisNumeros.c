/******************************************************************************

Crie uma função chamada soma que receba dois números inteiros como parâmetros e retorne a soma deles.
No main, solicite ao usuário dois números e exiba o resultado da função.

*******************************************************************************/
#include <stdio.h>

int soma(int a, int b){ // Função que soma dois valores
    
    return a + b;       // Retorno do resultado da função
    
}

int main()
{
    int a, b; // Criação de variaveis
                         // Duas delas ("a" e "b") servem para armazenar os valores
                         // que serão alocados nas variaveis da função
                         
    int resultado; //Armazena o conteudo da função soma (para ser imprimida)                
    
    
    // Captura de dados pelo usuario
    
    printf("Digite um numero: ");
    scanf("%d", &a);
    
    printf("Digite outro numero: ");
    scanf("%d", &b);
    
    resultado = soma(a, b); // Variavel resultado recebendo a função soma
    
    printf("A soma desses dois numeros é igual a %d", resultado); // Printando resultados

    return 0;
}
