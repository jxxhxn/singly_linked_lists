//
// Created by 김재훈 on 2021/03/18.
//

#ifndef PS3_LIST_H
#define PS3_LIST_H

#include <stdbool.h>

typedef struct node node;
bool addNode(node* ); //Add a node to the list
node* findNode(int ); //Find a node in the list
bool deleteNode (node* ); //Delete a node in the list
void printList(void ); //Print the values in the list
void deleteLargest(void);
int count (void);
void swap (node* , node* );
void sort(void);
#endif //PS3_LIST_H
