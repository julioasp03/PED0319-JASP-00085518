#include <iostream>

using namespace std;

void print(char *printarray[], int size);

int main(void)
{
    int size=0;
    cout<<"digite la cantidad de letras: \n";
    cin<<size;

    char *array;
    array= new char[size];

    for(int i=0; i< size;i++){
        cout<<"digite la letra: ";
        cin>>array[i];
    }
    print(array,size);
    return 0;
}

void print(char *printarray[], int size){
    for(int i=0; i<size;i++){
        cout<<"letra "<<printarray[i]<<endl;
    }
}
