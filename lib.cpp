
//
// Created by marta on 18/05/2023.
//

#include "libreria.h"
bool funzione1 (char a){
    int b ;
    b = int(a);

    if((b<=90 && b>=65) || (b<=122 && b>=97)){

        return true  ;
    }
    else {
        return false  ;
    }
}
char funzione2 (char a  ){
    char b ;
    int c ;
    c  = int(a);
    if ((c<=90) && (c>=65)){
        b = char (c+32);
    }
    else if ((c<=122) && (c>=97)){

        b = char (c - 32);


    }
    return b  ;
}
