//
// Created by 김재훈 on 2021/03/18.
//

#include "node.h"
#include "stdlib.h"
#include "stdio.h"
typedef struct node {
    int value;
    node* next;
} node;

node* createNode(int value) {
    node *newNode = (struct node*) malloc(sizeof(node));
    if (newNode) {
        newNode->value = value;
        newNode->next = NULL;
    }
    else {
        puts("unable to allocate memory for a node. \n");
    }
    return newNode;
}
