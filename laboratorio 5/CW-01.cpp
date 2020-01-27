#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct pack{
    string content,addres;
    float weight;
};



int main(void){
    int option=0;
    stack<pack> st;
    pack aux;
    do
    {
        cout<<"peso: "; cin>> aux.weight; cin.ignore();
        cout<<"contenido: "; getline(cin,aux.content);
        cout<<"direccion: "; getline(cin,aux.addres);
        st.push(aux);
        cout<<"desea ingresar mas datos 1= si 0= no: "; cin>> option; cin.ignore();
    } while (option!=0);
    
    aux=st.top();
    cout<<"peso: "<<aux.weight<<endl;
    cout<<"contenido: "<<aux.content<<endl;
    cout<<"direccion: "<<aux.addres<<endl;
    return 0;
}