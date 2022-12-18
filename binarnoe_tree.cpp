#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
    BinaryTree* binaryTree = new BinaryTree();
    binaryTree->add(0, 3);
    binaryTree->add(5, 2);

    binaryTree->remove(2);

    std::cout << "Hello World!\n";
