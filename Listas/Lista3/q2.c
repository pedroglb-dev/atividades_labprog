#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
        int c1a, c1p ,c1v, c2a, c2p ,c2v, n, area, perimeter, numVertices;

        puts("Enter the area, perimeter and number of vertices of the Centroid 1: ");
       scanf("%d %d %d", &c1a, &c1p, &c1v);
        puts("Enter the area, perimeter and number of vertices of the Centroid 2: ");
       scanf("%d %d %d", &c2a, &c2p, &c2v);

       puts("Enter the number of objects you want to classify: ");
       scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            printf("Enter the area, perimeter and number of vertices of the object %d \n", i);
            scanf("%d %d %d", &area, &perimeter, &numVertices);

            int d1 = fmax(abs(c1a - area), fmax(abs(c1p - perimeter), abs(c1v - numVertices)));
            int d2 = fmax(abs(c2a - area), fmax(abs(c2p - perimeter),abs(c2v - numVertices)));

        if (d1<d2)
        {
            printf("The object numbmer %d is in the C1 class!! \n", i);
        }else{
             printf("The object numbmer %d is in the C2 class!! \n", i);
        }
        
            
        }
        
    return 0;
}