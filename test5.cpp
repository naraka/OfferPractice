
//还可以递归实现逆序输出
#include <iostream>
#include <stack>

using namespace std;

struct LNode
{
    int m_val;
    LNode* m_link;
};

void PrintListReversingly_Iteratively(LNode* pHead)
{
    LNode* p = pHead->m_link;
    stack<LNode*> nodes;

    while (p)
    {
        nodes.push(p);
        p = p->m_link;
    }

    while (!nodes.empty())
    {
        p = nodes.top();
        nodes.pop();
        cout << p->m_val << ' ';
    }
    cout << '\n';
}
int main()
{

    return 0;
}
