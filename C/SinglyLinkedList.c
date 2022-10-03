#include <stdio.h>
#include <stdlib.h>

//Represent a node of the singly linked list
struct Node{
    int data;
    struct Node* next;
};

//Represent the head and tail of the singly linked list 
struct Node *head = NULL;
struct Node *tail = NULL;

//addNode() will add a new node to the list
void addNode (int z){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = z;
    p->next = NULL;

//If list is empty, both head and tail will point to new node 
    if(head==NULL){
        head = p;
        tail = p;
    } else{
        //newNode will be added after tail such that tail's next will point to newNode
        tail->next = p;
        //newNode will become new tail of the list  
        tail = p;
    }
}

//display() will display all the nodes present in the list
void display(struct Node* node){
    //Node current will point to head
    struct Node* current = node;
    if (current==NULL){
        printf("List is empty.\n");
        return;
    }else{
        printf("Nodes of singly linked list: \n");
        while(current != NULL){
            printf("%d ", current->data);
                current = current->next;
         }
         printf("\n");
         return;
    }
}


int main() {
    //Add nodes to the list 
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);

    //Displays the nodes present in the list
    display(head);
    return 0;
}