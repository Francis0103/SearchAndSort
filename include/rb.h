#ifndef INCLUDE_RB_H_
#define INCLUDE_RB_H

struct Node {
    int data;
    Node* left;
    Node* right;
    Node* parent;
    Node():data(0), left(nullptr), right(nullptr) {}
    Node(int data, Node* left, Node* right, Node* parent):
         data(data), left(left), right(right), parent(parent) {}
};

void inOrder (Node* root);

#endif
