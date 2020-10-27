#include <iostream>
#include <string>

using namespace std;

string str;

int minResult(void)
{
    int result = 0;
    string temp = "";
    bool minus = false;
    for (int i = 0; i < str.size(); i++)
    {
        cout << "숫자는" << str[i] << endl;
        cout << "minus 값은" << minus << endl;

        //연산자일 경우
        if (str[i] == '+' || str[i] == '-' || str[i] == '\0')
        {
            if (minus)
            {
                result -= stoi(temp);
            }
            else
            {
                result += stoi(temp);
            }
            temp = ""; // 초기화
            //괄호를 뺄셈 이후에 치면 최소
            if (str[i] == '-')
                minus = true;
            continue;
        }
        //피연산자일 경우
        temp += str[i];
    }
    return result;
}

int main()
{
    cin >> str;
    cout << minResult() << endl;
    return 0;
}

// #include<stdio.h>

// void main(){
//    int i=0,n,a; char c;

//    //for문을 이용해 입력 및 조건식 처리
//    for(scanf("%d",&n);scanf("%c",&c),c!=10;){

//       //-일때 i=1로 바꿔준다.
//       if(c=='-') i=1;
//       scanf("%d",&a);

//       //i=1일때, 즉, -부호가 최초로 들어왔을 때 n에서 계속 빼준다.
//       if(i) n-=a;

//      //i=0, 즉 아직 -부호가 들어오지 않았거나, 처음 입력받았을 땐 n에 입력받은 수를 더해준다.
//       else n+=a;
//    }
//    printf("%d",n);
// }