//
// Created by alex on 14.02.2022.
//

#ifndef UNTITLED5_C1_FUNCS_H
#define UNTITLED5_C1_FUNCS_H

float maxim(float x, float y){
    if(x > y)
        return x;
    return y;
}

void solveEx1(){
    float x,y;
    printf("Dati o valoare lui x:");
    scanf("%f",&x);
    printf("Dati o valoare lui y:");
    scanf("%f",&y);
    printf("max(%f,%f) = %f\n", x, y, maxim(x,y));
}

void solveEx2(){
    int nota;
    printf("Introduceti nota studentului:");
    scanf("%d",&nota);
    if(nota <= 0 || nota > 10) {
        printf("Nota este gresita. Ne pare rau.");
        return;
    }
    switch(nota){
        case 10:
            printf("A");
            break;
        case 9:
            printf("B");
            break;
        case 8:
            printf("C");
            break;
        case 7:
            printf("D");
            break;
        case 6:
            printf("E");
            break;
        default:
            printf("F");
            break;
    }
}

int solveEx3(){
    int n,x,s=0;
    printf("Dati nr de numere:");
    scanf("%d",&n);
    for(;n>0;n--)
    {
        printf("Dati numarul:");
        scanf("%d",&x);
        s += x;
    }
    return s;
}

void ex_continue(){
    int n = 20;
    int d;
    /* Afisam toate numerele care nu se divid cu n */
    for(d=2; d < n; d++){
        if(n % d == 0)
            continue;
        printf("%d NU este un divizor al lui %d\n",d,n);
    }
}

// 1+2+3+...+n = (n*(n+1))/2 -> O(1)
void exscanf(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d %d\n",x,y);
}
void ex_goto() {
    static int t = 0;
    incrementeaza: t++;
    if (t < 5) {
        printf("t=%d\n", t);
        goto incrementeaza;
    }
}

#endif //UNTITLED5_C1_FUNCS_H
