#include <stdio.h>

#define IDX 0

typedef struct _Node {
    int index;
    int data;
    struct _Node * next;
} Node;

Node * node_delete(Node * head, int index);

int main(void) {
    Node * head_main = NULL;

    head_main = node_delete(head_main, IDX);

    printf("%d", head_main->data);

    return 0;
}

Node *  node_delete(Node * head_main, int index_main) {
    Node * head_local = head_main;

    while (head_local->index != index_main) {
        head_local = head_local->next;
    }

    return head_local;
}
