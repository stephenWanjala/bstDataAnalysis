#include "BST.h"

template <typename data_t>
BST<data_t>::BST() : root(nullptr) {}

template <typename data_t>
void BST<data_t>::insert(data_t data) {
    root = insert(root, data);
}

template <typename data_t>
Node<data_t>* BST<data_t>::insert(Node<data_t>* node, data_t data) {
    if (node == nullptr) {
        return new Node<data_t>(data);
    }

    if (data < node->data) {
        node->left = insert(node->left, data);
    } else if (data > node->data) {
        node->right = insert(node->right, data);
    }

    return node;
}

template <typename data_t>
bool BST<data_t>::search(data_t data) {
    Node<data_t>* node = search(root, data);
    return node != nullptr;
}

template <typename data_t>
Node<data_t>* BST<data_t>::search(Node<data_t>* node, data_t data) {
    if (node == nullptr || node->data == data) {
        return node;
    }

    if (data < node->data) {
        return search(node->left, data);
    } else {
        return search(node->right, data);
    }
}

template <typename data_t>
void BST<data_t>::inorder() {
    inorder(root);
    std::cout << std::endl;
}

template <typename data_t>
void BST<data_t>::inorder(Node<data_t>* node) {
    if (node != nullptr) {
        inorder(node->left);
        node->printData();
        inorder(node->right);
    }
}

template <typename data_t>
void BST<data_t>::printData() const {
    printDataHelper(root);
    std::cout << std::endl;
}

template <typename data_t>
void BST<data_t>::printDataHelper(const Node<data_t>* node) const {
    if (node != nullptr) {
        printDataHelper(node->left);
        node->printData();
        printDataHelper(node->right);
    }
}

template <typename data_t>
Node<data_t>& BST<data_t>::findSmallest() {
    return *findSmallestHelper(root);
}

template <typename data_t>
Node<data_t>* BST<data_t>::findSmallestHelper(Node<data_t>* node) {
    if (node == nullptr || node->left == nullptr) {
        return node;
    }
    return findSmallestHelper(node->left);
}

template <typename data_t>
Node<data_t>& BST<data_t>::findLargest() {
    return *findLargestHelper(root);
}

template <typename data_t>
Node<data_t>* BST<data_t>::findLargestHelper(Node<data_t>* node) {
    if (node == nullptr || node->right == nullptr) {
        return node;
    }
    return findLargestHelper(node->right);
}

// Explicit instantiation for necessary types
template class BST<int>;
template class BST<std::string>;