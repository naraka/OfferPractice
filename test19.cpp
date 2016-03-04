#include <iostream>
#include <cstring>

using namespace std;

struct BinaryTreeNode
{
    int m_val;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};

void MirrorRecursively(BinaryTreeNode* root)
{
    if (root == NULL)
        return;

    BinaryTreeNode* temp = root->m_pLeft;
    root->m_pLeft = root->m_pRight;
    root->m_pRight = temp;

    MirrorRecursively(root->m_pLeft);
    MirrorRecursively(root->m_pRight);
}
int main()
{

    return 0;
}
