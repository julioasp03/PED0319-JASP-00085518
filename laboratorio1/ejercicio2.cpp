#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void examine(int *p);

int main(void){
    int array[15];
    int num, c;
    srand(time(NULL));//creo el comando para crear numeros al azar de 1 a 75//
    for (int i = 0; i < 15; i++)
    {
        for(c = 1; c <= 75; c++)
    {
        num = 1 + rand() % (76 - 1);
        array[i]= num;}
    }
    for (int i = 0; i < 15; i++)//lleno el arreglocon los numeros aleatorios//
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    examine(array);//llamo la funcion//
    return 0;
}

void examine(int *p){
    int suma=0;
    for (int i = 0; i < 15; i++)//verifico si es multiplo de 7//
    {
        if(*(p+i)%7==0){
            suma=suma+*(p+i);//si es multiplo de 7 se guarda en un acumulador llamdo suma//
        }
    }
    cout<<"la suma de los examines de 7 es:\n";
    cout<<suma;
    return;
}
