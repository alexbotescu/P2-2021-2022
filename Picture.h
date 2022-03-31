//
// Created by alex on 31.03.2022.
//

#ifndef P2_CURS7_PICTURE_H
#define P2_CURS7_PICTURE_H

#include <string.h>
#include <iostream>

void mycpy(char * & dest, char * source){
    if(source != nullptr){
        dest = new char[strlen(source) + 1];
        strcpy(dest, source);
    }
}

void myDealloc(char * obj){
    if(obj != nullptr)
        delete obj;
}



class Picture {
private:
    char * colors;
    char * alt_text;
public:
    Picture(char * colors, char * alt_text){
      /*  if(colors != nullptr) {
            this->colors = new char[strlen(colors) + 1];
            strcpy(this->colors, colors);
        } */
        mycpy(this->colors, colors);
        mycpy(this->alt_text, alt_text);
    }
    char * get_colors() const{
        return this->colors;
    }
    char * get_alt_text() const{
        return this->alt_text;
    }
    void print(){
        std::cout << "Image\n========================\n";
        std::cout << "Colors: " << this->colors << std::endl;
        std::cout << "Alt text: " << this->alt_text << std::endl;
    }
    virtual ~Picture(){
        myDealloc(this->colors);
        myDealloc(this->alt_text);
    }
};

void myDealloc(Picture * picture){
    if(picture != nullptr)
        delete picture;
}

#endif //P2_CURS7_PICTURE_H
