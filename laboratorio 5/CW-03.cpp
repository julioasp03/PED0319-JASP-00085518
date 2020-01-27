#include <iostream>
using namespace std;

struct node{
    int n;
    node* next;
};

int main(void){
    node* pstart=NULL;

    pstart= push(pstart,5);
    pstart= push(pstart,8);
    pstart= push(pstart,9);
    pstart= push(pstart,12);
   
    return 0;
}

node* push(node* pstart,int n){
    node* newNode= new node;
    newNode->n=n;
    newNode ->next=pstart;
    pstart=newNode;

}

node* top(node* pstart){
    if (!(pstart))
    {
        return NULL;
    }
    else
    {
        pstart->next=NULL;
        return pstart;
    }
    
    
}