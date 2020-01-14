#include <iostream>

using namespace std;

int main(void)
{
    float notas[20];
    float x;
    
    for(int i=0; i<20;i++){
        cout<<"ingrese la nota del estudiante "<<(i+1)<<" :"<<endl;
        cin>> x;
        notas[i]=x;
    }
    
    for(int i=0; i<20;i++){
        cout<<"nota "<<(i+1)<<": "<<notas[i]<<" ";
    }

    return 0;
}
