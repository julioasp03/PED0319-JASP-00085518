#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct node{
    string name;
    float price;
    node* next;
};

string convertstring(string product);
node* addelement(node* list,string product,float price);
void printmenu();
int searchstock(node* list,string product);

int main(void){
    node* list=NULL;
    string product;
    float price;
    int option=0;
    int auxstock=0;
    do
    {
        printmenu();cout<<endl; 
        cin>>option; cin.ignore();
        switch (option)
        {
        case 1: cout<<"ingrese datos del producto"<<endl;
        cout<<"Nombre: "; cin>>product; cin.ignore();
        cout<<"Precio: "; cin>>price; cin.ignore();
        product=convertstring(product);
        list= addelement(list,product,price);
            break;
        case 2: cout<<"ingrese el producto a buscar"<<endl;
        cout<<"Producto: "; cin>>product;
        product=convertstring(product);
        auxstock= searchstock(list,product);
        (auxstock==0)? cout<<"sin stock" : cout<<"cantidad en stock: "<<auxstock<<endl;
            break; 
        case 0: cout<<"saliendo";
            break;
        }
    } while (option!=0);
    
    return 0;
}

string convertstring(string product){
    string aux="";
    for (int i = 0; i < product.length(); i++)
    {
        aux+= toupper(product[i]);
    }
    return aux;
}

void printmenu(){
    cout<<"MENU PRINCIPAL"<<endl;
    cout<<"1. agregar producto"<<endl;
    cout<<"2. buscar producto"<<endl;
    cout<<"0. salir";
}

node* addelement(node* list,string product,float price){
    node* newNode= new node;
    newNode->name=product;
    newNode->price=price;
    newNode->next=NULL;

    if (!list)
    {
        list=newNode;
    }
    else
    {
        node* aux = list;
        while (aux->next==NULL)
        {
            aux=aux->next;

        }
        aux->next=newNode;
        
    }
    return list;
    
}

int searchstock(node* list,string product){
    if (!list)
    {
        return 0;
    }
    else 
    {
        if (product.compare(list->name)==0)
        {
            return 1+ searchstock(list->next,product);
        }
        else
        {
            return 0+ searchstock(list->next,product);
        }
        
    }
    
}