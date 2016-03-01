#include <iostream>

using namespace std;

struct BinaryTreeNode
{
    int m_val;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};

BinaryTreeNode* ConstructCore(int* startpreorder,int* endpreorder,int* startinorder,int* endinorder);

BinaryTreeNode* Construct(int* preorder,int* inorder,int length)
{
    if (preorder!=NULL && inorder!=NULL && length>0)
        return ConstructCore(preorder,preorder+length-1,inorder,inorder+length-1);
    return NULL;
}

BinaryTreeNode* ConstructCore(int* startpreorder,int* endpreorder,int* startinorder,int* endinorder)
{
    BinaryTreeNode* root = new BinaryTreeNode;
    root->m_pLeft = root->m_pRight = NULL;
    root->m_val = startpreorder[0];

    if (startpreorder == endpreorder)
    {
        if (startinorder == endinorder && *startpreorder == *startinorder)
            return root;
        else
            return NULL;
    }

    int* p = startinorder;
    while (p<=endinorder && *p != root->m_val)
        p++;
    if (p>endinorder || *p!=root->m_val)
        return NULL;

    if (p > startinorder)
        root->m_pLeft = ConstructCore(startpreorder+1,startpreorder+(p-startinorder),startinorder,p-1);
    if (p < endinorder)
        root->m_pRight =  ConstructCore(endpreorder-p+startinorder,endpreorder,p+1,endinorder);
}

int main()
{
    return 0;
}
