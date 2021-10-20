#include<stdio.h>
#include<stdlib.h>

int main (); {

gen(2, 4, 6);
ap(2, 4, 6);

return 0;
}

void gen(int a, int b, int c){
    for(int i = 0; i < c, i++){
        a = a + b;
        printf("%d\n", a);
    }
}

int ap(int a, int b, int c){
   c = a + (c - 1) ) * b;
   printf("a= %d\" a);
   printf("b= %d\" b);
   printf("c= %d\" c);

   return c;
}
