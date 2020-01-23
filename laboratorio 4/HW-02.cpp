#include <iostream>
#include <string>
using namespace std;

void inverso(int n);

int main(void){
    int num;
    cout<<"digite un numero natural de dos o mas digitos: "; cin>>num; cin.ignore();
    inverso(num);

}

void inverso(int n){
    cout<<n%10;
    if (n>10)
    {
        inverso(n/10);
    }
    return;
}