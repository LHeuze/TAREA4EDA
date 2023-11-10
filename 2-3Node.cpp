#include "2-3Node.hpp"
#include <iostream>
Node::Node(int key) {
    keys[0] = key;
    keys[1] = -1;
    children[0] = children[1] = children[2] = nullptr;
    parent = nullptr;
}