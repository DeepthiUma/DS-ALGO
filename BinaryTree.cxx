// Binary tree
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<cstdio>
using namespace std;

class BinaryTree
{
private:
    class Node
    {
        public:
            int item;
            Node *leftChild;
            Node *rightChild;
            Node(int N)
            {
                item = N;
                leftChild = NULL;
                rightChild = NULL;
            }
    };
Node *root;
public:
BinaryTree()
{
    root = NULL;
}
public:
Node* create(int N)
{
    Node* tmp = new Node(N);
    return tmp;
}
void insert(int value)
{
    Node *current = NULL;
    Node *tmp = create(value);
    if(root == NULL)
        root = tmp;
    
    current = root;
    while(1)
    {
        if(current->item >value)
        {
            if(current->leftChild == NULL)
            {
                current->leftChild = create(value);
                break;    
            }
            current = current->leftChild;
        }
        else
        {
            if(current->rightChild == NULL)
            {
                current->rightChild = create(value);
                break;    
            }
            current = current->rightChild;
        }
    }
}
bool find(int value)
{
    Node* current = root;
    while(current!= NULL)
    {
        if(current->item > value)
            current = current->leftChild;
        else if (current->item < value)
            current = current->rightChild;
        else if(current->item == value)
            return true;
    }
    return false;
}
void print()
{
    
}

};
int main()
{
    BinaryTree *tree = new BinaryTree();
    tree->insert(7);
    tree->insert(4);
    tree->insert(9);
    tree->insert(6);
    tree->insert(1);
    tree->insert(11);
    cout << "FIND: " << tree->find(9) << endl;
    
    return 0;
}
