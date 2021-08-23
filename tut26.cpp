#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    friend complex sumofnumber(complex n1,complex n2);
    public:
    
        void setnumber(int v1,int v2){
            a=v1;
            b=v2;
        }
        void printnumber(){
            cout<<"Value of  is "<<a<<" + "<<b<<"i"<<endl;
        }

};
complex sumofnumber(complex n1,complex n2){
    complex c;
    c.setnumber(n1.a+n2.a,n1.b+n2.b);
    return c;
}
int main()
{   
    complex c1,c2,c3;
    c1.setnumber(1,4);
    c1.printnumber();
   
    c2.setnumber(3,6);
    c2.printnumber();
     
    c3=sumofnumber(c1,c2); 
    c3.printnumber();
   
    return 0;
}