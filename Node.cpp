#include "Node.h"
#include <string>
# include <iostream>
template <typename data_t>
Node<data_t>::Node(data_t d) : data(d), left(nullptr), right(nullptr) {}

template <typename data_t>
void Node<data_t>::printData() const {
    std::cout << data << " ";
}

// Explicit instantiation for necessary types
template class Node<int>;
template class Node<std::string>;
