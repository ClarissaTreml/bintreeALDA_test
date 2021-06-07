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
    // recursive implementation
    return NULL;
}

node *insert(binTree *t, const char *key, const char *data){
    return NULL;
}

void printTreeInOrder(node * start){
    // recursive implementation
}

void testPrintTreeInOrder(){
    
}

int validate(node *start, int min, int max){
    // recursive implementation
    return 0;
}
