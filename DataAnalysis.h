#include "BST.h"
#include <fstream>
#include <string>

class DataAnalysis {
private:
    BST<std::string> mTreeSold;
    BST<std::string> mTreePurchased;
    std::ifstream mCsvStream;

    void openFile();
    void readLineAndSplit();
    void processTransaction(const std::string& type, int units, const std::string& transaction);
    void displayTrees();
    void displayTrends();

public:
    DataAnalysis();
    ~DataAnalysis();
    void runAnalysis();
};