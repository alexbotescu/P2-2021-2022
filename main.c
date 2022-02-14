#include <stdio.h> // standard input - output
#include "C1_funcs.h"
// iostream in C++; preluati printf, scanf
/*
void myfun(){
    static int k = 0;
    printf("k=%d\n",k); // %d = specificator pt int la scrierea formatata
    k++;
}
*/

int k;

void myfun(){
    printf("k=%d\n",k);
    k++;
}

int main(){
    //for(int i=0; i < 10; i++)
      //  myfun();
   //   solveEx1();
 //  solveEx2();
 //printf("Suma este: %d\n",solveEx3());
// ex_continue();
  //ex_goto();
  exscanf();
  return 0;
}