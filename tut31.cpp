#include <iostream>
#include <math.h>
using namespace std;
class dis
{
    int a, b;

public:
    dis(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Value is : " << a << "and " << b << endl;
    }
    friend int dist(dis, dis);
 };
int dist(dis c1, dis c2)
{ 
    int d;
    d = sqrt((pow((c1.a - c2.a), 2)) + (pow((c1.b - c2.b), 2)));
    return d;
}
int main()
{
    dis n1(1, 4), n2(3, 8);
    dis n1(1, 4), n2(3, 8);

    n1.display();
    n2.display();
    int res = dist(n1, n2);
    cout << res << endl;

    return 0;
}