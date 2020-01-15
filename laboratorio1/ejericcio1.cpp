#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

bool prime(int n);
int add(void);
 
int main(){
    //mando a llamar a la funcion add//
    add();
    
    return 0;
}

bool prime(int n){
    if(n == 2)
        return true;
        //verifico si no es 2 si el numero es primo o no con un bool//
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }
}


int add(void){
    int sum = 0;
    //sumo en un acumulador si es primo//
    for(int i = 2; i <= 100; i++){
        if(prime(i) == true)
            sum += i;
    }
    cout<<sum;
    return sum;
}