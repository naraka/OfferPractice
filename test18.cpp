#include <iostream>
#include <cstring>

using namespace std;

struct BinaryTreeNode
{
    int m_val;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};

bool DoesTreeHasTree2(BinaryTreeNode* root1,BinaryTreeNode* root2)
{
    if (root2 == NULL)
        return true;

    if (root1 == NULL)
        return false;

    if (root1->m_val != root2->m_val)
        return false;

    return DoesTreeHasTree2(root1->m_pLeft,root2->m_pLeft)&&DoesTreeHasTree2(root1->m_pRight,root2->m_pRight);
}

bool HasSubTree(BinaryTreeNode* root1,BinaryTreeNode* root2)
{
    bool result = false;

    if (root1!=NULL && root2!=NULL)
    {
        if (root1->m_val == root2->m_val)
        {
            result = DoesTreeHasTree2(root1,root2);
        }
        if (!result)
            result = HasSubTree(root1->m_pLeft,root2);
        if (!result)
            result = HasSubTree(root1->m_pRight,root2);
    }

    return result;
}
int main()
{

    return 0;
}
