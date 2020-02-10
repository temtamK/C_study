#include <vector>
#include <iostream>

using namespace std;

//방의 유저 정보
struct RoomUser
{
    int CharCd; //캐릭터 코드
    int Level;  //레벨
};

int main()
{
    //유저 1
    RoomUser RoomUser1;
    RoomUser1.CharCd = 1;
    RoomUser1.Level = 10;

    //유저 2
    RoomUser RoomUser2;
    RoomUser2.CharCd = 2;
    RoomUser2.Level = 5;

    //유저 3
    RoomUser RoomUser3;
    RoomUser3.CharCd = 3;
    RoomUser3.Level = 12;

    //방의 유저들을 정장할 vector
    vector<RoomUser> RoomUsers;

    //추가
    RoomUsers.push_back(RoomUser1);
    RoomUsers.push_back(RoomUser2);
    RoomUsers.push_back(RoomUser3);

    //방에 있는 유저 수
    int UserCount = RoomUsers.size();

    //방에 있는 유저 정보 출력
    //반복자로 접근 - 순방향
    for (vector<RoomUser>::iterator IterPos = RoomUsers.begin();
         IterPos != RoomUsers.end();
         ++IterPos)
    {
        cout << "유저코드 : " << IterPos->CharCd << endl;
        cout << "유저레벨 : " << IterPos->Level << endl;
        cout << endl;
    }
    cout << endl;

    //반복자로 접근 - 역방향
    for (vector<RoomUser>::reverse_iterator IterPos = RoomUsers.rbegin();
         IterPos != RoomUsers.rend();
         ++IterPos)
    {
        cout << "유저코드 : " << IterPos->CharCd << endl;
        cout << "유저레벨 : " << IterPos->Level << endl;
        cout << endl;
    }
    cout << endl;

    //배열 방식으로 접근
    vector<RoomUser>::iterator IterPos = RoomUsers.begin();
    for (int i = 0; i < UserCount; ++i)
    {
        cout << "유저코드 : " << RoomUsers[i].CharCd << endl;
        cout << "유저레벨 : " << RoomUsers[i].Level << endl;
        cout << endl;
    }
    cout << endl;

    //첫 번째 유저 데이터 접근
    RoomUser &FirstRoomUser = RoomUsers.front();
    cout << "첫 번째 유저의 레벨 : " << FirstRoomUser.Level << endl
         << endl;

    RoomUser &LastRoomUser = RoomUsers.back();
    cout << "마지막 유저의 레벨 : " << LastRoomUser.Level << endl
         << endl;

    //at을 사용하여 두 번째 유저의 레벨을 출력
    RoomUser &SecondRoomUser = RoomUsers.at(1);
    cout << "두 번째 유저의 레벨 : " << SecondRoomUser.Level << endl
         << endl;

    //삭제
    RoomUsers.pop_back();

    UserCount = RoomUsers.size();
    cout << "현재 방에 있는 유저의 수 : " << UserCount << endl
         << endl;

    //아직 방에 유저가 있다면 모두 삭제
    if (false == RoomUsers.empty())
    {
        RoomUsers.clear();
    }

    UserCount = RoomUsers.size();
    cout << "현재 방에 있는 유저의 수 : " << UserCount << endl;
    return 0;
}