#include <stdio.h>

int main (){

    int numero, soma = 0, contador = 0; 

    puts("Digite um numero: ");
    scanf("%d", &numero);

    while(numero != -1){
        if(numero > 0 && numero< 255){
            soma += numero;
            contador++;
        }
    puts("Digite um numero: ");
    scanf("%d", &numero);
    }
    printf("contador = %d soma = %d \n", contador, soma);

    
    return 0;
}