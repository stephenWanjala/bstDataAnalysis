// Node.h
#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

class Node {
public:
    std::string data; // data of type string
    Node* left; // pointer to left child
    Node* right; // pointer to right child

    // constructor
    Node(const std::string& d);

    // virtual function to print the data
    virtual void printData() const;
};

#endif // NODE_H
