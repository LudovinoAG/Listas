#include <bits/stdc++.h>

using namespace std;

class ListaCircular{

public:
    list<int> Lista;
    list<int>::iterator puntero;
    int NewElement;

    //Convertir la lista en circular
    void ComprobarLista(){
        if(ExistenElementos()){
            auto Ultimo = prev(Lista.end());
            Lista.splice(Lista.begin(), Lista, Ultimo);
        }
    }

    //Elementos por defecto
    void DefaultElement(){
        for(int i = 1; i <= 4; i++){
            Lista.push_back(i);
        }
        //Mostrar los elementos y hacer circular
        MostrarElementos();
    }

    //Insertar al principio
    void InsertarInicio(){
        cout<<"Escriba el elemento a insertar al principio" <<'\n';
        cin>>NewElement;
        if(NewElement!=0){
            Lista.push_front(NewElement);
            cout<<"El elemento [" + to_string(NewElement) + "] se ha insertado al principio" <<'\n';
            MostrarElementos();
        }
    }


    //Insertar elemento al final
    void InsertarFinal(){
        cout<<"Digite el elemento deseado a insertar al final" <<'\n';
        cin>>NewElement;
        Lista.push_back(NewElement);
        cout<<"El elemento [" + to_string(NewElement) + "] se ha insertado al final" <<'\n';
        MostrarElementos();

    }

    void InsertarElementPos(){
        cout<<"Digite la posición donde insertará el elemento:" <<'\n';
        int pos;
        for (int i = 0; i < Lista.size(); i++){
            cout<<"[" + to_string(i) + "]" <<' ';
        }

        cout<<'\n';

        cin>>pos;
        auto position = Lista.begin();
        advance(position,pos);

        if(Lista.end()!=position){
            cout<<"Digite ahora el valor del elemento a insertar" <<"\n";
            cin>>NewElement;
            Lista.insert(position, NewElement);
            //Mostrar los elementos
            MostrarElementos();
        }else{
            cout<<"No se encontró la posición [" + to_string(pos) + "] en la lista" <<'\n';
        }

    }

    void EliminarPrimerElemento(){
        cout<<"Eliminando el primer elemento de la lista..." <<'\n';
        Lista.pop_front();
        MostrarElementos();
    }

    void EliminarUltimoElemento(){
        cout<<"Eliminando el ultimo elemento de la lista..." <<'\n';
        Lista.pop_back();
        MostrarElementos();
    }

    void EliminarElementoPos(){
        //VALIDAR SI EXISTEN ELEMENTOS EN LA LISTA
        if (ExistenElementos()) {
            int pos;
            //MOSTRAR MENSAJE AL USUARIO DE LAS POSICIONES EXISTENTES EN LA LISTA
            cout << "Escriba una de las posiciones existentes del elemento que desea eliminar" << '\n';
            for (int i = 0; i < Lista.size(); i++) {
                cout << "[" + to_string(i) + "] " << ' ';
            }
            cout << '\n';
            cin >> pos;
            //MOVER EL PUNTERO AL PRINCIPIO DE LA LISTA
            auto position = Lista.begin();
            auto oldElement = Lista.begin();
            //ENCONTRAR LA POSICION EN LA LISTA
            advance(position, pos);
            //ELIMINAR EL ELEMENTO
            oldElement = position;
            Lista.erase(position);
            //GUARDAR MENSAJE
            cout<<"Se ha eliminado el elemento [" + to_string(*oldElement) + "]"
                                                                               " de la posicion [" + to_string(pos) +
                      "]" <<'\n';
            MostrarElementos();
        }
    }

    void BuscarElemento(){
        if (ExistenElementos()) {
            int value;
            cout << "Escriba el elemento a buscar en la lista:" << '\n';
            cin >> value;
            //BUSCAR EL VALOR EN LA LISTA
            puntero = find(Lista.begin(), Lista.end(), value);
            //COMPROBAR SI EXISTE EL ELEMENTO EN LA LISTA
            if (puntero != Lista.end()) {
                cout<<"El elemento [" + to_string(*puntero) + "] fue encontrado en la posicion "
                                                             "[" + to_string(distance(Lista.begin(), puntero)) + "]" <<'\n';
                MostrarElementos();
            } else {
                cout<<"El elemento [" + to_string(value) + "] No fue encontrado";
            }
        }
    }

    //Imprimir contenido de la lista
    void MostrarElementos(){
        cout<<"Mostrando elementos de la lista..." <<'\n';
        if(ExistenElementos()){
            ComprobarLista();
            for(const auto& elemento : Lista){
                cout<<elemento <<'\n';
            }
        }else{
            cout<<"No hay elementos en la lista";
        }
        cout<<GetSize();
    }

    //Obtener el tamaño
    string GetSize(){
        return "El tamaño de la lista es: " + to_string(Lista.size()) + "\n";
    }

    bool ExistenElementos(){
        if(!Lista.empty()){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    ListaCircular MiLista;
    MiLista.DefaultElement();

    MiLista.InsertarInicio();

    MiLista.InsertarFinal();

    MiLista.InsertarElementPos();

    MiLista.EliminarPrimerElemento();

    MiLista.EliminarUltimoElemento();

    MiLista.EliminarElementoPos();

    MiLista.BuscarElemento();
    
    return 0;
}
