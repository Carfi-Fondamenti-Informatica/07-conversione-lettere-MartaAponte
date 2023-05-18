#include <iostream>
#include "libreria.h"
using namespace std;

int main() {

    char a=0;
    cin>> a;
    if (funzione1(a)){
        cout<<"vero"<<endl;
        cout << funzione2(a);
    }
    else {
        string falso="errore";
        cout <<falso;

    }



    return 0;
}




