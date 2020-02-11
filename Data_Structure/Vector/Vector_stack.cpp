#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack
{
public:
    Stack() { Clear(); }

    //저장 방식 설정
    void SetInOutType(bool bLIFO) { m_bLIFO = bLIFO; }

    //초기화
    void Clear()
    {
        if (false == m_Datas.empty())
            m_Datas.clear();
    }

    //스택에 저장된 개수
    int Count() { return static_cast<int>(m_Datas.size()); }

    //저장된 데이터가 없는가?
    bool IsEmpty() { return m_Datas.empty(); }

    //데이터를 저장한다.
    void push(T data)
    {
        m_Datas.push_back(data);
    }

    //스택에서 빼낸다.
    bool pop(T *data)
    {
        if (IsEmpty())
        {
            return false;
        }

        if (m_bLIFO)
        {
            memcpy(data, &m_Datas.back(), sizeof(T));
            m_Datas.pop_back();
        }
        else
        {
            memcpy(data, &m_Datas.front(), sizeof(T));
            m_Datas.front() = std::move(m_Datas.back());
            m_Datas.pop_back();
        }

        return true;
    }

private:
    vector<T> m_Datas;
    bool m_bLIFO;
};

int main()
{
    Stack<int> Int_Stack;

    //LIFO로 설정
    Int_Stack.SetInOutType(true);

    Int_Stack.push(10);
    Int_Stack.push(20);
    Int_Stack.push(30);

    int Value = 0;
    Int_Stack.pop(&Value);
    cout << "LIFO pop : " << Value << endl
         << endl;

    Int_Stack.Clear();

    //FIFO로 설정
    Int_Stack.SetInOutType(false);

    Int_Stack.push(10);
    Int_Stack.push(20);
    Int_Stack.push(30);

    Int_Stack.pop(&Value);
    cout << "FIFO pop : " << Value << endl
         << endl;

    return 0;
}