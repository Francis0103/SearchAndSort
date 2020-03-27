#include <iostream>
#include "rb.h"

void inOrder (Node* root) {
   // if (root->left != nullptr)
   //     inOrder(root->left);
   // std::cout << root->data << " ";
   // if (root->right != nullptr)
   //     inOrder(root->right);
    if (root != nullptr) {
        inOrder(root->left);
        std::cout << root->data << " ";
        inOrder(root->right);
    }
}
