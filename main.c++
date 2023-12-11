#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <boost/tokenizer.hpp>

using namespace std;

template <typename data_t>
class Node {
public:
    data_t data; // data of any type
    Node* left; // pointer to left child
    Node* right; // pointer to right child

    // constructor
    Node(data_t d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }

    // virtual function to print the data
    virtual void printData() const {
        std::cout << data << " ";
    }
};

template <typename data_t>
class BST {
private:
    Node<data_t>* root; // pointer to root node

    // helper function to insert a node recursively
    Node<data_t>* insert(Node<data_t>* node, data_t data) {
        if (node == nullptr) {
            // create a new node with data
            node = new Node<data_t>(data);
        } else if (data < node->data) {
            // insert in the left subtree
            node->left = insert(node->left, data);
        } else if (data > node->data) {
            // insert in the right subtree
            node->right = insert(node->right, data);
        }
        // return the updated node
        return node;
    }

    // helper function to search for a node recursively
    Node<data_t>* search(Node<data_t>* node, data_t data) {
        if (node == nullptr || node->data == data) {
            // return the node if found or not found
            return node;
        } else if (data < node->data) {
            // search in the left subtree
            return search(node->left, data);
        } else {
            // search in the right subtree
            return search(node->right, data);
        }
    }

    // helper function to traverse the tree in order recursively
    void inorder(Node<data_t>* node) {
        if (node != nullptr) {
            // visit the left subtree
            inorder(node->left);
            // print the node data
            node->printData();
            // visit the right subtree
            inorder(node->right);
        }
    }

    // Helper function to print data of any type
    void printDataHelper(const Node<data_t>* node) const {
        if (node != nullptr) {
            // visit the left subtree
            printDataHelper(node->left);
            // print the node data
            node->printData();
            // visit the right subtree
            printDataHelper(node->right);
        }
    }
    // Helper function to find the smallest node in the tree
    Node<data_t>* findSmallestHelper(Node<data_t>* node) {
        if (node == nullptr || node->left == nullptr) {
            return node;
        }
        return findSmallestHelper(node->left);
    }

    // Helper function to find the largest node in the tree
    Node<data_t>* findLargestHelper(Node<data_t>* node) {
        if (node == nullptr || node->right == nullptr) {
            return node;
        }
        return findLargestHelper(node->right);
    }
public:
    // constructor
    BST() {
        root = nullptr;
    }

    // insert a data into the tree
    void insert(data_t data) {
        root = insert(root, data);
    }

    // search for a data in the tree
    bool search(data_t data) {
        Node<data_t>* node = search(root, data);
        // return true if found, false otherwise
        return node != nullptr;
    }

    // traverse the tree in order and print the data
    void inorder() {
        inorder(root);
        std::cout << "\n";
    }

    // virtual function to print the data
    virtual void printData() const {
        printDataHelper(root);
        std::cout << "\n";
    }

    // Function to find the smallest node in the tree
    Node<data_t>& findSmallest() {
        Node<data_t>* smallest = findSmallestHelper(root);
        if (smallest == nullptr) {
            cerr << "Tree is empty.\n";
            exit(EXIT_FAILURE);
        }
        return *smallest;
    }

    // Function to find the largest node in the tree
    Node<data_t>& findLargest() {
        Node<data_t>* largest = findLargestHelper(root);
        if (largest == nullptr) {
            cerr << "Tree is empty.\n";
            exit(EXIT_FAILURE);
        }
        return *largest;
    }
};

class TransactionNode : public Node<string> {
private:
    int mUnits;

public:
    TransactionNode(string data, int units) : Node<string>(data), mUnits(units) {}

    int getUnits() const {
        return mUnits;
    }

    void printData() const override {
        cout << "Type: " << data << ", Units: " << mUnits << endl;
    }
};

class DataAnalysis {
private:
    BST<string> mTreeSold;        // Use base class type
    BST<string> mTreePurchased;   // Use base class type
    ifstream mCsvStream;

    void openFile() {
        mCsvStream.open("data.csv");
        if (!mCsvStream.is_open()) {
            cerr << "Error opening the file." << endl;
            exit(EXIT_FAILURE);
        }
    }

    void readLineAndSplit() {
    string line;
    int lineNumber = 0;

    // Skip the first line (header)
    if (getline(mCsvStream, line)) {
        lineNumber++;
    }

    while (getline(mCsvStream, line)) {
        lineNumber++;

        try {
            // Split the line into units, type, and transaction fields
            boost::tokenizer<> tokenizer(line);
            auto it = tokenizer.begin();
            int units = stoi(*it++);
            string type = *it++;
            string transaction = *it;

            // Call the function below to insert into the appropriate tree
            processTransaction(type, units, transaction);
        } catch (const std::invalid_argument& e) {
            cerr << "Error converting units to integer in line " << lineNumber << ": " << e.what() << endl;
            // Optionally, handle the error or exit the program
        }
    }
}



    void processTransaction(const string& type, int units, const string& transaction) {
    // Check if stoi conversion is successful
    try {
        TransactionNode node(type, units);

        // Insert into the appropriate tree based on the transaction
        if (transaction == "Sold") {
            mTreeSold.insert(type);
        } else if (transaction == "Purchased") {
            mTreePurchased.insert(type);
        }
    } catch (const std::invalid_argument& e) {
        cerr << "Error converting units to integer: " << e.what() << endl;
        // Handle the error or exit as needed
    }
}


    void displayTrees() {
        cout << "Products Sold:\n";
        mTreeSold.inorder();
        cout << "\nProducts Purchased:\n";
        mTreePurchased.inorder();
    }

    void displayTrends() {
        cout << "Least Sold: ";
        mTreeSold.findSmallest().printData();
        cout << "Most Sold: ";
        mTreeSold.findLargest().printData();

        cout << "Least Purchased: ";
        mTreePurchased.findSmallest().printData();
        cout << "Most Purchased: ";
        mTreePurchased.findLargest().printData();
    }

public:
    DataAnalysis() {
        openFile();
    }

    ~DataAnalysis() {
        mCsvStream.close();
    }

    void runAnalysis() {
        readLineAndSplit();
        displayTrees();
        displayTrends();
    }
};

int main() {
    DataAnalysis obj;
    obj.runAnalysis();

    return 0;
}
