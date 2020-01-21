#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isprime(int n);
int addprimes(int start,int prime,int aux);

int main(void){
    int n = 0;
    cin>> n;
    isprime(n);
    cout<< addprimes(2,n,0);
    return 0;
}

bool isprime(int n){
    if(n==2){
        return true;
    }
    else{
        for (int i = 2; i <= sqrt(n); i++)
        {
            if(n%i==0){
                return false;
            
            }
        return true;
        }
    }
}

int addprimes(int start,int prime,int aux){
    if(aux==prime){
        return 0;
    }
    else{
        if (isprime(start)==true)
        {
            return start + addprimes(start +1,prime,aux+1);
        }
        else
        {
            return 0 + addprimes(start +1,prime,aux);
        }
    }
}