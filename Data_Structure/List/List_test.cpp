#include <iostream>
#include <list>

using namespace std;

struct Vertex
{
    Vertex(char name, int x, int y)
    {
        Name = name;
        X = x;
        Y = y;
    }

    char Name;
    int X; // 꼭짓점 X 좌표
    int Y; // 꼭짓점 Y 좌표
};

int main()
{
    list<Vertex *> Vertexlist;

    Vertex *A = new Vertex('A', 50, 200);
    Vertexlist.push_back(A);
    Vertex *B = new Vertex('B', 20, 80);
    Vertexlist.push_back(B);
    Vertex *C = new Vertex('C', 75, 10);
    Vertexlist.push_back(C);
    Vertex *D = new Vertex('D', 130, 80);
    Vertexlist.push_back(D);
    Vertex *E = new Vertex('E', 100, 200);
    Vertexlist.push_back(E);

    list<Vertex *>::iterator iterEnd = Vertexlist.end();
    list<Vertex *>::iterator iterPos = Vertexlist.begin();

    // F 점 추가
    Vertex *F = new Vertex('F', 180, 150);
    --iterEnd;
    Vertexlist.insert(iterEnd, F);

    cout << "F 점 추가" << endl;
    iterEnd = Vertexlist.end();
    for (iterPos = Vertexlist.begin();
         iterPos != iterEnd;
         ++iterPos)
    {
        cout << (*iterPos)->Name << endl;
        cout << "Vertex X : " << (*iterPos)->X << endl;
        cout << "Vertex Y : " << (*iterPos)->Y << endl;
    }

    cout << endl
         << "D값 변경" << endl;
    for (iterPos = Vertexlist.begin();
         iterPos != iterEnd;
         ++iterPos)
    {

        if ((*iterPos)->Name == 'D')
        {
            (*iterPos)->X = 200;
            (*iterPos)->Y = 100;
        }

        cout << (*iterPos)->Name << endl;
        cout << "Vertex X : " << (*iterPos)->X << endl;
        cout << "Vertex Y : " << (*iterPos)->Y << endl;
    }

    //C값 삭제
    cout << endl
         << "C 삭제" << endl;

    Vertexlist.remove(C);

    for (iterPos = Vertexlist.begin();
         iterPos != iterEnd;
         ++iterPos)
    {
        cout << (*iterPos)->Name << endl;
        cout << "Vertex X : " << (*iterPos)->X << endl;
        cout << "Vertex Y : " << (*iterPos)->Y << endl;
    }

    return 0;
}