#include <iostream>
#include <deque>

using namespace std;

struct BinaryTreeNode
{
    int m_val;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};

void PrintFromTopToBottom(BinaryTreeNode* root)
{
    if (root == NULL)
        return;

    deque<BinaryTreeNode*> que;
    que.push_back(root);
    while (que.size() > 0)
    {
        BinaryTreeNode* temp = que.front();
        que.pop_front();
        cout << temp->m_val;

        if (temp->m_pLeft)
            que.push_back(temp->m_pLeft);
        if (temp->m_pRight)
            que.push_back(temp->m_pRight);
    }
}
int main()
{

    return 0;
}
