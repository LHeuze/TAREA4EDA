#include <iostream>
#include "2-3Tree.hpp"


TwoThreeTree::TwoThreeTree() {
    root = nullptr;
}

void TwoThreeTree::insert(int key) {
    if (root == nullptr) {
        root = new Node(key);
    } else {
        insert(root, key);
    }
}

void TwoThreeTree::insert(Node* node, int key) {
    if (node->keys[1] == -1) {
        if (key < node->keys[0]) {
            node->keys[1] = node->keys[0];
            node->keys[0] = key;
        } else {
            node->keys[1] = key;
        }
    } else {
        if (key < node->keys[0]) {
            insert(node->children[0], key);
        } else if (key > node->keys[1]) {
            insert(node->children[2], key);
        } else {
            insert(node->children[1], key);
        }
    }
}