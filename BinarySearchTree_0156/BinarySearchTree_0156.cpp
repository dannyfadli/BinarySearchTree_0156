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
            return;                 //exit
        }

        if (element < parent->info)     //If the value in the data field pf the new node is less than that of the
        {
            parent->leftchild = newNode;    //Make the left child of the parent point to the new node
        }
        else if (element > parent->info)    //If the value in the data field pf the new node is greater than that of the
        {
            parent->rightchild = newNode;   //Make the right child of the parent point to the new node
        }

    }

    void search(string element, Node*& parent, Node*& currentNode)
    {
        //This fuction searches the currentNode of the speciafied Node as well as the current Node of its parent
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }
    void inorder(Node* ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr)
        {
            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
    }

    void preorder(Node* ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr)
        {
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }

    }
    void postorder(Node* ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr)
        {
            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout << ptr->info << " ";
        }

    }
};

    


int main()
{
    
}

