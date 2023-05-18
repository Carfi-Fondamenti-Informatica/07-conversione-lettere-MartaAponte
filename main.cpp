#include <iostream>
#include "libreria.h"
using namespace std;

int main() {

    char a=0;
    cin>> a;
    if (funzione1(a)==true){
        cout<<"vero"<<endl;
        cout << funzione2(a);
    }
    else if (funzione1(a)==false){
        cout <<"errore"<<endl;

    }



    return 0;
}


