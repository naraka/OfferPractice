#include <iostream>
#include <cstring>

using namespace std;

struct ListNode
{
    int m_val;
    ListNode* m_pNext;
};

ListNode* ReverseList(ListNode* pHead)
{
    ListNode* pReversedHead = NULL;
    ListNode* pNode = pHead;
    ListNode* pPre = NULL;

    while (pNode != NULL)
    {
        ListNode* pNext = pNode->m_pNext;

        if (pNext == NULL)
        {
            pReversedHead = pNode;
        }

        pNode->m_pNext = pPre;
        pPre = pNode;
        pNode = pNext;
    }

    return pReversedHead;
}
int main()
{

    return 0;
}