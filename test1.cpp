#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>

using namespace std;

class CMyString
{
public:
    CMyString(char* pData = NULL);
    CMyString(const CMyString& str);
    CMyString& operator =(const CMyString& str);
    ~CMyString(void);
private:
    char* m_pData;
};

CMyString::CMyString(char* pData)
{
    m_pData = pData;
}

CMyString::CMyString(const CMyString& str)
{
    m_pData = new char[strlen(str.m_pData)+1];
    strcpy(m_pData,str.m_pData);
}
CMyString::~CMyString(void)
{
    if (m_pData)
    {
        delete [] m_pData;
    }
}

CMyString& CMyString::operator =(const CMyString& str)
{
    if (this != &str)
    {
        CMyString temp(str);
        char* pTemp = temp.m_pData;
        temp.m_pData = m_pData;
        m_pData = pTemp;
    }
    return *this;
}

int main()
{
    CMyString str1 = "Hello World!";
    CMyString str2 = str1;
    str1 = str1;
    CMyString str3,str4;
    str4 = str3 = str1;
    return 0;
}
