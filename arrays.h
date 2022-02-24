//
// Created by alex on 24.02.2022.
//

#ifndef UNTITLED6_ARRAYS_H
#define UNTITLED6_ARRAYS_H
#include <stdio.h>
#include <stdlib.h>
int * citire(int *n){
    scanf("%d",n);
    int * tab = (int*)malloc(sizeof(int) * *n);
    /* aloc n casute in care sa pot introduce un int */
    int i;
    for(i=0;i<*n;i++)
    {
        printf("Dati v[%d]:",i);
        scanf("%d",&tab[i]);
    }
    return tab;
}

void afisare(int * tab, int n){
    int i;
    for(i=0;i<n;i++){
        printf("v[%d]=%d\n",i,tab[i]);
    }
}

int nr_cifre(int x){
    if(!x)
        return 0;
    return 1 + nr_cifre(x/10);
}

int nrcf(int x, int y){
    return nr_cifre(x) > nr_cifre(y);
}
void sortare(int * tab, int n, int (*criteriu)(int, int)){
    int i,j,aux;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(criteriu(tab[i],tab[j])){
                aux = tab[i];
                tab[i] = tab[j];
                tab[j] = aux;
            }
}


#endif //UNTITLED6_ARRAYS_H
