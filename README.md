# BST Data Analysis

This repository contains C++ code for a Binary Search Tree (BST) data analysis program. The program reads data from a CSV file, performs analysis, and displays the results.

## Getting Started

### Prerequisites

- g++ compiler
- Boost C++ Libraries

### Installation

* Clone the repository:

```bash
git clone https://github.com/stephenWanjala/bstDataAnalysis.git
cd bst-data-analysis
```
* Compile the code 
```bash
make
```

#### Usage

Run the compiled program:

```bash
./bstc
```
The program will read data from a file named data.csv in the same directory. Ensure the CSV file is formatted correctly.
Data Format

The CSV file should have the following format:

```bash

units,type,transaction
10,Galaxys21,Sold
5,PlayStation5,Purchased
.....
```


### Features

* Binary Search Tree implementation
*  Data analysis based on transactions (Sold/Purchased)
 *   Display of products sold and purchased
*  Identification of least and most sold/purchased products
