#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "arrays.h"
enum zile{luni,
        marti,
        miercuri,
        joi,
        vineri}zile;
union tipuri{
    int x;
    char y;
    float z;
}tip;

union data_cal{
    int zi;
    int luna;
    int an;
}data_cal;

enum boolean{
    false,
    true
};
int main(int argc, char * argv[]){
    printf("%d %d\n",false,true);
   // tip.x = 2;
   // printf("x=2: %d\n",sizeof(tip));
    tip.y = 'a';
    printf("y='a': %d\n",sizeof(tip));
    tip.x = 2;
    printf("x=2: %d\n",sizeof(tip));

    data_cal.zi = 3;
    data_cal.luna = 3;
    data_cal.an = 2022;

    printf("%d/%d/%d",data_cal.zi, data_cal.luna, data_cal.an);
    /*
  Student ** studenti = (Student**)malloc(3 * sizeof(Student*));
  studenti[0] = createStudent();
  studenti[1] = createStudent();
  studenti[2] = createStudent();
  afisare_studenti(studenti,3);
  set_an(studenti[2],4);
  set_nume(studenti[0],"Popescu Gabriel");
  afisare_studenti(studenti,3);
  char * a = (char*)malloc(strlen("anamaria")+1);
  strcpy(a,"anamaria");
  char * b = a;
  puts(a);
  puts(b);
  a[0] = 'e';
  puts(a);
  puts(b);*/
    return 0;

}