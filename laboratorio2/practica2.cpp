#include <iostream>

using namespace std;

int main()
{
    int x=1;
    int matriz[3][3];
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            matriz[i][j]=x;
            x++;
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}