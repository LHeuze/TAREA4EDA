#include "2-3Node.hpp"

class TwoThreeTree {
public:
    TwoThreeTree();
    void insert(int key);

private:
    Node* root;
    void insert(Node* node, int key);

};

