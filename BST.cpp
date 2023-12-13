// BST.cpp
#include "BST.h"

BST::BST() : root(nullptr) {}

Node* BST::insert(Node* node, const std::string& data) {
    if (node == nullptr) {
        node = new Node(data);
    } else if (data < node->data) {
        node->left = insert(node->left, data);
    } else if (data > node->data) {
        node->right = insert(node->right, data);
    }
    return node;
}

Node* BST::search(Node* node, const std::string& data) {
    if (node == nullptr || node->data == data) {
        return node;
    } else if (data < node->data) {
        return search(node->left, data);
    } else {
        return search(node->right, data);
    }
}

void BST::inorder(Node* node) {
    if (node != nullptr) {
        inorder(node->left);
        node->printData();
        inorder(node->right);
    }
}

void BST::printDataHelper(const Node* node) const {
    if (node != nullptr) {
        printDataHelper(node->left);
        node->printData();
        printDataHelper(node->right);
    }
}

void BST::insert(const std::string& data) {
    root = insert(root, data);
}

bool BST::search(const std::string& data) {
    Node* node = search(root, data);
    return node != nullptr;
}

void BST::inorder() {
    inorder(root);
    std::cout << "\n";
}

void BST::printData() const {
    printDataHelper(root);
    std::cout << "\n";
}

Node* BST::findSmallestHelper(Node* node) {
    if (node == nullptr || node->left == nullptr) {
        return node;
    }
    return findSmallestHelper(node->left);
}

Node* BST::findLargestHelper(Node* node) {
    if (node == nullptr || node->right == nullptr) {
        return node;
    }
    return findLargestHelper(node->right);
}

Node& BST::findSmallest() {
    Node* smallest = findSmallestHelper(root);
    if (smallest == nullptr) {
        std::cerr << "Tree is empty.\n";
        exit(EXIT_FAILURE);
    }
    return *smallest;
}

Node& BST::findLargest() {
    Node* largest = findLargestHelper(root);
    if (largest == nullptr) {
        std::cerr << "Tree is empty.\n";
        exit(EXIT_FAILURE);
    }
    return *largest;
}
