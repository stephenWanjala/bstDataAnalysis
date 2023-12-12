#include "TransactionNode.h"
#include <iostream>

using namespace std;

TransactionNode::TransactionNode(string data, int units) : Node<string>(data), mUnits(units) {}

int TransactionNode::getUnits() const {
    return mUnits;
}

void TransactionNode::printData() const {
    cout << "Type: " << data << ", Units: " << mUnits << endl;
}