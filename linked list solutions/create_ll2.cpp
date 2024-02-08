#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main(){
    struct Node* node3 = NULL;
    struct Node* node1 = NULL;
    struct Node* node2 = NULL;
    node1 = (struct Node*)malloc(sizeof(struct Node));
    node2 = (struct Node*)malloc(sizeof(struct Node));
    node3 = (struct Node*)malloc(sizeof(struct Node));
   //take input in  from user
   cout<<"Enter the data for first node"<<endl;
   cin>>node1->data;
   node1->next = node1;
cout<<"Enter the data for second node"<<endl;
   cin>>node2->data;
   node2->next = node2;
   cout<<"Enter the data for third node"<<endl;
   cin>>node3->data;
   node3->next = NULL;
cout<<node1->data<<" "<<node2->data<<" "<<node3->data<<endl;   

}