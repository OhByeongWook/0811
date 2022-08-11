#include <iostream>

using namespace std;

class ctestdata
{
    private: 
    int m_ndata = 0;
    char *m_pszname = nullptr;
    public:
        ctestdata(int nparam, char*pszname) :m_ndata(nparam), m_pszname(pszname)
        {
            cout << "ctestdata(int): " << m_pszname << endl;
        }
        ~ctestdata()
        {
            cout << "~ctestdata(): " << m_pszname << endl;
        }
        ctestdata(const ctestdata &rhs) : m_ndata(rhs.m_ndata), m_pszname(rhs.m_pszname)
        {
            cout << "ctestdata(const ctestdata &): " << m_pszname << endl;
        }
        ctestdata& operator = (const ctestdata &rhs)
        {
            cout << "operator = " << endl;
            m_ndata = rhs.m_ndata;

            return *this;
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

ctestdata testfunc(int nparam)
{
    ctestdata a(nparam, "a");
    
    return a;
}

int main()
{
    
    ctestdata b(5, "b");
    cout << "-----Before-----" << endl;
    b = testfunc(10);
    cout << "-----After------" << endl;
    cout << b.getdata() << endl;

    return 0;
}