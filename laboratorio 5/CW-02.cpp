#include <iostream>
#include <string>
using namespace std;

struct node{
    string content, address;
    float weight;
    node* next;
};

void push(node* pst,string content,string address,float weight);
node top(node* pst);
node pop(node* pst);

int main(void){
    node* pst=NULL;
    string content,address;
    float weight;
    int option=0;
    do
    {
        cout<<"peso: "; cin>> weight; cin.ignore();
        cout<<"contenido: "; getline(cin,content);
        cout<<"direccion: "; getline(cin,address);
        st.push(&pst,content,address,weight);

        cout<<"desea ingresar mas datos 1= si 0= no: "; cin>> option; cin.ignore();
    } while (option!=0);
    
    node aux=top(&pst);
    cout<<"peso: "<<aux.weight<<endl;
    cout<<"contenido: "<<aux.content<<endl;
    cout<<"direccion: "<<aux.addres<<endl;

    aux=pop(&pst);

    return 0;
}

void push(node* pst,string content,string address,float weight){
    node* newnode=new node;
    newnode->address=address;
    newnode->content=content;
    newnode->weight=weight;
    newnode->next=pst;
    pst=newnode;

}

node top(node* pst){
    node aux;
    if (!(pst))
    {
        aux.address="";
        aux.content="";
        aux.weight="";
        aux.next=NULL;
        return aux;
    }
    else
    {
        aux.address=(*pst)->address;
        aux.content=(*pst)->content;
        aux.weight=(*pst)->weight;
        aux.next=NULL;
        return aux;
    }
    
}

node pop(node* pst){
     node aux;
    if (!(pst))
    {
        aux.address="";
        aux.content="";
        aux.weight="";
        aux.next=NULL;
    }
    else
    {
        aux.address=(pst)->address;
        aux.content=(pst)->content;
        aux.weight=(pst)->weight;
        aux.next=NULL;
        (pst)->
    }
    return aux;
}