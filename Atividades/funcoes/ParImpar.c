/******************************************************************************

Implemente uma função chamada parimpar que receba um número inteiro e e diga se for par ou se for ímpar.
Use essa função no main para verificar um número inserido pelo usuário.

*******************************************************************************/

#include <stdio.h>

void parimpar(int n){
    
    if(n % 2 == 0){ 
        
        printf("É par");
        
    }
    
    else{
        
        printf("É Impar");
        
    }
    
}

int main(){
    
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    parimpar(n);
    
    return 0;
}
