#include <iostream>
using namespace std;
int main()
{
    int q, r, i, s[100], n, chk;
    cout << "enter no: \n";
    cin >> n;
    q = n;
    for (i = 0; q != 1; i++)
    {
        r = q % 2; 
        q = q / 2;
        s[i] = r;
    }
    chk = i;
    s[chk]=1;
    cout<< "reverse binary of number "<<n<<endl;

    for (i = 0; i <= chk; i++)
    {
        cout<< s[i] << "\t";
    }
    cout << "\n binary of number "<<n<<endl;
    for (i = chk; i >= 0; i--)  
    {
        cout << s[i] << "\t";
    }
    return 0;
}
