#include <bits/stdc++.h>

using namespace std;

//DECLARACION DE LA CLASE ManipularListas
class ManipularListas {

public:
    /*DECLARACION DE PROPIEDADES PUBLICAS*/
    list<int> Lista;
    list<int>::iterator it;
    string Message;

    /*METODO PARA INSERTAR ELEMENTOS NUMERICOS DE PRUEBA*/
    list<int> INSERTAR(int inicio, int final) {
        for (int i = inicio; i < final; i += inicio) {
            Lista.push_back(i);
        }
        return Lista;
    }

    bool EXIST_ELEMENTS() {
        //VALIDAR SI HAY ELEMENTOS EN LA LISTA
        if (Lista.empty()) {
            return true;
        } else {
            return false;
        }
    }

    string BUSCAR_ELEMENTO() {
        //VALIDAR SI EXISTEN ELEMENTOS EN LA LISTA
        if (!EXIST_ELEMENTS()) {
            int value;
            cout << "1-) Buscando un elemento en la lista..." << '\n';
            cout << "Escriba el elemento a buscar en la lista:" << '\n';
            cin >> value;
            //BUSCAR EL VALOR EN LA LISTA
            it = find(Lista.begin(), Lista.end(), value);
            //COMPROBAR SI EXISTE EL ELEMENTO EN LA LISTA
            if (it != Lista.end()) {
                Message = "El elemento [" + to_string(*it) + "] fue encontrado en la posicion "
                                                             "[" + to_string(distance(Lista.begin(), it)) + "]";
            } else {
                Message = "El elemento [" + to_string(value) + "] No fue encontrado";
            }
        }
        return Message;
    }

    list<int> REMOVE_FIRST() {
        //ELIMINAR EL PRIMER ELEMENTO DE LA LISTA
        it = Lista.begin();
        Lista.pop_front();
        //MOSTRAR EL MENSAJE AL USUARIO
        Message = "El primer elemento [" + to_string(*it) + "] fue eliminado de la lista";
        return Lista;
    }

    list<int> REMOVE_ELEMENTS_POSITION() {
        //VALIDAR SI EXISTEN ELEMENTOS EN LA LISTA
        if (!EXIST_ELEMENTS()) {
            int pos;
            //MOSTRAR MENSAJE AL USUARIO DE LAS POSICIONES EXISTENTES EN LA LISTA
            cout<< "3-) Eliminando elemento segun su posicion" <<'\n';
            cout << "Escriba una de las posiciones existentes del elemento que desea eliminar" << '\n';
            for (int i = 0; i < Lista.size(); i++) {
                cout << "[" + to_string(i) + "] " << ' ';
            }
            cout << '\n';
            cin >> pos;
            //MOVER EL PUNTERO AL PRINCIPIO DE LA LISTA
            auto position = Lista.begin();
            //ENCONTRAR LA POSICION EN LA LISTA
            advance(position, pos);
            //ELIMINAR EL ELEMENTO
            Lista.erase(position);
            //GUARDAR MENSAJE
            Message = "Se ha eliminado el elemento [" + to_string(*position) + "]"
                                                                               " de la posicion [" + to_string(pos) +
                      "]";
            //RETORNAR LOS ELEMENTOS DE LA LISTA
            return Lista;
        }
    }

    list<int> REMOVE_ELEMENTS_VALUE() {
        //VALIDAR SI EXISTEN ELEMENTOS EN LA LISTA
        if (!EXIST_ELEMENTS()){
            int value;
            cout << "4-) Eliminado un elemento de la lista segun valor..." <<'\n';
            cout << "Escriba el valor a eliminar de la lista:" << '\n';
            //CAPTURAR EL VALOR DIGITADO
            cin >> value;
            //ELIMINAR ELEMENTO DE LA LISTA
            Lista.remove(value);
            //MOSTRAR MENSAJE AL USUARIO
            Message = "El Elemento [" + to_string(value) + "] fue eliminado";
        }
    return Lista;
    }
};


int main(){

    //LLAMAR A LA CLASE ManipularLista e inicializarla
    ManipularListas Milista;
    //Declarar variables
    list<int> NewList;

    //MOSTRAR TITULO EN LA PANTALLA
    cout<<"EJERCICIO CORRESPONDIENTE AL SEMINARIO #1 - EXTRUCTURA DE DATOS Y ALGORITMOS - GRUPO 2" <<'\n' <<'\n';

    //INSERTAR ELEMENTOS POR DEFECTO A LA LISTA
    cout<<"Insertando elementos a la lista..." <<'\n';
    system("pause");
    NewList = Milista.INSERTAR(5,30);

    //RECORRER Y MOSTRAR LOS ELEMENTOS EXISTENTES EN LA LISTA
    cout<<"Elementos existentes en la lista:" <<'\n';
    if(!Milista.EXIST_ELEMENTS()){
        for(auto c : NewList){
            cout<<c <<'\n';
        }
    }else{
        cout<<"No hay elementos en la lista" <<'\n';
    }

    //ESPERAR PULSACION DE UNA TECLA
    system("pause");

    //BUSCAR UN ELEMENTO EN LA LISTA SEGUN VALOR
    //INVOCAR EL METODO BUSCAR
    cout<<Milista.BUSCAR_ELEMENTO() <<'\n';

    //ESPERAR PULSACION DE UNA TECLA
    system("pause");

    //ELIMINAR EL PRIMER ELEMENTO DE LA LISTA
    cout<<"2-) Eliminando el primer elemento de la lista..." <<'\n';
    //ESPERAR PULSACION DE UNA TECLA
    system("pause");
    NewList = Milista.REMOVE_FIRST();
    cout<<Milista.Message <<'\n';

    //MOSTRAR LOS ELEMENTOS DE LA LISTA
    cout<<"Lista actualizada:" <<'\n';
    for(auto c : NewList){
        cout<<c <<'\n';
    }

    //ESPERAR PULSACION DE UNA TECLA
    system("pause");

    //ELIMINAR ELEMENTO DE LA LISTA SEGUN POSICION
    NewList = Milista.REMOVE_ELEMENTS_POSITION();
    cout<<Milista.Message <<'\n';

    //MOSTRAR LOS ELEMENTOS DE LA LISTA
    cout<<"Lista actualizada:" <<'\n';
    for(auto c : NewList){
        cout<<c <<'\n';
    }

    //ESPERAR PULSACION DE UNA TECLA
    system("pause");

    //ELIMINAR ELEMENTO SEGUN SU VALOR
    NewList = Milista.REMOVE_ELEMENTS_VALUE();
    cout<<Milista.Message <<'\n';

    //MOSTRAR LOS ELEMENTOS DE LA LISTA
    for(auto c : NewList){
        cout<<c <<'\n';
    }

    return 0;
}
