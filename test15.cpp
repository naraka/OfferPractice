#include <iostream>
#include <cstring>

using namespace std;

struct ListNode
{
    int m_val;
    ListNode* m_pNext;
};

ListNode* FindKthToTail(ListNode* pHead,unsigned int k)
{
    if (pHead == NULL
        || k == 0)
        return 0;

    ListNode* pAHead = pHead;
    ListNode* pBehind = NULL;

    for (int i = 0;i < k-1;i++)
    {
        pAHead = pAHead->m_pNext;

        if (pAHead == NULL)
            return NULL;
    }

    pBehind = pHead;
    while(pAHead->m_pNext)
    {
        pAHead = pAHead->m_pNext;
        pBehind = pBehind->m_pNext;
    }

    return pBehind;
}
int main()
{

    return 0;
}
