#include<iostream>
using namespace std;

class node{
    public:
        node *prev;
        int data;
        node *next;
}*first = NULL;

void create(int a[],int n){
    node *t,*last;
    int i;

    first=new node;
    first->data=a[0];
    first->prev=first->next=NULL;
    last =first ;

    for(i=1;i<n;i++){
        t=new node;
        t->data=a[i];
        t->next=NULL;
        t->prev=last;
        last->next = t;
        last = t;
    }
}

int length(node * p){
    int len=0;
    while(p!=NULL){
        len++;
        p=p->next;
    }
    return len;
}

void display(node * p){
    while(p!=NULL){
        cout<<" "<<p->data<<" ";
        p=p->next;
    }    
}



int main(){
    int a[]={1,2,3,4,5};
    create(a,5);
    display(first);
    cout<<"\n LENGTH ->"<<length(first);
    return 0;
}