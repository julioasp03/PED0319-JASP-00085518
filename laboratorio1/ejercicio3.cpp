#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void multiplo(int *p){
    int suma=0;
    for (int i = 0; i < 15; i++)
    {
        if(*(p+i)%7==0){
            suma=suma+*(p+i);
        }
    }
    cout<<"la suma de los multiplos de 7 es:\n";
    cout<<suma;
}

int main(void){
    int arreglo[15];
    int num, c;
    srand(time(NULL));
    for (int i = 0; i < 15; i++)
    {
        for(c = 1; c <= 75; c++)
    {
        num = 1 + rand() % (76 - 1);
        arreglo[i]= num;}
    }
    for (int i = 0; i < 15; i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    multiplo(arreglo);
    return 0;
}

