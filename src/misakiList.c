#include "misakiList.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void insertEndNodeToSingleList(SingleNode** head, int data) {
    SingleNode* new = malloc(sizeof(SingleNode));
    new->data = data;
    new->next = NULL;

    if (!*head) {
        *head = new;
    } else {
        SingleNode* cur = *head;

        while (cur->next) cur = cur->next;

        cur->next = new;
    }
}

SingleNode* searchMiddleNodeInSingleList(SingleNode* head) {
    SingleNode *cur = head, *mid = head;

    while (cur->next) {
        cur = cur->next->next;
        mid = mid->next;
    }

    return mid;
}

void reverseSingleList(SingleNode** head) {
    SingleNode *cur = *head, *pre = NULL, *nxt = NULL;

    while (cur) {
        nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
    }

    *head = pre;
}
