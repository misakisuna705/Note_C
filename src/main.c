#include <stdio.h>
#include <stdlib.h>

#include "misakiList.h"
#include "misakiString.h"

void misakiString(void);
void misakiList(void);

int main() {
    misakiString();
    printf("\n");
    misakiList();

    return 0;
}

void misakiString(void) {
    char str[] = "abcde";

    printf("string: %s\n", str);

    reverseString(str);
    printf("reverse string: %s\n", str);
}

void misakiList(void) {
    SingleNode* list = NULL;

    insertEndNodeToSingleList(&list, 1);
    insertEndNodeToSingleList(&list, 2);
    insertEndNodeToSingleList(&list, 3);
    printf("single list: ");
    for (SingleNode* i = list; i; i = i->next) printf("%d ", i->data);
    printf("\n");

    printf("search middle node in single list: ");
    printf("%d\n", searchMiddleNodeInSingleList(list)->data);

    reverseSingleList(&list);
    printf("reverse single list: ");
    for (SingleNode* i = list; i; i = i->next) printf("%d ", i->data);
    printf("\n");
}
