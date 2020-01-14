#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

bool esPrimo(int n){
    if(n == 2)
        return true;
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }
}

int suma(void){
    int sum = 0;
    for(int i = 2; i <= 100; i++){
        if(esPrimo(i) == true)
            sum += i;
    }
    return sum;
}

int main(){
    int numeros[100];
    int acum=0;
    
    for (int i = 0; i < 101; i++)
    {
        numeros[i]=i;
    }
    suma(numeros,acum);
    
    return 0;
}