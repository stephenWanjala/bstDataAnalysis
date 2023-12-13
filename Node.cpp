// Node.cpp
#include "Node.hpp"

Node::Node(const std::string& d) : data(d), left(nullptr), right(nullptr) {}

void Node::printData() const {
    std::cout << data << " ";
}
