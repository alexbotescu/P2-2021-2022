//
// Created by alex on 17.03.2022.
//

#ifndef CURS5_ARRAYS_H
#define CURS5_ARRAYS_H


//
//  arrays.h
//  Curs5
//
//  Created by alex on 17.03.2022.
//

#ifndef arrays_h
#define arrays_h
#include <iostream>
using namespace std;
int * citire(int &n){
    cin >> n;
    int * tab = new int[n];
    int i;
    for(i=0;i<n;i++){
        cout << "Element " << i + 1 << ":";
        cin >> tab[i];
    }
    return tab;
}

void afisare(int * tab, int n){
    int i;
    for(i=0;i<n;i++)
        cout << "tab[" << i << "]=" << tab[i] << endl;
    delete tab;
}


#endif /* arrays_h */



#endif //CURS5_ARRAYS_H
