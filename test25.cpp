#include <iostream>
#include <vector>

using namespace std;

struct BinaryTreeNode
{
    int m_val;
    BinaryTreeNode* m_Left;
    BinaryTreeNode* m_Right;
};

void FindPath(BinaryTreeNode* pNode,int expectedSum,
              vector<int>& path,int& currentSum)
{
    currentSum += pNode->m_val;
    path.push_back(pNode->m_val);

    bool isLeaf = (pNode->m_Left == NULL) && (pNode->m_Right == NULL);
    if (isLeaf && currentSum == expectedSum)
    {
        vector<int>::iterator iter = path.begin();

        for (;iter != path.end();iter++)
            cout << *iter;

        cout << "\n";
    }



    if (pNode->m_Left != NULL)
        FindPath(pNode->m_Left,expectedSum,path,currentSum);
    if (pNode->m_Right != NULL)
        FindPath(pNode->m_Right,expectedSum,path,currentSum);

    path.pop_back();
    currentSum -= pNode->m_val;
}

void FindPath(BinaryTreeNode* root,int expectedSum)
{
    if (root == NULL)
        return;

    vector<int> path;
    int currentSum = 0;
    FindPath(root,expectedSum,path,currentSum);
}
int main()
{
    return 0;
}
