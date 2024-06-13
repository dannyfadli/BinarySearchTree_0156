#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    //Constructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }

};

class BinaryTree
{
public:
    Node* ROOT;

    BinaryTree()
    {
        ROOT = nullptr;     //Initializing root to null
    }

    void insert(string element)     //Insert a node in the binary search tree
    {
        Node* newNode = new Node(element, nullptr, nullptr);        //Allocate memory for the new code
        newNode->info = element;    //Assign value to the data field of the new code
        newNode->leftchild = nullptr;   //Make the left child of the new code point to null
        newNode->rightchild = nullptr;  //Make the right child of the new code point to null

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode);       //Locate the new node will be the parent of the node to be insert

        if (parent == nullptr)      //if the parent is null (tree is empty)
        {
            ROOT = newNode;         //Mark the new node as ROOT
        }
    }
};

    


int main()
{
    
}

