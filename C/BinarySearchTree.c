#include <stdio.h>
#include <stdlib.h>

//Represent the node of binary tree
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

//Assign data to the new node, set left and right children to null
struct Node* add(int z){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = z;
    p->left = NULL;
    p->right = NULL;
}

//Represent the root of binary tree 
void BinarySearchTree(){
    struct Node* root = NULL;
}
//factorial() will calculate the factorial of given number
int factorial(int num){
    int fact = 1;
    if(num==0){
        return 1;
    } else{
        while(num > 1){
            fact = fact*num;
            num--;
        }
        return fact;
    }
};

//numOfBST() will calculate the total number of possible BST by calculating Catalan Number for given key
int numOfBST(int key){
    int catalanNumber = factorial(2*key)/(factorial(key + 1) * factorial(key));
    return catalanNumber;
}

int main(){
    BinarySearchTree();
    printf("Total number of possible Binary Search Trees with given key: %d", numOfBST(5));
}
