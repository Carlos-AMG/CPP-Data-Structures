#include <iostream>
#include "Doubly.h"

using namespace std;

int main(){
    Doubly lista;
    lista.InsertStart("carlos", "humano", 109);
    lista.InsertStart("zurdo", "humano", 2);
    lista.InsertStart("zurdo", "humano", 2);
    lista.InsertStart("zurdo", "humano", 2);
    lista.InsertStart("zurdo", "humano", 2);
    lista.InsertStart("neron", "pug", 123);
    lista.Remove(2, true);
    lista.InsertStart("daniel", "pug", 21);
    //lista.Empty();
    Node * primero = lista.First();
    Node * current = lista.Search(123);
    Node * ultimo = lista.Last();
    lista.ForwardShow();
    cout << lista.Size() << endl;
    // int * ptr = nullptr;
    // cout << "test: " << ptr << endl;
    // cout << "head: " << lista.head << endl;
    // cout << "first data: " << primero << endl;
    // cout << "current data: " << current<< endl;
    // cout << "last data: " << ultimo << endl;

    return 0;
}