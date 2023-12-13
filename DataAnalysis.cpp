// DataAnalysis.cpp
#include "DataAnalysis.h"

#include "TransactionNode.h"

DataAnalysis::DataAnalysis() {
    openFile();
}

DataAnalysis::~DataAnalysis() {
    mCsvStream.close();
}

void DataAnalysis::openFile() {
    mCsvStream.open("data.csv");
    if (!mCsvStream.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        exit(EXIT_FAILURE);
    }
}

void DataAnalysis::readLineAndSplit() {
    std::string line;
    int lineNumber = 0;

    if (getline(mCsvStream, line)) {
        lineNumber++;
    }

    while (getline(mCsvStream, line)) {
        lineNumber++;

        try {
            boost::tokenizer<> tokenizer(line);
            auto it = tokenizer.begin();
            int units = stoi(*it++);
            std::string type = *it++;
            std::string transaction = *it;

            processTransaction(type, units, transaction);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error converting units to integer in line " << lineNumber << ": " << e.what() << std::endl;
        }
    }
}

void DataAnalysis::processTransaction(const std::string& type, int units, const std::string& transaction) {
    try {
        TransactionNode node(type, units);

        if (transaction == "Sold") {
            mTreeSold.insert(type);
        } else if (transaction == "Purchased") {
            mTreePurchased.insert(type);
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error converting units to integer: " << e.what() << std::endl;
    }
}

void DataAnalysis::displayTrees() {
    std::cout << "Products Sold:\n";
    mTreeSold.inorder();
    std::cout << "\nProducts Purchased:\n";
    mTreePurchased.inorder();
}

void DataAnalysis::displayTrends() {
    std::cout << "Least Sold: ";
    mTreeSold.findSmallest().printData();
    std::cout << "Most Sold: ";
    mTreeSold.findLargest().printData();

    std::cout << "Least Purchased: ";
    mTreePurchased.findSmallest().printData();
    std::cout << "Most Purchased: ";
    mTreePurchased.findLargest().printData();
}

void DataAnalysis::runAnalysis() {
    readLineAndSplit();
    displayTrees();
    displayTrends();
}
