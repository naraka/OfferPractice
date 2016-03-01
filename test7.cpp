#include <iostream>
#include <stack>

using namespace std;

template <typename T>
class CQueue
{
public:
    CQueue(void);
    ~CQueue(void);

    void appendTail(const T& node);
    T deleteHead(void);
private:
    stack<T> stack1;
    stack<T> stack2;
};

template <typename T>
void CQueue<T>::appendTail(const T& node)
{
    stack1.push(node);
}

template <typename T>
T CQueue<T>:: deleteHead()
{
    if (stack2.empty())
    {
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }
    T t = stack2.top();
    T temp = stack2.top();
    stack2.pop();
    return temp;

}
int main()
{

    return 0;
}
#include <iostream>
#include <stack>

using namespace std;

template <typename T>
class CQueue
{
public:
    CQueue(void);
    ~CQueue(void);

    void appendTail(const T& node);
    T deleteHead(void);
private:
    stack<T> stack1;
    stack<T> stack2;
};

template <typename T>
void CQueue<T>::appendTail(const T& node)
{
    stack1.push(node);
}

template <typename T>
T CQueue<T>:: deleteHead()
{
    if (stack2.empty())
    {
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }
    T t = stack2.top();
    T temp = stack2.top();
    stack2.pop();
    return temp;

}
int main()
{

    return 0;
}
