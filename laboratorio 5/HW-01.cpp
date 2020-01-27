#include <iostream>
#include <string>
using namespace std;
//estructura de mi nodo//
struct nodo{
    string name;
    int stock;
    float prize;
    struct nodo *next;
};
//creo una abrevacion para mi nodo //
typedef nodo* stp;
//prototipos//
bool empty(stp* s);
void init(stp* s);
void push(stp *s,string name,float prize,int stock);


int main(void){
    //declaro variables//
    stp s;
    init(&s);
    string name;
    int stock;
    float prize;
    char resp='s';
    //lleno variables y subo a la funcion push//
    do{
    cout<<"ingrese nombre del producto: "; getline(cin,name);
    cout<<"ingrese el precio del producto: "; cin>>prize; cin.ignore();
    cout<<"ingrese la cantidad existente: "; cin>>stock; cin.ignore();
    push(&s,name,prize,stock);
    cout<<"desea ingresar otro producto? s==si/n==no: "; cin>>resp; cin.ignore();
    cout<<endl;
    }while(resp=='s');
    return 0;
}

//inicio la pila//
void init(stp *s){
    *s=NULL;
}

//subo los datos a la pila//
void push(stp *s,string name,float prize,int stock){
    nodo *newNode= new nodo;
    newNode->prize= prize;
    newNode->stock=stock;
    newNode->name=name;
    newNode->next=*s;
    *s=newNode;
}

//si la pila esta vacia//
bool empty(stp * s){
    return *s==NULL;
}