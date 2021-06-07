//
//  Test Gruppe A
//
//  Created by Michael Strommer on 01.06.21.
//

#ifndef bintree_hpp
#define bintree_hpp

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node_ {
    char *key;
    char *data;
    int count;
    struct node_ *left;
    struct node_ *right;
} node;

typedef struct binTree_ {
    int size;
    node *root;
} binTree;

// Funktionsprototypen

binTree *t_init();
node *insertNode(node *, const char *, const char *);
node *insert(binTree *, const char *, const char *);
void printTreeInOrder(node *);
void testPrintTreeInOrder();
int validate(node *, int, int);

#endif /* bintree_hpp */
