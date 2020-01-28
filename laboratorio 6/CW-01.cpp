#include <iostream>
#include <string>
using namespace std;

struct node{
    int number;
    node* next;
};

node* addstack(node* list, int n);
node* addqueue(node* list,int n);
void printelements(node* list);
int countnumbers(node* list,int n);

int main(void){
    node *pstart=NULL;
    pstart= addstack(pstart,8);
    pstart= addstack(pstart,5);
    return 0;
}

node* addstack(node* list, int n){
    node* newNode= new node;
    newNode->number=n;
    newNode->next=list;
    list=newNode;
    return list;
}

node* addqueue(node* list,int n){
    node* newNode=new node*;
    newNode->number=n;

    if (!list)
    {
        list=newNode;
    }
    else
    {
        node *aux=list;
        while (!aux->next)
        {
            aux=aux->next;
        }
        aux->next=newNode;
        
    }
    return list;
    
}

void printelements(node* list){
    if (!list)
    {
        return;
    }
    else 
    {
        cout<<list->number<<endl;
        printelements(list->next);
    }
    
    
}

int countnumbers(node* list,int n){
    if (!list)
    {
        return 0;
    }
    else
    {
        if(list->number==n){
            return 1+countnumbers(list->next,n);
        }
        else
        {
            return 0+countnumbers(list->next,n);
        }
        
    }
    
}