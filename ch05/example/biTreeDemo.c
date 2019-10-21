//
// Created by 李熠 on 2019/10/15.
//
#include "biTreeNode.h"

int main(void) {
    BiTreeNodeAddr root = biTreeCreate("Afghjk,fcghjkl");
    biTreePutLeaf(root, "B", "C");
    biTreePutLeaf(root->left, "D", "E");
    biTreePutLeaf(root->right, "F", "G");
    biTreePutLeaf(root->left->left, "H", "I");
    biTreePutLeaf(root->left->right, "J", "K");
    biTreePutLeaf(root->right->left, "L", "M");
    biTreePutLeaf(root->right->right, "N", "O");

    biTreePreOrder(root);
    printf("\n");
    biTreeInOrder(root);
    printf("\n");
    biTreePostOrder(root);
    printf("\n");
}

