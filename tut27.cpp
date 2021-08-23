#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sumofrealnumber(complex, complex);
    int sumofcompnumber(complex, complex);
};
class complex
{
    int a, b;
    //  friend int calculator ::sumofrealnumber(complex n1, complex n2);
    //  friend int calculator ::sumofcompnumber(complex n1, complex n2);
    friend class calculator;

public:
    void setnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnumber()
    {
        cout << "value of a +bi is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumofrealnumber(complex n1, complex n2)
{
    return (n1.a + n2.a);
}
int calculator ::sumofcompnumber(complex n1, complex n2)
{
    return (n1.b + n2.b);
}

int main()
{
    complex c1, c2;
    c1.setnumber(4, 5);
    c1.printnumber();

    c2.setnumber(2, 11);
    c2.printnumber();

    calculator c;
    int res1 = c.sumofrealnumber(c1, c2);
    int res2 = c.sumofcompnumber(c1, c2);

    cout << "The sum  of real no. is " << res1 << endl;
    cout << "The sum  of complex  no. is " << res2;

    return 0;
}