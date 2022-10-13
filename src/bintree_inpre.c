/*====================================================================================================================*/

/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/*#include <limits.h>*/

/*===========================================================*/

/*typedef struct _Node {*/
    /*int data;*/
    /*struct _Node * left, * right;*/
/*} Node;*/

/*====================================================================================================================*/

/*Node * bintree_create(int inorder[], int preorder[], int inorder_start, int inorder_end);*/
/*void bintree_print(Node * root);*/
/*void bintree_inorder_traversal(Node * root);*/
/*void bintree_preorder_traversal(Node * root);*/
/*void bintree_postorder_traversal(Node * root);*/
/*int bintree_max(Node * root);*/
/*void bintree_destroy(Node * root);*/

/*===========================================================*/

/*Node * node_create(int data);*/
/*int index_search(int inorder[], int inorder_start, int inorder_end, int data);*/

/*====================================================================================================================*/

/*int main(void) {*/
    /*int n;*/
    /*scanf("%d", &n);*/

    /*int * inorder = malloc(sizeof(int) * n);*/
    /*for (int i = 0; i < n; i++) {*/
        /*scanf("%d", &inorder[i]);*/
    /*}*/

    /*int * preorder = malloc(sizeof(int) * n);*/
    /*for (int i = 0; i < n; i++) {*/
        /*scanf("%d", &preorder[i]);*/
    /*}*/

    /*Node * root = bintree_create(inorder, preorder, 0, n - 1);*/

    /*bintree_print(root);*/

    /*printf("\n");*/

    /*bintree_inorder_traversal(root);*/

    /*printf("\n");*/

    /*bintree_preorder_traversal(root);*/

    /*printf("\n");*/

    /*bintree_postorder_traversal(root);*/

    /*printf("\n");*/

    /*printf("\nbintree_max: %d\n", bintree_max(root));*/

    /*bintree_destroy(root);*/

    /*free(inorder);*/
    /*free(preorder);*/

    /*return 0;*/
/*}*/

/*====================================================================================================================*/

/*Node * bintree_create(int inorder[], int preorder[], int inorder_start, int inorder_end) {*/
    /*if (inorder_start > inorder_end) {*/
        /*return NULL;*/
    /*} else {*/
        /*static int preorder_index;*/

        /*Node * node = node_create(preorder[preorder_index]);*/
        /*preorder_index++;*/

        /*int inorder_index = index_search(inorder, inorder_start, inorder_end, node->data);*/

        /*node->left = bintree_create(inorder, preorder, inorder_start, inorder_index - 1);*/
        /*node->right = bintree_create(inorder, preorder, inorder_index + 1, inorder_end);*/

        /*return node;*/
    /*}*/
/*}*/

/*===========================================================*/

/*Node * node_create(int data) {*/
    /*Node * node = malloc(sizeof(Node));*/
    /*node->data = data;*/
    /*node->left = NULL;*/
    /*node->right = NULL;*/

    /*return node;*/
/*}*/

/*===========================================================*/

/*int index_search(int inorder[], int inorder_start, int inorder_end, int data) {*/
    /*int i = inorder_start;*/

    /*while (i <= inorder_end) {*/
        /*if (inorder[i] == data) {*/
            /*break;*/
        /*}*/

        /*i++;*/
    /*}*/

    /*return i;*/
/*}*/

/*====================================================================================================================*/

/*void bintree_print(Node * root) {*/
    /*if (root->left == NULL && root->right == NULL) {*/
        /*return;*/
    /*} else {*/
        /*if (root->left != NULL) {*/
            /*printf("%d -> %d\n", root->data, root->left->data);*/
            /*bintree_print(root->left);*/
        /*}*/

        /*if (root->right != NULL) {*/
            /*printf("%d -> %d\n", root->data, root->right->data);*/
            /*bintree_print(root->right);*/
        /*}*/
    /*}*/
/*}*/

/*====================================================================================================================*/

/*void bintree_inorder_traversal(Node * root) {*/
    /*if (root == NULL) {*/
        /*return;*/
    /*} else {*/
        /*bintree_inorder_traversal(root->left);*/
        /*printf("%d ", root->data);*/
        /*bintree_inorder_traversal(root->right);*/
    /*}*/
/*}*/

/*===========================================================*/

/*void bintree_preorder_traversal(Node * root) {*/
    /*if (root == NULL) {*/
        /*return;*/
    /*} else {*/
        /*printf("%d ", root->data);*/
        /*bintree_preorder_traversal(root->left);*/
        /*bintree_preorder_traversal(root->right);*/
    /*}*/
/*}*/

/*===========================================================*/

/*void bintree_postorder_traversal(Node * root) {*/
    /*if (root == NULL) {*/
        /*return;*/
    /*} else {*/
        /*bintree_postorder_traversal(root->left);*/
        /*bintree_postorder_traversal(root->right);*/
        /*printf("%d ", root->data);*/
    /*}*/
/*}*/

/*====================================================================================================================*/

/*int bintree_max(Node * root) {*/
    /*if (root->left == NULL && root->right == NULL) {*/
        /*return root->data;*/
    /*} else {*/
        /*int max = root->data;*/

        /*if (root->left != NULL) {*/
            /*int temp = bintree_max(root->left);*/

            /*if (temp > max) {*/
                /*max = temp;*/
            /*}*/
        /*}*/

        /*if (root->right != NULL) {*/
            /*int temp = bintree_max(root->right);*/

            /*if (temp > max) {*/
                /*max = temp;*/
            /*}*/
        /*}*/

        /*return max;*/
    /*}*/
/*}*/

/*====================================================================================================================*/

/*void bintree_destroy(Node * root) {*/
    /*if (root == NULL) {*/
        /*return;*/
    /*} else {*/
        /*bintree_destroy(root->left);*/
        /*bintree_destroy(root->right);*/

        /*free(root);*/
    /*}*/
/*}*/

/*====================================================================================================================*/
