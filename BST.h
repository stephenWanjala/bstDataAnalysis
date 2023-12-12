#include <iostream>

template <typename data_t>
class Node;

template <typename data_t>
class BST {
private:
    Node<data_t>* root;
    Node<data_t>* insert(Node<data_t>* node, data_t data);
    Node<data_t>* search(Node<data_t>* node, data_t data);
    void inorder(Node<data_t>* node);
    void printDataHelper(const Node<data_t>* node) const;
    Node<data_t>* findSmallestHelper(Node<data_t>* node);
    Node<data_t>* findLargestHelper(Node<data_t>* node);

public:
    BST();
    void insert(data_t data);
    bool search(data_t data);
    void inorder();
    void printData() const;
    Node<data_t>& findSmallest();
    Node<data_t>& findLargest();
};