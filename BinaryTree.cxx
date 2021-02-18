// Binary tree
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<cstdio>
#include <math.h>
using namespace std;

class BinaryTree
{
public:
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
    if(root == NULL)
    {
        root = create(value);
        return;
    }
    
    Node *current = root;
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
void traversePreOrder()
{
    pTraversePreOrder(root);
}
void traverseInOrder()
{
    pTraverseInOrder(root);
}
void traversePostOrder()
{
    pTraversePostOrder(root);
}
private:
int pTraversePreOrder(Node* root)
{
    if(root == NULL) return 0;
    cout << root->item << " ";
    pTraversePreOrder(root->leftChild);
    pTraversePreOrder(root->rightChild);
}
void pTraverseInOrder(Node* root)
{
    if(root == NULL) return;
    pTraverseInOrder(root->leftChild);
    cout << root->item << " ";
    pTraverseInOrder(root->rightChild);
}
void pTraversePostOrder(Node* root)
{
    if(root == NULL) return;
    pTraversePostOrder(root->leftChild);
    pTraversePostOrder(root->rightChild);
    cout << root->item << " ";
}
public:
int minValueInTree()
{
    return minValueInTree(root);
}
private:
int min(int l,int r)
{
    if(l<r) return l;
    else return r;
    
}
int minValueInTree(Node* root)
{
    if (root == NULL) return -1;
    if(root->leftChild == NULL && root->rightChild == NULL) return root->item;
    int left = minValueInTree(root->leftChild);
    int right = minValueInTree(root->leftChild);
    return min(left,right);
}

private:
bool equals(Node* first, Node* second)
{
    if((first == NULL) && (second ==NULL)) return true;
    
    if((first!=NULL) && (second!=NULL))
    {
        return first->item == second->item 
            && equals(first->leftChild,second->leftChild)
            && equals(first->rightChild,second->rightChild);
    }
}
public:
bool equals(BinaryTree* otherTree)
{
    return equals(root,otherTree->root);
}
private:
bool isBinarySearchTree(Node* root, int min,int max)
{
    if(root == NULL) return true;
    
    if((root->item < min) || (root->item > max)) return false;
    
    return (isBinarySearchTree(root->leftChild,min,root->item-1) && 
            isBinarySearchTree(root->rightChild,root->item+1,max));
    
}
public:
bool isBinarySearchTree()
{
    return isBinarySearchTree(root, -100, 100);
}
void swapRoot()
{
    Node *tmp = root->leftChild;
    root->rightChild = root->leftChild;
    root->leftChild = tmp;
}
};
int main()
{
    BinaryTree *tree = new BinaryTree();
    tree->insert(7);
    tree->insert(4);
    tree->insert(9);
    tree->insert(1);
    tree->insert(6);
    tree->insert(8);
    tree->insert(10);
    cout << "FIND: " << tree->find(9) << endl;
    cout << "Traversal - PreOrder: ";
    tree->traversePreOrder();
    cout << endl;
    cout << "Traversal - InOrder: ";
    tree->traverseInOrder();
    cout << endl;
    cout << "Traversal - PostOrder: " ;
    tree->traversePostOrder();
    cout << endl;
    cout << "Min: " << tree->minValueInTree();
    BinaryTree *tree2 = new BinaryTree();
    tree2->insert(7);
    tree2->insert(4);
    tree2->insert(9);
    tree2->insert(1);
    tree2->insert(6);
    tree2->insert(8);
    tree2->insert(10);
    cout << endl;
    cout << "compare two tree: " << tree->equals(tree2) << endl;
    cout << "isBinarySearchTree: " << tree->isBinarySearchTree() << endl;
    tree->swapRoot();
    cout << "isBinarySearchTree: " << tree->isBinarySearchTree() << endl;
    return 0;
}
