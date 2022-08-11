#include <iostream>

using namespace std;

class ctestdata
{
    private: 
        int m_ndata = 0;
    public:
        ctestdata(int nparam):m_ndata(nparam)
        {
            cout << "ctest(int param)" << endl;
        }
        ctestdata(const ctestdata& rhs):m_ndata(rhs.m_ndata)
        {
            cout << "ctestdata(const ctestdata& rhs)" << endl;
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
void testfunc(ctestdata param)
{
    cout << "testfunc()" << endl;
    param.setdata(20);
}

int main()
{
    cout << "----------begin----------" << endl;
    ctestdata a(10);
    
    testfunc(a);

    cout << "a:" << a.getdata() << endl;
    cout << "----------end------------" << endl;
}