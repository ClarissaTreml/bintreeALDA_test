//
//  Test Gruppe A
//
//  Created by Michael Strommer on 01.06.21.
//

#include "bintree.hpp"


binTree *t_init(){
    binTree *tmp = (binTree *)malloc(sizeof(binTree));
    tmp->root = NULL;
    tmp->size = 0;
    return tmp;
}

node *insertNode(node *start, const char *key, const char *data){


    node * newNode;

    if (start == NULL) {
        newNode = (node *) malloc(sizeof(node));
        if (newNode != NULL) {
            newNode->key = (char *) key;
            newNode->data = (char *) data;
            newNode->right = newNode->left = NULL;
        }
        return newNode;
    }
    if ((char *) key < start->key){
        newNode = insertNode(start->left, key, data);
        if (start->left == NULL)
            start->left = newNode;
    } else{
        newNode = insertNode(start->right, key, data);
        if (start->right == NULL)
            start->right = newNode;
    }
    return newNode;
    // recursive implementation

}

node *insert(binTree *t, const char *key, const char *data){



    node *newNode;

    newNode = insertNode(t->root, key, data);
    printf("\n");

    if (t->root == NULL) t->root = newNode;
    if (newNode != NULL) t->size++;



    return newNode;

}

void printTreeInOrder(node * start){

    if (start == NULL) return;

    printTreeInOrder(start->left);
    printf(" %i ", start -> data);
    printTreeInOrder(start->right);

}

void testPrintTreeInOrder(){
    
}

int validate(node *start, int min, int max){


    if (start->key < (char *) min || start->key > (char *)max) return 0;





    // recursive implementation
    return 0;
}
