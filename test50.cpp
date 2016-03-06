#include <iostream>
#include <list>

using namespace std;

bool GetNodePath(TreeNode* pRoot,TreeNode* pNode,list<TreeNode*>& path)
{
    if (pRoot == pNode)
        return true;

    bool found = false;
    path.push_back(pRoot);
    list<TreeNode*>::iterator iter = pRoot->m_vChildren.begin();

    while (!found && iter < pRoot->m_vChildren.end())
    {
        found = GetNodePath(*iter,pNode,path);
        iter++;
    }

    if (!found)
        path.pop_back();
    return found;
}

TreeNode* GetLastCommonNode(const list<TreeNode*>& path1,const list<TreeNode*>& path2)
{
    list<TreeNode*>::const_iterator iter1 = path1.begin();
    list<TreeNode*>::const_iterator iter2 = path2.begin();

    TreeNode* pLast = NULL;
    while (iter1!=path1.end() && iter2!=path2.end())
    {
        if (*iter1 == *iter2)
            pLast = iter1;

        iter1++;
        iter2++;
    }

    return *pLast;
}

TreeNode* GetLastCommonParent(TreeNode* pRoot,TreeNode* pNode1,TreeNode* pNode2)
{
    if (pRoot == NULL || pNode1 == NULL || pNode2 == NULL)
        return NULL;
    
    list<TreeNode*> path1 = NULL;
    list<TreeNode*> path2 = NULL;
    
    GetNodePath(pNode1,path1);
    GetNodePath(pNode2,path2);
    
    TreeNode* parent = NULL;
    if (path1!=NULL && path2!=NULL)
        parent = GetLastCommonNode(path1,path2);
    
    return parent;
}
int main()
{
    return 0;
}