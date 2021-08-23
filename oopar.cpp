#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter() { counter = 0; };
    void setpr();
    void displaypr();
};
void shop ::setpr()
{
    cout << "enter  ID of " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displaypr()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "ID No.: " << itemid[i] << " price : " << itemprice[i] << endl;
    }
}
int main()
{

    shop dukaan;
    dukaan.initcounter();
    dukaan.setpr();
    dukaan.setpr();
    dukaan.setpr();
    dukaan.displaypr();

    return 0;
}