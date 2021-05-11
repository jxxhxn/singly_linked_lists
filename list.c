//
// Created by 김재훈 on 2021/03/18.
//

#include "list.h"
#include "stdio.h"
#include "stdlib.h"

typedef struct node {
    int value;
    node *next;
} node;

node *head = NULL;
node *tail = NULL;

bool addNode(node* node)
{
if (head == NULL)
    {
    head = node;
    tail = node;
    }
tail -> next = node;
node -> next = NULL;
tail = node;
}

void printList() {
    node *list = head;
    while(list) {
        printf("%d ", list -> value);
        list = list -> next;
    }
    printf("\n");
}

bool deleteNode (node* node) {
   struct node *delete, *previous;
   delete = node;
   previous = head;
   if (delete == previous) {
       head = head -> next;
       if (tail == delete) {
           tail = tail -> next;
       }
       free(delete);
   }
   else {
       while (previous -> next != delete) {
           previous = previous -> next;
       }
       previous -> next = delete ->next;
       if (tail == delete) {
           tail = previous;
       }
       free(delete);
   }
}

node* findNode(int value) {
node* find = head;
    while(find) {
        if (find->value == value) {
            return find;
        }
        find = find->next;
    }
    return 0;
}

void deleteLargest(void) {
    node* element = head;
    int temp1, temp2, largest;
    for (int i =0; i < 14; i++) {
        temp1 = element -> value;
        element = element -> next;
        temp2 = element -> value;
        if (temp1 >= temp2) {
            largest = temp1;
        }
    }
    while (findNode(largest)) {
        deleteNode(findNode(largest));
    }
}

int count(void) {
    int count = 0;
    while(head != NULL) {
        head = head -> next;
        count++;
    }
    return count;
}

void swap (node* node1, node* node2) {
    int temp = node1->value;
    node1->value = node2 -> value;
    node2 -> value = temp;
}

void sort(void) {
    node *current = head, *compare = NULL;
    if(head == NULL) {
        return;
    }
    else {
        while(current != NULL) {
            compare = current->next;
            while(compare != NULL) {
                if(current->value > compare->value) {
                    swap(current,compare);
                }
                compare = compare->next;
            }
            current = current->next;
        }
    }
}
