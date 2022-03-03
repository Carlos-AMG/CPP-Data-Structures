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
    bool flag1 = false;
    bool flag2 = false;
    while (continuar)
    {
        system("CLS");
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
                system("CLS");
                cout << "----Prepend----" << endl;
                aux = crearAnimal(lista, true);
                cout << "Su animal es: " << endl;
                cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                system("pause");
                break;
            case 3:
                system("CLS");
                cout << "----Append----" << endl;
                aux = crearAnimal(lista, false);
                cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                system("pause");
                break;
            case 4:
                system("CLS");
                cout << "----PopFirst----" << endl;
                lista.PopFirst();
                system("pause");
                break;
            case 5: 
                system("CLS");
                cout << "----Pop----" << endl;
                lista.Pop();
                system("pause");
                break;
            case 6:
                system("CLS");
                cout << "----Remover----" << endl;
                cout << "Introduzca el ID del animal que quiere remover" << endl;
                cin >> id_aux;
                if(Validate()){
                    lista.Remove(id_aux);
                }else{
                    cout << "Por favor inserte numeros como ID, intente de nuevo" << endl;
                    system("pause");
                }
                break;
            case 7:
                system("CLS");
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
                system("pause");
                break;
            case 8:
                system("CLS");
                cout << "----Is empty?----" << endl;
                if (lista.IsEmpty())
                    cout << "La lista esta vacia" << endl;
                else
                    cout << "La lista no esta vacia" << endl;
                system("pause");
                break;
            case 9:
                system("CLS");
                cout << "----Primer Elemento----" << endl;
                aux = lista.First();
                if (aux){
                    cout << "Primer animal es: " << endl;
                    cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                }else{
                    cout << "La lista esta vacia" << endl;
                }
                system("pause");
                break;
            case 10:
                system("CLS");
                cout << "----Ultimo Elemento----" << endl;
                aux = lista.Last();
                if (aux){
                    cout << "Primer animal es: " << endl;
                    cout << "Nombre: " << aux->animal->name << " Raza: " << aux->animal->race << " ID: " << aux->animal->id << endl;
                }else{
                    cout << "La lista esta vacia" << endl;
                }
                system("pause");
                break;
            case 11:
                system("CLS");
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
                system("pause");
                break;
            case 12:
                system("CLS");
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
                system("pause");
                break;
            case 13: 
                system("CLS");
                cout << "----Tamano de la lista----" << endl;
                cout << "La lista tiene " << lista.Size() << " elementos" << endl;
                system("pause");
                break;
            case 14:
                system("CLS");
                cout << "----Vaciar la lista----" << endl;
                lista.Empty();
                cout << "Vaciando la lista..." << endl;
                system("pause");
                break;
            case 15:
                system("CLS");
                cout << "----Mostrar lista----" << endl;
                lista.ForwardShow();
                system("pause");
                break;
            case 16:
                system("CLS");
                cout << "Saliendo del programa..." << endl;
                continuar = false;
                system("pause");
                break;
            default:
                system("CLS");
                cout << "Por favor eliga una opcion valida" << endl;
                system("pause");
                break;
            }
        }else{
            cout << "No posible hacer operaciones sin antes crear una lista" << endl;
            system("pause");
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