#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setno(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void sumno(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber()
    {
        cout << "The a and b is " << a << " + " << b <<"i"<< endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setno(1, 2);
    c1.printnumber();

    c2.setno(3, 4);
    c2.printnumber();

    c3.sumno(c1, c2);
    c3.printnumber();
    return 0;
}