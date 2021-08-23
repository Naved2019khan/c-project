#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
using namespace std;
class two;
class one{
    int a;
    public :
    void enterno(int var1){
        a=var1;
    }
    void printno(){
        cout<<a<<endl;
    }
    friend void swap(one & ,two &);

};
class two{
    int b;
    public :
    void enterno(int var2){
        b=var2;
    }
    void printno(){
        cout<<b<<endl;
    }
    friend void swap(one & ,two &);
};
void swap(one &c1,two &c2){
    int temp=c1.a;
    c1.a=c2.b;
    c2.b=temp;
}

int main() {
    one c1;
    c1.enterno(252);
    c1.printno();
    two c2;
    c2.enterno(30);
    c2.printno();
    swap(c1,c2);
    c1.printno();
    c2.printno();
}
