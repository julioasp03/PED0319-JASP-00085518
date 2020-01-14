#include <iostream>
#include <string>
using namespace std;

struct address{
    int housephone;
    string city;
    string state;
};

void print(address printAd);

int main(void)
{
    address ad1;

    cout<<" numero de casa: "; 
    cin>> ad1.housephone;
    cout<<" nombre de ciudad: "; 
    cin>> ad1.city;
    cout<<" nombre de estado: "; 
    cin>> ad1.state;

    print(ad1);
  
    return 0;
}
 void print(address printAd){
    cout<<" numero de casa: "<<printAd.housephone<<endl;
    cout<<" nombre de ciudad: "<<printAd.city<<endl;
    cout<<" nombre de estado: "<<printAd.state<<endl;
 }