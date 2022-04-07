//
// Created by alex on 07.04.2022.
//

#include "str.h"

str::str(){
    this->content = new char[sizeof("") + 1];
    strcpy(this->content, "");
    cout << "Apel ctor implicit\n";
}
str::str(char * content){
    if(content != nullptr){
        this->content = new char[strlen(content) + 1];
        strcpy(this->content, content);
        cout << "Apel ctor explicit cu " << content << "\n";
    }
}
str::str(str &other){
    if(this != &other){
        if(other.content != nullptr){
            this->content = new char[strlen(other.content) + 1];
            strcpy(this->content, other.content);
            cout << "Apel ctor de copiere cu " << content << "\n";
        }
        else this->content = nullptr;
    }
}
str::~str(){
    cout << "Apel destructor cu " << this->content << endl;
    if(this->content != nullptr)
        delete [] this->content;
}
void str::afisare(){
    cout << this->content << endl;
}
char * str::get_content() const{
    return this->content;
}