#include <iostream>
using namespace std;

int fibonacci(int n);

int main(void){
    int num=0;
    cout<<"\tSerie fibonacci\n";
    cout<<"digite un numero: "; cin>>num; cin.ignore();
    int resp=fibonacci(num);
    cout<<resp;
    return 0;
}

int fibonacci(int n){
    if (n==0)
    {
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else
    {
        int y=fibonacci(n-2);
        int x=fibonacci(n-1);
        return x+y;
    }
    
    
}