#include <iostream>

using namespace std;

class ctestdata
{
    private: int m_ndata;
    public:
        ctestdata(int nparam) : m_ndata(nparam)
        {
            cout << "ctestdata(int)" << endl;
        }
        ctestdata(const ctestdata &rhs) : m_ndata(rhs.m_ndata)
        {
            cout << "ctestdata(const ctestdata &)" << endl;
        }
        int getdata() const
        {
            return m_ndata;
        }
        void setdata(int nparam)
        {
            m_ndata = nparam;
        }
};

void testfunc(ctestdata param)
{
    cout << "testfunc(): " << param.getdata() << endl;
}
int main()
{
    testfunc(5);

    return 0;
}