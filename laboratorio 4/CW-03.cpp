#include <iostream>
using namespace std;

struct monomio{
    float coef,exp;
};

float evaluate(monomio *array,int size,int aux);

int main(void){
    int size=0;
    cout<<"digite la cantidad de coeficientes: "; cin>> size; cin.ignore();
    struct monomio *array;
    array=new monomio[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"digite el coeficiente "<<i+1<<": "; cin>>array[i].coef; cin.ignore();
        cout<<"digite el exponente "<<i+1<<": "; cin>>array[i].exp; cin.ignore();
    }
     cout<<evaluate(array,size,0);

    return 0;
}
float evaluate(monomio *array, int size, int aux){
    if(aux==size){
        return 0;
    }
    else
    {
        return (array[aux].coef,array[aux].exp)+ evaluate(array,size,aux+1);
    }
    
}