#include<iostream>
using namespace std;
class input{
    int a,b;
    public:
    input(int x,int y);
    void display(){
        cout<<a<<" + i"<<b<<endl;
    }
};
input :: input(int x,int y){
    a=x;
    b=y;
}
int main()
{
  input c1(4,5); //implict
  input c2=input(7,9);
  c1.display();
  c2.display();
    return 0;
}