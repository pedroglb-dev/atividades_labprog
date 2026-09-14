# include<stdio.h>

int main (){
unsigned char r, g, b, m, b2, b1, b0;

    scanf("%hhu %hhu %hhu %hhu", r, g, b, m);

    b2 = (m >> 2)&1;
    b1 = (m >> 1)&1;
    b0 = m&1;

    r = (254* r)|b2;
    g = (254* g)|b2;
    b = (254* b)|b2;

    return 0;
}