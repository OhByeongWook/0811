#include <iostream>

using namespace std;

class cmydata
{
    private: int m_ndata = 0;
    public:
        cmydata()
        {
            cout << "cmydata()" << endl;
        }
        int getdata(void) const
        {
            return m_ndata;
        }
        void setdata(int nparam)
        {
            m_ndata = nparam;
        }
};
int main()
{
    cmydata a;
    a.setdata(10);

    cmydata b(a);
    cout << b.getdata() << endl;
}