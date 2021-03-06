
// Output:
// right heavy 10
// We have to do right rotate30
// We have to do left rotate10
// 10 ABC
// 20 ABC
// 30 ABC
//Function to make the UDP message in the text file_DATASIZE_STR.txt
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
class AVLTree
{
public:
    class AVLNode
    {
    public:
        int height;
        int seq_number;
        string packetData;
        AVLNode* right_child;
        AVLNode* left_child;

        AVLNode(int seq,string pakData)
        {
            seq_number = seq;
            packetData = pakData;
            right_child = NULL;
            left_child = NULL;
        }
    };
    AVLNode* root = NULL;
    void createAVLTree(int seq,string pakData)
    {
        root = createAVLTree(seq,pakData,root);
    }
private:
    AVLNode* createAVLTree(int seq,string pakData,AVLNode* root)
    {
        if(root == NULL)
        {
            return new AVLNode(seq,pakData);
        }
        if(root->seq_number > seq)
        {
            root->left_child = createAVLTree(seq,pakData,root->left_child);
        }
        else
        {
            root->right_child = createAVLTree(seq,pakData,root->right_child);
        }
        root->height = std::max(height(root->left_child),height(root->right_child))+1;
        
        root = balance(root);

        return root;
    }
    
    AVLNode* balance(AVLNode* root)
    {
        if(isLeftHeavy(root))
        {
            cout << "left heavy " << root->seq_number << endl;
            if((balanceFactor(root->left_child))<0)
            {
                cout << "We have to left rotate" << root->left_child->seq_number << endl;
                root->left_child = rotateLeft(root->left_child);
            }
            cout << "We have to right rotate" << root->seq_number << endl;
            return rotateRight(root);
        }
        else if(isRightHeavy(root))
        {
            cout << "right heavy " << root->seq_number << endl;
           if((balanceFactor(root->right_child))>0)
            {
                cout << "We have to do right rotate" << root->right_child->seq_number << endl;
                root->right_child = rotateRight(root->right_child);
            }
            cout << "We have to do left rotate" << root->seq_number << endl;
            return rotateLeft(root);
        }
        return root;
    }
    
     AVLNode* rotateLeft(AVLNode* root) {
         AVLNode* newRoot = root->right_child;
        root->right_child = newRoot->left_child;
        newRoot->left_child = root;

         root->height = std::max(height(root->left_child),height(root->right_child))+1;
         newRoot->height = std::max(height(root->left_child),height(root->right_child))+1;

        return newRoot;
      }
    AVLNode* rotateRight(AVLNode* root) {
        AVLNode* newRoot = root->left_child;
       root->left_child = newRoot->right_child;
       newRoot->right_child = root;

        root->height = std::max(height(root->left_child),height(root->right_child))+1;
        newRoot->height = std::max(height(root->left_child),height(root->right_child))+1;

       return newRoot;
     }
    
   bool isLeftHeavy(AVLNode* node)
    {
        return (balanceFactor(node) > 1);
    }
    bool isRightHeavy(AVLNode* node)
    {
        return (balanceFactor(node) < -1);
    }
    int height(AVLNode* node)
    {
        return (node == NULL)? -1 :(node->height);
    }
    int balanceFactor(AVLNode* node)
    {
        return (node == NULL)?0:(height(node->left_child) - height(node->right_child));
    }
public:
void inOrderTraversal()
    {
        inOrderTraversal(root);
    }
private:
void inOrderTraversal(AVLNode* root)
    {
        if(root == NULL) return;
        inOrderTraversal(root->left_child);
        cout<< root->seq_number << " "<< root->packetData << endl;
        inOrderTraversal(root->right_child);
    }
};

int main () {
    AVLTree *avlTree = new AVLTree();
    avlTree->createAVLTree(10,"ABC");
    avlTree->createAVLTree(30,"ABC");
    avlTree->createAVLTree(20,"ABC");
    avlTree->inOrderTraversal();
    return 0;
}
