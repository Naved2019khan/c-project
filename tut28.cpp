#include <iostream> //program of swaping a and b with help of friend function
using namespace std;
class y;
class x
{
    int a;
    friend void exchange(x &n1, y &n2);

public:
    void setnumber(int v1)
    {
        a = v1;
    }
    void printnumber()
    {
        cout << "The value of a is " << a << endl;
    }
};
class y
{
    int b;
    friend void exchange(x &n1, y &n2);

public:
    void setnumber(int v2)
    {
        b = v2;
    }
    void printnumber()
    {
        cout << "The value of b is " << b << endl;
    }
};
void exchange(x &n1, y &n2)
{
    int t = n1.a;
    n1.a = n2.b;
    n2.b = t;
}

int main()
{
    x c1;
    c1.setnumber(23);
    c1.printnumber();

    y c2;
    c2.setnumber(56);
    c2.printnumber();
 
    exchange(c1, c2);
 
    c1.printnumber();
    c2.printnumber();

    return 0;
}