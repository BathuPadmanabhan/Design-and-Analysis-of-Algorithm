#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

bool isValidSequence(struct Node* root, int* arr, int n) {
    if (root == NULL || n == 0) {
        return false;
    }
    if ((root->data != arr[0]) || (n == 1 && (root->left != NULL || root->right != NULL))) {
        return false;
    }
    if (root->data == arr[0] && n == 1) {
        return true;
    }
    return isValidSequence(root->left, arr + 1, n - 1) || isValidSequence(root->right, arr + 1, n - 1);
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    
    int arr[] = {1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (isValidSequence(root, arr, n)) {
        printf("The given sequence is valid in the binary tree.\n");
    } else {
        printf("The given sequence is not valid in the binary tree.\n");
    }
    
    return 0;
}
