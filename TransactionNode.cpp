// TransactionNode.cpp
#include "TransactionNode.h"

TransactionNode::TransactionNode(const std::string& data, int units) : Node(data), mUnits(units) {}

int TransactionNode::getUnits() const {
    return mUnits;
}

void TransactionNode::printData() const {
    std::cout << "Type: " << data << ", Units: " << mUnits << std::endl;
}
