#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int aC1, aC2, pC1, pC2, vC1, vC2;

    int n, area, perimeter, numVertices, gt;

    int acertos_cheby = 0;
    int acertos_manh = 0;
    int acertos_eucl = 0;

    puts("Digite a área, perímetro e número de vértices do Centroide 1: ");
    scanf("%d %d %d", &aC1, &pC1, &vC1);

    puts("Digite a área, perímetro e número de vértices do Centroide 2: ");
    scanf("%d %d %d", &aC2, &pC2, &vC2);

    puts("Digite o numero de objetos que voce quer para teste(n) ");
    scanf("%d", &n);

    for (int i = 0; i<n; i++)
    {
        printf("\nObjeto %d - Digite área, perímetro, vértices e a classe real GT (1 ou 2):\n", i + 1);
        scaf("%d %d %d %d", &area, &perimeter, &numVertices, &gt);

    int da1 = abs(aC1 - area);
    int dp1 = abs(pC1 - perimeter);
    int dv1 = abs(vC1 - numVertices);
    
    int da2 = abs(aC2 - area);
    int dp2 = abs(pC2 - perimeter);
    int dv2 = abs(vC2 - numVertices);

    int dC1 = fmax(da1, fmax(dp1, dv1));
    int dC2 = fmax(da2, fmax(dp2, dv2));
    int classeC = 0;

    if(dC1 < dC2){
        classeC = 1;
    }else if(dC2 < dC1){
        classeC = 2;
    }

    if(classeC == gt){
        acertos_cheby ++;
    }

    int dM1 = da1 + dp1 + dv1;  
    int dM2 = da2 + dp2 + dv2;
    int classeM = 0;
    
    if(dM1 < dM2){
        classeM = 1;
    } else if (dM2 < dM1){
        classeM = 2;
    }

    if (classeM == gt){
        acertos_manh ++;
    }

    double dE1 = sqrt(pow(da1,2) + pow(dp1,2) + pow(dv1,2));
    double dE2 = sqrt(pow(da2,2) + pow(dp2,2) + pow(dv2,2));
    double classeE = 0;

    if(dE1 < dE2){
        classeE = 1;
    }else if(dE2 < dE1){
        classeM = 2;
    }

    if(classeM == gt){
        acertos_eucl ++;
    }
}

double accC = ((double)acertos_cheby / n) * 100.0;
double accM = ((double)acertos_manh /n)*100.0;
double accE = ((double)acertos_eucl /n)*100.0;
    
    return 0;
}