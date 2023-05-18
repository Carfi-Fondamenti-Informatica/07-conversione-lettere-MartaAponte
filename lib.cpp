
//
// Created by marta on 18/05/2023.
//

#include "libreria.h"
bool funzione1 (char a){
    int b ;
    b = (int)a;

    if((b<=90 && b>=65) || (b<=122 && b>=97)){

        return true  ;
    }
    else {
        return false  ;
    }
}
char funzione2 (char a  ){
    char risultato;
    int b ;
    b = (int)a;
    if (b<=90 && b>=65){
        risultato = char (a+32);
    }
    else if (b<=122 && b>=97){

        risultato = char (a- 32);


    }
    return risultato ;
}
