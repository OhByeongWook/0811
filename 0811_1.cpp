#include <iostream>

using namespace std;
// 
class cmydata
{
    int m_ndata;
    public:
        cmydata()
        {
            cout << "cmydata()" << endl;
        }
        cmydata(const cmydata& rhs) //:m_ndata(rhs.m_ndata)
        {
            this -> m_ndata = rhs.m_ndata;
            cout << "cmydata(const cmydata& rhs)" << endl;
        } 
        int getdata() const
        {
            return m_ndata;
        }
        int setdata(int param)
        {
            m_ndata = param;
        }
};

int main()
{
    cmydata a; //기본 생성자 호출
    a.setdata(10); // 22줄 실행. 멤버변수에 데이터 입력

    cmydata b(a); // 9줄 실행.
    cout << b.getdata() << endl;
}
/* 복사 생성자 호출시점
1. 복사 생성자 기존 개체를 이용해서 새로운 객체를 초기화 하는 경우.
2. call by value 방식으로 객체를 인자로 전달하는 것.
3. 객체를 반환하되 참조형으로 반환하지 않는 경우. */