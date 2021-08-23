#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void);
    void printnumber(){
        cout<< "a+ib is:"<<a<<" + i"<<b<<endl;
    }

};
complex :: complex(){
    a=10;
    b=20;

}


int main() {
    complex c;
    c.printnumber();
     c.printnumber();
      c.printnumber();
    
    return 0;
}
