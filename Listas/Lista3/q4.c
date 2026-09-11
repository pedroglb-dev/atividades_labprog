#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    unsigned char n, signal, quantizedSignal;
    int  error, meanError;

    puts("Enter the number of signals you want to insert: ");
    scanf("%hhu", &n);
    for (int i = 0; i < n; i++)
    {
        puts("Enter the value of the signal: ");
        scanf("%hhu", &signal);

        quantizedSignal = signal >> 4;

        error = abs(signal - (quantizedSignal << 4));

        printf("The original signal is %hhu \n The quantized signal is %hhu \n The error rate is %d \n", signal, quantizedSignal, error);
    }
    



    return 0;
}