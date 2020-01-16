#include <iostream>
#include <string>
using namespace std;

struct Address{
    int housenumber;
    string city, state:
    
};

struct personalinfo{
    Address paddress;
    string name;
    int age;
};

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
    }
    return 0;
}