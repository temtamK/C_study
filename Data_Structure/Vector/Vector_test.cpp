#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

struct UserInfo
{
    char acUserName[21]; //이름
    int Level;           //레벨
    int Exp;             //경험치
};

//게임 방의 유저를 관리하는 클래스
//방에는 최대 6명까지 들어 갈 수 있다.
//방에 들어 오는 순서 중 가장 먼저 들어 온 사람이 방장이 된다.
class GameRoomUser
{
private:
    vector<UserInfo> Users;
    char acMasterUserName[21]; //방장의 이름
public:
    GameRoomUser(/* args */);
    ~GameRoomUser();

    //방에 유저 추가
    bool AddUser(UserInfo &tUserInfo)
    {
        Users.push_back(tUserInfo);
        return true;
    }

    //방에서 유저 삭제
    //만약 방장이 나가면 acMasterUserName에 새로운 방장의 이름을 설정.
    bool DelUser(char *pcUserName)
    {
        if (IsEmpty())
        {
            return false;
        }
        else
        {
            vector<UserInfo>::iterator first = Users.begin();
            vector<UserInfo>::iterator end = Users.end();
            for (first; first != end;)
            {
                if (first->acUserName == pcUserName)
                    first = Users.erase(first);
                else
                {
                    first++;
                }
            }

            // if (position != Users.end())
            //     Users.erase(position);
            // Users.erase(std::remove(Users.begin(), Users.end(), pcUserName), Users.end());
            if (acMasterUserName == NULL)
            {
                strcpy(acMasterUserName, Users[0].acUserName);
                return true;
            }
        }
    }

    //방에 유저가 없는지 조사. 없으면 true 리턴
    bool IsEmpty()
    {
        return Users.empty();
    }
    //방에 유저가 꽉 찻는지 조사. 꽉 찼다면 true 리턴
    bool IsFull() { return Users.size() == 6; }

    //특정 유저의 정보
    UserInfo &GetUserOfName(char *pcName)
    {
        Users.at(&pcName).Level;
        Users.at(&pcName).Exp;
    }

    //방장의 유저 정보
    UserInfo &GetMasterUser()
    {
        Users.at(acMasterUserName).Level;
        Users.at(acMasterUserName).Exp;
    }

    //가장 마지막에 방에 들어 온 유저의 정보
    UserInfo &GetUserOfLastOrder()
    {
        Users.back().Level;
        Users.back().Exp;
    }

    //특정 순서에 들어 온 유저를 쫓아낸다.
    UserInfo &BanUser(int OrderNum)
    {
        Users.erase(OrderNum);
    }
    void Clear()
    {
        if (false == m_Datas.empty())
            m_Datas.clear();
    }
};

int main()
{
    vector<UserInfo> User;

    UserInfo user1('A', 1, 10);
    User.AddUser(user1);
    UserInfo user2('B', 2, 20);
    User.AddUser(user2);
    UserInfo user1('C', 3, 30);
    User.AddUser(user3);

    vector<UserInfo>::iterator iterEnd = User.end();
    vector<UserInfo>::iterator iterPos = User.begin();
    for (iterPos; iterPos != iterEnd; ++iterPos)
    {
        cout << "User Name : " << iterPos->acUserName << endl;
        cout << "User Level : " << iterPos->Level << endl;
        cout << "User Exp : " << iterPos->Exp << endl;
    }

    return 0;
}