#include <iostream>
#include <string>
using namespace std;

struct Address{
    int housenumber;
    string city, state;
    
};

struct personalinfo{
    Address paddress;
    string name;
    int age;
};

void printinfo(personalinfo *pi, int size, int pos);

int main(void){
    int num=0;
    cout<<"cantidad de datos a ingresar: "; cin>>num;

    personalinfo *array;
    array= new personalinfo[num];
    for(int i=0; i<num; i++){
    cout<<"nombre: "; cin>> array[i].name;
    cout<<"edad: "; cin>> array[i].age;
    cout<<"numero de casa: "; cin>> array[i].paddress.housenumber;
    cout<<"nombre de ciudad: "; cin>> array[i].paddress.city;
    cout<<"nombre de estado: "; cin>> array[i].paddress.state;
    cout<<endl;
    }
    printinfo(array,num, 0);
    return 0;
}
    
void printinfo(personalinfo *pi, int size, int pos){
    if(pos==(size)){
        return;
    }
    else{
    cout<<"nombre: "<< pi[pos].name<<endl;
    cout<<"edad: "<< pi[pos].age<<endl;
    cout<<"numero de casa: "<< pi[pos].paddress.housenumber<<endl;
    cout<<"nombre de ciudad: "<< pi[pos].paddress.city<<endl;
    cout<<"nombre de estado: "<< pi[pos].paddress.state<<endl;

    printinfo(pi, size, (pos+1));

    }
}