/******************************************************************************

 V I D E O    D O    Y O U T U B E : 00:00 - 08:15

*******************************************************************************/

/******************************************************************************

* Um ponteiro é um apontador para um endereço de memoria

* Um ponteiro é basicamente uma variavel que contém endereços de memoria
    > com Isso é possivel alterar o contéudo dessa variavel de forma indireta


*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int var = 15;                           // Criação de uma variavel chamada "var" que seu contéudo equivale a 15
    printf("Conteudo de var = %d\n", var);  // printando o conteudo de var
    printf("Endereço de var = %p\n", &var); // printando o endereço de memoria de var
    
    int *ptr;                                           // Criação de ponteiro (Variavel que armazena endereços de memoria)
    ptr = &var;                                         // Atribuindo o conteudo do ponteiro (ptr) ao endereço de memoria da variavel (var)
    printf("Conteudo apontado por ptr = %d\n", *ptr);   // Exibe o conteudo da variavel (var) atravez do endereço apontado
    printf("Endereço apontado por ptr = %p\n", ptr);    // Exibe o endereço de memoria que a variavel (var) se encontra
    printf("\n");
    printf("Endereço do proprio ponteiro ptr = %p\n", &ptr); // Printando o endereço de memoria do proprio ponteiro ptr 
    // (Ou seja o endereço de memoria de ptr não é alterado quando se é atribuido um endereço de memoria de outra variavel a ele)
    
/***********************************************************************************

    Diferenças (ptr & *ptr):
    
    *ptr = O apontado por, conteudo do endereço da variavel (15)
    > Em outras palavras: Com '*' ele aponta ao conteudo da variavel mencionada
    
    ptr = Endereço da variavel apontada (0x7ffda8c859fc)
    > Em outras palavras: Sem o '*' ele aponta ao endereço da variavel a qual ele foi designado apontar
    
    Observações vistas:
    
    Assim como toda variavel tem um endereço de memoria proprio...
    Um ponteiro também possui seu proprio endereço (Apesar da sua função se basear no endereço de outras variaveis
***********************************************************************************/

    printf("\n\n"); //Separar as informações

/******************************************************************************

 V I D E O    D O    Y O U T U B E : 08:15 - 

*******************************************************************************/

    *ptr = 50; //utiliza o ponteiro (ptr) para alterar o conteudo da variavel (var)

    printf("Conteudo de var = %d\n", var);
    printf("Endereço de var = %p\n", &var);
    
    printf("Conteudo apontado por ptr = %d\n", *ptr);
    printf("Endereço apontado por ptr = %p\n", ptr);
    printf("\n");
    printf("Endereço do proprio ponteiro = %p\n", &ptr);
    
    // Após isso, é criado uma função contendo os mesmos campos.
    // Demonstrando que o Endereço de memoria é alterado quando o ponteiro é 
    // alocado para dentro de uma função
    
/***********************************************************************************    

    Fontes:
    
    Youtube - https://youtu.be/1Hgl4TU8CB0?si=mQukpMN7R3zJEeF5
    ChatGpt

************************************************************************************/
    
    return 0;
}

