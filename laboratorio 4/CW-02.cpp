#include <iostream>
#include <string>
using namespace std;

struct data{
    string name, report;
    float grade;

};
void fillarray(struct data *array,int size,int aux);
void printarray(struct data *array,int size,int aux);

int main(void){
    int size=0;
    cin>>size; cin.ignore();

    struct data *students;
    students= new data[size];
    fillarray(students,size,0);
    printarray(students,size,0);
    return 0;
}

void fillarray(data *array,int size,int aux){
    if (size==aux)
    {
        return;
    }
    else{
        cout<< "nombre: "; getline(cin,array[aux].name);
        cout<< "comentarios: "; getline(cin,array[aux].report);
        cout<< "nota: "; cin>>array[aux].grade; cin.ignore();
    }
    fillarray(array,size,aux+1);
    
}

void printarray(data *array,int size,int aux){
    if (size==aux)
    {
        return;
    }
    else{
        cout<< "nombre: "<<array[aux].name;
        cout<< "comentarios: "<<array[aux].report;
        cout<< "nota: "<<array[aux].grade;
    }
    printarray(array,size,aux+1);
    
}