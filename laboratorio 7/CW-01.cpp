#include <iostream>
#include <queue>
#include <string>
#include<vector>
using namespace std;

enum genero{a,b,c,d}

struct canciones{
    string titulo, cantante;
    genero gen;
    int duracion;
};

typedef canciones t;

void menu();
void buscarelemento(vector<t> canciones,queue<t>* cola,string tit);

int main(void){
    vector<t> lista;
    queue<t> triste,feliz,dormir;
    int opcion=0,auxenum=0;
    t aux;
    string tit;
    do
    {
        menu(); cin>>opcion; cin.ignore();
        switch (opcion)
        {
        case 1: cout<<"titulo: "; getline(cin,aux.titulo);
            cout<<"cantante: "; getline(cin,aux.cantante);
            cout<<"genero (1-a,2-b,3-c,4-d): "; cin>>auxenum; cin.ignore(); auxenum--;
            aux.gen=genero(auxenum);
            aux.duracion=0;
            do
            {
                cout<<"duracion: "; cin>>aux.duracion; cin.ignore();
            } while (aux.duracion<=0);
            lista.push_back(aux);
            break;
        case 2: 
             cout<<"cancion a buscar: "; getline(cin,tit);
             for(auto iter=lista.begin();iter !=lista.end();++iter){
                 if(iter->titulo.compare(tit)){
                     iter=lista.erase(iter);
                 }
                 else
                 {
                     iter++;
                 }
                 
             }

        break;
        case 3: 
            for(t elemento: lista){
                cout<<elemento.cantante<<endl;
                cout<<elemento.titulo<<endl;
                cout<<elemento.duracion<<endl;
                switch (elemento.gen)
                {
                case a:
                    cout<<'a';
                    break;
                
                case b:
                    cout<<'b';
                    break;
                case c:
                    cout<<'c';
                    break;
                case d:
                    cout<<'d';
                    break;
                }
            }
            break;
        case 4: 
            cout<<"cancion a buscar: "; getline(cin,tit);
            cout<<"agregar en (1-triste, 2-feliz, 3-dormir): ";
            cin>>auxenum; cin.ignore();
            switch (auxenum)
            {
            case 1:
                buscarelemento(lista,&triste,tit);
                break;
             case 2:
                buscarelemento(lista,&feliz,tit);
                break;
             case 3:
                buscarelemento(lista,&dormir,tit);
                break;
            }
        break;
            
            
        }
    } while (opcion!=0);
    

    return 0,
}

void menu(){
    cout<<"1. agregar cancion\n";
    cout<<"2. eliminar cancion\n";
    cout<<"3. mostrar canciones\n";
    cout<<"4. buscar cancion\n";
    cout<<"0. salir\n";
    cout<<"Su opcion: ";
}

void buscarelemento(vector<t> canciones,queue<t>* cola,string tit){
    for(t elemento: canciones){
        if(elemento.titulo.compare(tit)==0){
            cout<<"cancion encontrada";
            (*cola).push(elemento);
            return;
        }
        else
        {
            cout<<"no existe titulo";
        }
        
    }
}