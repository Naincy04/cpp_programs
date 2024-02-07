#include<iostream>
using namespace std;

struct Node{      //Creating a structure for the node and this is global variable main k andr ye local variable hota hai
    int data;
    struct Node *next;
};
int main(){
    struct Node *head = NULL;
    struct Node *node1 = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    node1 = (struct Node*)malloc(sizeof(struct Node));
    head-> data = 45;            //First node created and data is assigned
    head -> next = node1;   //Linking the first node with the second node
    node1 -> data = 98;      //Data is assigned to the second node
    node1 -> next = NULL;  
    cout<<head->data<<" "<<node1->data<<endl;
}