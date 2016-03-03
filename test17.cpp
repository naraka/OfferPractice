#include <iostream>
#include <cstring>

using namespace std;

struct ListNode
{
    int m_val;
    ListNode* m_pNext;
};

ListNode* Merge(ListNode* pHeadA,ListNode* pHeadB)
{
    if (pHeadA == NULL)
        return pHeadB;

    if (pHeadB == NULL)
        return NULL;

    ListNode* pHeadM = NULL;

    if (pHeadA->m_val <= pHeadB->m_val)
    {
        pHeadM = pHeadA;
        pHeadM->m_pNext = Merge(pHeadA->m_pNext,pHeadB);
    }
    else
    {
        pHeadM = pHeadB;
        pHeadM->m_pNext = Merge(pHeadA,pHeadB->m_pNext);
    }

    return pHeadM;
}
int main()
{

    return 0;
}
