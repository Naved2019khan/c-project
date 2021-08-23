#include <iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
   
    void setid(){

        salary=122;
        cout<<"enter id of employee :"<<endl;
        cin>>id;
    } void getid(){
        cout<<"Your id is "<<endl;
    }
};
int main()
{
    employee f[4];
    for(int i=0;i<4;i++)
    {
        f[i].setid();
        f[i].getid();
    }
    return 0;
}