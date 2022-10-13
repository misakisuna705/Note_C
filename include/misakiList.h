#ifndef _MISAKILIST_H_
#define _MISAKILIST_H_

typedef struct _SingleNode {
    int data;
    struct _SingleNode* next;
} SingleNode;

void insertEndNodeToSingleList(SingleNode** head, int data);
SingleNode* searchMiddleNodeInSingleList(SingleNode* head);
void reverseSingleList(SingleNode** head);

#endif
