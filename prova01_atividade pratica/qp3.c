# include <stdio.h>

int main (){

    unsigned char min, max, n, x;
    float xn;

    puts("Digite o numero de pixels do intervalo que voce deseja informar: \n");
    scanf("%hhu", &n);
    for(int i =0; i<n; i++){
        scanf("%hhu", &x);
        if(min == 0|| x < min){
            min = x;
        } else if(max == 0||x > max){
            max = x;
        }
    }
    printf("O max = %hhu e o min = %hhu \n Agora insira o numero de valores de x que voce deeja normalizar: ", max, min);
    scanf("%hhu", &n);
    for(int i = 0; i<n; i++){
        puts("Digite o valor de x: ");
        scanf("%hhu", &x);

        xn = (x - min)/(max - min);
        printf("o seu x normalizado é igual a %f \n", xn);

    }

    return 0;
}