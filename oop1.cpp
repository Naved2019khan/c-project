#include<iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
        void set(int a,int b, int c);
        void getnu()
        {   
            cout<<"value of a is "<<a;
            cout<<"\nvalue of b is "<<b;
            cout<<"\nvalue of c is "<<c;
            cout<<"\nvalue of d is "<<d;
          
        }
};
void employee ::set(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    employee naved;
    naved.d=34;
    naved.set(1,2,3);
    naved.getnu();

   
    return 0;
}