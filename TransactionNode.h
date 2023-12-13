// TransactionNode.h
#ifndef TRANSACTION_NODE_H
#define TRANSACTION_NODE_H

#include "Node.hpp"

class TransactionNode : public Node {
private:
    int mUnits;

public:
    TransactionNode(const std::string& data, int units);

    int getUnits() const;

    void printData() const override;
};

#endif // TRANSACTION_NODE_H
