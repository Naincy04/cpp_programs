#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void main(){
     Node* head = NULL;
    struct Node* node1 = NULL;
    struct Node* node2 = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    node1 = (struct Node*)malloc(sizeof(struct Node));
    node2 = (struct Node*)malloc(sizeof(struct Node));
   //take input in head->data from user
   cout<<"Enter the data for first node"<<endl;
   cin>>head->data;
   head->next = node2;
cout<<"Enter the data for second node"<<endl;
   cin>>node1->data;
   node2->next = NULL;


}