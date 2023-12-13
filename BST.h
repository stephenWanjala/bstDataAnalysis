// BST.h
#ifndef BST_H
#define BST_H

#include "Node.hpp"

class BST {
private:
    Node* root; // pointer to root node

    // helper function to insert a node recursively
    Node* insert(Node* node, const std::string& data);

    // helper function to search for a node recursively
    Node* search(Node* node, const std::string& data);

    // helper function to traverse the tree in order recursively
    void inorder(Node* node);

    // Helper function to print data of type string
    void printDataHelper(const Node* node) const;

    // Helper function to find the smallest node in the tree
    Node* findSmallestHelper(Node* node);

    // Helper function to find the largest node in the tree
    Node* findLargestHelper(Node* node);

public:
    // constructor
    BST();

    // insert a data into the tree
    void insert(const std::string& data);

    // search for a data in the tree
    bool search(const std::string& data);

    // traverse the tree in order and print the data
    void inorder();

    // virtual function to print the data
    virtual void printData() const;

    // Function to find the smallest node in the tree
    Node& findSmallest();

    // Function to find the largest node in the tree
    Node& findLargest();
};

#endif // BST_H
