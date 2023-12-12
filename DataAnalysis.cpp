#include "DataAnalysis.h"
#include <iostream>
#include "Node.h"
#include <sstream>

DataAnalysis::DataAnalysis() {
    openFile();
}

DataAnalysis::~DataAnalysis() {
    mCsvStream.close();
}

void DataAnalysis::openFile() {
    mCsvStream.open("data.csv");
}

void DataAnalysis::readLineAndSplit() {
    std::string line, type, transaction;
    int units;

    while (getline(mCsvStream, line)) {
        std::stringstream ss(line);
        getline(ss, type, ',');
        ss >> units;
        getline(ss, transaction, ',');

        processTransaction(type, units, transaction);
    }
}

void DataAnalysis::processTransaction(const std::string& type, int units, const std::string& transaction) {
    if (type == "Sold") {
        mTreeSold.insert(transaction);
    } else if (type == "Purchased") {
        mTreePurchased.insert(transaction);
    }
}

void DataAnalysis::displayTrees() {
    mTreeSold.inorder();
    mTreePurchased.inorder();
}

void DataAnalysis::displayTrends() {
    std::cout << "Least sold: " << mTreeSold.findSmallest().data << std::endl;
    std::cout << "Most sold: " << mTreeSold.findLargest().data << std::endl;
    std::cout << "Least purchased: " << mTreePurchased.findSmallest().data << std::endl;
    std::cout << "Most purchased: " << mTreePurchased.findLargest().data << std::endl;
}

void DataAnalysis::runAnalysis() {
    readLineAndSplit();
    displayTrees();
    displayTrends();
}