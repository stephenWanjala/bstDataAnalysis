// DataAnalysis.h
#ifndef DATA_ANALYSIS_H
#define DATA_ANALYSIS_H

#include "BST.h"
#include <fstream>
#include <boost/tokenizer.hpp>

class DataAnalysis {
private:
    BST mTreeSold;
    BST mTreePurchased;
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

#endif // DATA_ANALYSIS_H
