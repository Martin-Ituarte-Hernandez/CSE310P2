#include "bts.hpp"

BSTNode * BST::Insert(BSTNode * node, float key)
{
    if(node == NULL)
    {
        node = new BSTNode;
        node->Key = key;
        node->Left = NULL;
        node->Right = NULL;
        node->Parent = NULL;
    } else if(node->Key < key)
    {
        node->Right = Insert(node->Right, key);
        node->Right->Parent = node;
    } else
    {
        node->Left = Insert(node->Left, key);
        node->Left->Parent = node;
    }

    return node;
}

void BST::Insert(float key)
{
    root = Insert(root, key);
}
void BST::Print(BSTNode * node)
{
    if(node == NULL)
        return;
    Print(node->Left);
    std::cout << node->Key << " ";
    Print(node->Right);
}

void BST::Print()
{
    Print(root);
    std::cout << std::endl;
}