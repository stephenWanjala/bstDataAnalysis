#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <boost/tokenizer.hpp>

using namespace std;

template <typename data_t>
class Node {
public:
    data_t data; // data of any type
    Node* left; // pointer to left child
    Node* right; // pointer to right child

    // constructor
    Node(data_t d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};


template <typename data_t>
class BST {
private:
    Node<data_t>* root; // pointer to root node

    // helper function to insert a node recursively
    Node<data_t>* insert(Node<data_t>* node, data_t data) {
        if (node == nullptr) {
            // create a new node with data
            node = new Node<data_t>(data);
        }
        else if (data < node->data) {
            // insert in the left subtree
            node->left = insert(node->left, data);
        }
        else if (data > node->data) {
            // insert in the right subtree
            node->right = insert(node->right, data);
        }
        // return the updated node
        return node;
    }

    // helper function to search for a node recursively
    Node<data_t>* search(Node<data_t>* node, data_t data) {
        if (node == nullptr || node->data == data) {
            // return the node if found or not found
            return node;
        }
        else if (data < node->data) {
            // search in the left subtree
            return search(node->left, data);
        }
        else {
            // search in the right subtree
            return search(node->right, data);
        }
    }

    // helper function to traverse the tree in order recursively
    void inorder(Node<data_t>* node) {
        if (node != nullptr) {
            // visit the left subtree
            inorder(node->left);
            // print the node data
            std::cout << node->data << " ";
            // visit the right subtree
            inorder(node->right);
        }
    }

public:
    // constructor
    BST() {
        root = nullptr;
    }

    // insert a data into the tree
    void insert(data_t data) {
        root = insert(root, data);
    }

    // search for a data in the tree
    bool search(data_t data) {
        Node<data_t>* node = search(root, data);
        // return true if found, false otherwise
        return node != nullptr;
    }

    // traverse the tree in order and print the data
    void inorder() {
        inorder(root);
        std::cout << "\n";
    }
};




