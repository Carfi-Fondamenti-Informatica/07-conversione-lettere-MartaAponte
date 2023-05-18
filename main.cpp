#include <iostream>
#include "libreria.h"
using namespace std;

int main() {

    char a;
    cin>> a;
    if (funzione1 (a)== true){

        cout << funzione2(a);
    }
    else {
        cout << "errore"<< endl;

    }



    return 0;
}



