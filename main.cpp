#include <iostream>
#include "Doubly.h"

using namespace std;

int main(){
    Doubly lista;
    lista.InsertStart("neron", "pug", 21);
    lista.ForwardShow();
    return 0;
}