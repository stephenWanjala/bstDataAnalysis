#include <iostream>

template <typename data_t>
class Node {
public:
    data_t data;
    Node* left;
    Node* right;

    Node(data_t d);
    virtual void printData() const;
};