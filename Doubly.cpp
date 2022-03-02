#include "Doubly.h"
#include <iostream>
#include <string>

Doubly::Doubly(): head{nullptr}, tail{nullptr}{
};

void Doubly::PopFirst(){
    Node * aux = head;
    if (head->next != nullptr){
        head = head->next;
        head->prev = nullptr;
        aux->next = nullptr;
    }else{
        tail = nullptr;
        head = nullptr;
    }
    delete aux;
}

void Doubly::Pop(){
    Node * aux = tail;
    if (tail->prev != nullptr){
        tail = tail->prev;
        tail->next = nullptr;
        aux->prev = nullptr;
    }else{
        tail = nullptr;
        head = nullptr;
    }
    delete aux;
}



void Doubly::InsertStart(std::string name, std::string race, int id){
    Node *temp = new Node(name, race, id);
    if(head == nullptr){
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head->prev = temp;
        head = head->prev;
        head->prev = nullptr;
    }
}

void Doubly::Remove(int id, bool recursive, bool recursed){
    Node * aux = head;
    bool band = true;
    while (aux && band)
    {
        if(id == (aux->animal->id))
            band = false;
        else
            aux = aux->next;
    }
    if (aux == nullptr){
        if (!recursed)
        {
            std::cout << "Dato no encontrado" << std::endl;   
        }
        return;
    } else if (aux == tail)
    {
        head = nullptr;
        tail = nullptr;
    }else if(aux == head){
        // inicio
        head = head->next;
        head->prev = nullptr;
    }else if (aux == tail){
        // final
        tail = tail->prev;
        tail->next = nullptr;
    }else{
        // intermedio 
        (aux->prev)->next = aux->next;
        (aux->next)->prev = aux->prev;
    }
    delete aux;
    if (recursive){
        Remove(id, true, true);
    }
}

Node * Doubly::Previous(int data){
    Node * aux = Search(data);
    if (aux)
        return aux->prev;
    else
        return nullptr;
}

Node * Doubly::Next(int data){
    Node * aux = Search(data);
    if (aux)
        return aux->next;
    else 
        return nullptr;
}

Node * Doubly::Search(int id){
    Node * aux = head;
    if (head){
        while(aux){
            if ((aux->animal->id) == id){
                return aux;
            }
            aux = aux->next;
        }
        return nullptr;
    }else{
        return nullptr;
    }    
}

bool Doubly::IsEmpty(){
    if (head == nullptr && tail == nullptr)
        return true;
    else
        return false;
}

void Doubly::Empty(){
    Node * aux = head;
    while (head != tail)
    {
        tail = tail->prev;
        tail->next->prev = nullptr;
        delete tail->next;
        tail->next = nullptr;
    }
    if (head && tail){
        delete head;
        head = nullptr;
        tail = nullptr;
    }
}

Node * Doubly::First(){
    if (head)
    {
        return head;
    }else{
        return nullptr;
    }
}

Node * Doubly::Last(){
    if (tail)
    {
        return tail;
    }else{
        return nullptr;
    }
    
}

void Doubly::InsertEnd(std::string name, std::string race, int id){
    Node * temp = new Node(name, race, id);
    if (head == nullptr)
    {
        head = temp;
        tail = temp;
    }else{
        tail->next = temp;
        tail->next->prev = tail;
        tail->next->next = nullptr;
        tail = temp;
    } 
}

// void Doubly::InsertStart(std::string name, std::string race, int id){
//     Node * temp = new Node(name, race, id);
//     if (head == nullptr)
//     {
//         head = temp;
//         tail = temp;
//     }else{
//         head->prev = temp;
//         temp->next = head;
//         temp->prev = nullptr;
//         head = temp;
//     }
    
// }

// void Doubly::BubbleSort(){
//     int temp_data;
//     int nodes = 0;
//     bool sorted = false;
//     Node * aux = head;
//     while (aux) {
//         nodes++;
//         aux = aux->next;
//     }
//     while (!sorted)
//     {
//         aux = head;
//         sorted = true;
//         while (aux && aux->next)
//         {
//             if ((aux->data) > (aux->next->data)){
//                     sorted = false;
//                     temp_data = aux->data;
//                     aux->data = aux->next->data;
//                     aux->next->data = temp_data; 
//             }
//             aux = aux->next;
//         } 
//     }
// }

void Doubly::ForwardShow(){
    Node * aux = head;
    if (head){
        while(aux){
            std::cout << "Nombre: " << (aux->animal)->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id<< std::endl;
            aux = aux->next;
        }
    }else{
        std::cout << "La lista esta vacia" << std::endl;
    }
}

void Doubly::ReverseShow(){
    Node * aux = tail;
    while (aux)
    {
        std::cout << "Nombre: " << (aux->animal)->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id<< std::endl;
        aux = aux->prev;
    }   
}

int Doubly::Size(){
    int nodes = 0;
    Node * aux = head;
    while (aux)
    {
        nodes++;
        aux = aux->next;
    }
    return nodes;
    
}
Node * crearAnimal(Doubly & lista, bool flag){
    Node * aux = nullptr;
    std::string nombre;
    std::string raza;
    int current_id;
    
    while (true)
    {
        current_id = rand() % 1000 + 1;
        if (!lista.Search(current_id)){
            std::cout << "Introduzca el nombre de su animal: " << std::endl;
            std::cin >> nombre;
            std::cout << "Introduzca la raza del animal: " << std::endl;
            std::cin >> raza;
            if (flag){
                lista.InsertStart(nombre, raza, current_id);
                aux = lista.First();
            }else{
                lista.InsertEnd(nombre, raza, current_id);
                aux = lista.Last();
            }
            return aux;
        }
    }
}