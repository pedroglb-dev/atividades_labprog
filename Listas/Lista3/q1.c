#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
   int a1, p1, v1, a2, p2, v2, a, p, v;
   puts("Enter the area, perimeter and number of vertices of the object A: ");
       scanf("%d %d %d", &a1, &p1, &v1);
   puts("Enter the area, perimeter and number of vertices of the object B: ");
       scanf("%d %d %d", &a2, &p2, &v2);


   a = abs(a2 - a1);
   p = abs(p2 - p1);
   v = abs(v2 - v1);


   if (a > fmax(p, v))
   {
       printf("the Chebychev distance between object A and object B is: %d", a);
   }else if(p > fmax(a, v)){
       printf("the Chebychev distance between object A and object B is: %d", p);
   }else if (v > fmax(a, p)){
       printf("the Chebychev distance between object A and object B is: %d", v);
   }else{
       puts("result will be desconsidered because all the values are equal!");
   }
  
   return 0;
}
