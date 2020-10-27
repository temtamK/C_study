#include <iostream>
#include <list>

using namespace std;

//20 이상 30 미만이면 true
template <typename T>
class Is_Over20_Under30 : public std::unary_function<T, bool>
{
public:
    bool operator()(T &val)
    {
        return (val >= 20 && val < 30);
    }
};

int main()
{
    list<int> list1;

    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(25);
    list1.push_back(30);
    list1.push_back(34);

    //20 이상 30 미만은 삭제
    list1.remove_if(Is_Over20_Under30<int>());

    list<int>::iterator iterEnd = list1.end();
    for (list<int>::iterator iterPos = list1.begin();
         iterPos != iterEnd;
         ++iterPos)
    {
        cout << "list 1 : " << *iterPos << endl;
    }

    return 0;
}