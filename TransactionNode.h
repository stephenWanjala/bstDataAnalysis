#include "Node.h"

class TransactionNode : public Node<string> {
private:
    int mUnits;

public:
    TransactionNode(string data, int units);
    int getUnits() const;
    void printData() const override;
};