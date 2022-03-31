//
// Created by alex on 31.03.2022.
//

#ifndef P2_CURS7_ACCOUNT_H
#define P2_CURS7_ACCOUNT_H

#include "Picture.h"

class Account {
private:
    char * phoneNo;
    char * id;
    char * description;
    Picture * profilePicture;
public:
    Account(char * phoneNo, char * id, char * description, Picture profilePicture){
        mycpy(this->phoneNo, phoneNo);
        mycpy(this->id, id);
        mycpy(this->description, description);
        this->profilePicture = new Picture(profilePicture.get_colors(), profilePicture.get_alt_text());
    }
    void print(){
        std::cout << "Contact [" << phoneNo << "; " << id << "; " << std::endl;
        std::cout << "==========================================================" << std::endl;
        std::cout << description << std::endl;
        std::cout << "==========================================================" << std::endl;
        this->profilePicture->print();
    }
    virtual ~Account(){
        myDealloc(this->phoneNo);
        myDealloc(this->id);
        myDealloc(this->description);
        myDealloc(this->profilePicture);
    }
    void sendMessage(Account other, char * message){
        if(message != nullptr){
            std::cout << this->phoneNo  << "-->" << other.phoneNo << std::endl;
            std::cout << "===============================\n" << message << std::endl;
        }
    }
};


#endif //P2_CURS7_ACCOUNT_H
