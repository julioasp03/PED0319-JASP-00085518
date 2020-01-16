#include <iostream>
#include <string>
using namespace std;

int addnumber(int end,int aux);

int main(void){
    cout<< addnumber(10,1);
    return 0;
}

int addnumber(int end, int aux){
    if(aux==end){
        return aux;
    }
    else
    {
        return aux + addnumber(end,aux+1);
    }
    
}