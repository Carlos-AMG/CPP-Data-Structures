#include <iostream>
#include "Doubly.h"
#include <limits>

using namespace std;

// Node * crearAnimal(Doubly * lista, bool flag);
bool Validate();


int main(){
    bool continuar = true;
    int choice;
    int id_aux;
    int size_aux;
    Doubly lista;
    Node * aux = nullptr;
    bool flag1;
    bool flag2;
    while (continuar)
    {
        cout << "----Menu-----" << endl;
        cout << "1)Crear lista\n2)Prepend\n3)Append\n4)PopFirst\n5)Pop\n6)Remove\n7)Buscar\n8)IsEmpty?" << endl;
        cout << "9)Primero\n10)Ultimo\n11)Anterior\n12)Siguiente\n13)Tamano de la lista\n14)Vaciar lista" << endl;
        cout << "15)Mostrar lista\n16)Salir del programa" << endl;
        cout << "Introduzca su eleccion: ";
        cin >> choice;
        flag2 = Validate();
        if (choice == 1 && flag2){
            system("CLS");
            cout << "Creando lista..." << endl;
            lista.Empty();
            system("pause");
            flag1 = true;
        }
        if (flag1 && flag2)
        {
            switch (choice)
            {
            case 1:
                continue;
                break;
            case 2:
                cout << "----Prepend----" << endl;
                aux = crearAnimal(lista, true);
                cout << "Su animal es: " << endl;
                cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                getchar();
                break;
            case 3:
                cout << "----Append----" << endl;
                aux = crearAnimal(lista, false);
                cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                getchar();
                break;
            case 4:
                cout << "----PopFirst----" << endl;
                lista.PopFirst();
                getchar();
                break;
            case 5: 
                cout << "----Pop----" << endl;
                lista.Pop();
                getchar();
                break;
            case 6:
                cout << "----Remover----" << endl;
                cout << "Introduzca el ID del animal que quiere remover" << endl;
                cin >> id_aux;
                if(Validate()){
                    lista.Remove(id_aux);
                }else{
                    cout << "Por favor inserte numeros como ID, intente de nuevo" << endl;
                }
                break;
            case 7:
                cout << "----Buscar----" << endl;
                size_aux = lista.Size();
                cout << "Introduzca el ID del animal que quiera buscar" << endl;
                cin >> id_aux;
                if (Validate()){
                    aux = lista.Search(id_aux);
                    if (aux){
                        cout << "Su animal es: " << endl;
                        cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                    }else if (size_aux > 0){
                        cout << "No existe un animal asociado con ese ID" << endl;
                    }else{
                        cout << "La lista esta vacia" << endl;
                    }
                }else{
                    cout << "Por favor inserte numeros como ID, intentelo de nuevo" << endl;
                }
                getchar();
                break;
            case 8:
                cout << "----Is empty?----" << endl;
                if (lista.IsEmpty())
                    cout << "La lista esta vacia" << endl;
                else
                    cout << "La lista no esta vacia" << endl;
                getchar();
                break;
            case 9:
                cout << "----Primer Elemento----" << endl;
                aux = lista.First();
                if (aux){
                    cout << "Primer animal es: " << endl;
                    cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                }else{
                    cout << "La lista esta vacia" << endl;
                }
                getchar();
                break;
            case 10:
                cout << "----Ultimo Elemento----" << endl;
                aux = lista.Last();
                if (aux){
                    cout << "Primer animal es: " << endl;
                    cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                }else{
                    cout << "La lista esta vacia" << endl;
                }
                getchar();
                break;
            case 11:
                cout << "----Anterior----" << endl;
                size_aux = lista.Size();
                cout << "Introduzca el ID del animal al que quiera buscar su elemento anterior" << endl;
                cin >> id_aux;
                if (Validate()){
                    aux = lista.Previous(id_aux);
                    if (aux){
                        cout << "Su animal es: " << endl;
                        cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                    }else if (size_aux > 0){
                        cout << "No existe un animal anterior al animal asociado con tal ID" << endl;
                    }else{
                        cout << "La lista esta vacia" << endl;
                    }
                }else{
                    cout << "Por favor inserte numeros como ID, intentelo de nuevo" << endl;
                }
                getchar();
                break;
            case 12:
                cout << "----Siguiente----" << endl;
                size_aux = lista.Size();
                cout << "Introduzca el ID del animal al que quiera buscar su elemento siguiente " << endl;
                cin >> id_aux;
                if (Validate()){
                    aux = lista.Next(id_aux);
                    if (aux){
                        cout << "Su animal es: " << endl;
                        cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                    }else if (size_aux > 0){
                        cout << "No existe un animal siguiente al animal asociado con tal ID" << endl;
                    }else{
                        cout << "La lista esta vacia" << endl;
                    }
                }else{
                    cout << "Por favor inserte numeros como ID, intentelo de nuevo" << endl;
                }
                getchar();
                break;
            case 13: 
                cout << "----Tamano de la lista----" << endl;
                cout << "La lista tiene " << lista.Size() << " elementos" << endl;
                getchar();
                break;
            case 14:
                cout << "----Vaciar la lista----" << endl;
                lista.Empty();
                cout << "Vaciando la lista..." << endl;
                getchar();
                break;
            case 15:
                cout << "----Mostrar lista----" << endl;
                lista.ForwardShow();
                getchar();
                break;
            case 16:
                cout << "Saliendo del programa..." << endl;
                continuar = false;
                getchar();
                break;
            default:
                cout << "Por favor eliga una opcion valida" << endl;
                getchar();
                break;
            }
        }else{
            cout << "Inserte una opcion valida" << endl;
            getchar();
        }  
    }
    return 0;
}




bool Validate(){
    bool flag;
    flag = std::cin.fail();
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (flag)
        return false;
    else 
        return true;
}

// Node * crearAnimal(Doubly * lista, bool flag){
//     Node * aux = nullptr;
//     std::string nombre;
//     std::string raza;
//     int current_id;
//     current_id = rand() % 1000 + 1;
//     if (!lista->Search(current_id)){
//         std::cout << "Introduzca el nombre de su animal: " << std::endl;
//         std::cin >> nombre;
//         std::cout << "Introduzca la raza del animal: " << std::endl;
//         std::cin >> raza;
//         if (flag){
//             lista->InsertEnd(nombre, raza, current_id);
//             aux = lista->First();
//         }else{
//             lista->InsertEnd(nombre, raza, current_id);
//             aux = lista->Last();
//         }
//         return aux;
//     }else 
//         return nullptr;
// }