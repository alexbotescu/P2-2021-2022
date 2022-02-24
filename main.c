#include <stdio.h>
#include <string.h>
#include "arrays.h"
/* prin valoare */
void f1(int x){
    x = 3;
    printf("Apel f1: x=%d\n",x);
}

void f2(int * x){
    *x = 3;
    printf("Apel f2: x=%d\n",*x);
}

#define MAX(x,y) x > y ? x : y;

/* ^^ echivalent cu */
inline int max(x,y){
    return x > y ? x : y;
}


int main() {
//    int a = 20;
   /* printf("Inainte de apel f1: a=%d\n",a);
    f1(a);
    printf("Dupa apel f1: a=%d\n",a);
    printf("Inainte de apel f2: a=%d\n",a);
    f2(&a);
    printf("Dupa apel f2: a=%d\n",a);
    int n;
    int * tab = citire(&n);
    afisare(tab,n);
   char * x = (char*) malloc(120);
   /* char x[120]; */
   /* char * x = (char*) malloc(120 *sizeof(char));
   gets(x); /* echivalent (aproape) scanf */
   //puts(x); /* echivalent (aproape) printf
   /* doar pt siruri de caractere
   free(x);
   x = (char*) malloc(120);
   scanf("%s",x);
   printf("Ati citit: %s",x);
    return 0; */
    int n;
    int * tab = citire(&n);
    afisare(tab,n);
    sortare(tab,n,nrcf);
    printf("Tabloul sortat dupa nr de cifre:\n");
    afisare(tab,n);
}
