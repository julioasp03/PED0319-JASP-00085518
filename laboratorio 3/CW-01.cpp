#include <iostream>
using namespace std;

struct Address{
    int housenumber;
    string city, state:
    
};

struct personalinfo{
    Address personaladdress;
    string name;
    int age;
};

int main(void){
    personalinfo x;

    cout<<"nombre: "; cin>> x.name;
    cout<<"edad: "; cin>> x.age;
    cout<<"numero de casa: "; cin>> x.personaladdress.housenumber;
    cout<<"nombre de ciudad: "; cin>> x.personaladdress.city;
    cout<<"nombre de estado: "; cin>> x.personaladdress.state;
    return 0;
}