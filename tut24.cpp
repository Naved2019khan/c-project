#include <iostream>
using namespace std;
class employee
{
    int id;
    int static count;

public:
    void setid()
    {
        cout << "Enter Id :" << endl;
        cin >> id;
        count++;
    }
    void getid()
    {
        cout << "Your id is : " << id << endl
             << "employee no. " << count << endl;
    }
    static void getcount()
    {
        cout << "count no. " << count << endl;
    }
};
int employee ::count = 1000;
int main()
{
    employee naved, zaid, sanif;
    naved.setid();
    naved.getid();
    employee ::getcount();
    zaid.setid();
    zaid.getid();
    employee ::getcount();

    sanif.setid();
    sanif.getid();
    employee ::getcount();
    return 0;
}