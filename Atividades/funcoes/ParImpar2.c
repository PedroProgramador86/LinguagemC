/******************************************************************************

Implemente uma função chamada ehPar que receba um número inteiro e retorne 1 se for par e 0 se for ímpar.
Use essa função no main para verificar um número inserido pelo usuário.

*******************************************************************************/

#include <stdio.h>

int parimpar(int n){
    
    if(n % 2 == 0){ 
        
        return 1;
        
    }
    
    else{
        
       return 0;
        
    }
    
}

int main(){
    
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    if(parimpar(n)){
        
        printf("O numero é par");
        
    }
    
    else{
        
        printf("O numero é impar");
        
    }
    
    return 0;
}
