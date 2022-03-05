//
// Created by alex on 03.03.2022.
//

#ifndef UNTITLED6_STRUCT_H
#define UNTITLED6_STRUCT_H
#define MAX_SIZE 30
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student{
    char * name;
    int anStudiu;
}Student;

Student * createStudent(){
    Student * s = (Student*)malloc(sizeof(Student));
    char temp_name[MAX_SIZE];
    printf("Introduceti numele studentului:");
    gets(temp_name);
    s->name = (char*)malloc(strlen(temp_name)+1);
    strcpy(s->name,temp_name);
    printf("Introduceti anul de studiu:");
    scanf("%d",&s->anStudiu);
    /* in order to clear the buffer input */
    fflush(stdin);
    return s;
}

void afisare_student(Student * s){
    printf("Nume student:%s\nAn studiu:%d\n",s->name, s->anStudiu);
}

void afisare_studenti(Student **studenti, int n){
  int i;
  for(i=0;i<n;i++)
      afisare_student(studenti[i]);
}

void set_nume(Student * s, char * new_name){
    s->name = (char*)malloc(strlen(new_name)+1);
    strcpy(s->name,new_name);
    /* forbidden: s->name = new_name; */

}

void set_an(Student * s, int new_an){
    s->anStudiu = new_an;
}

#endif //UNTITLED6_STRUCT_H
