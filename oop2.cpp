#include<iostream>
#include<string>
using namespace std;
class bin{
    string s;
    public:
    void read(void);
    void chk();
    void one();
    void display();
};
void bin :: read(void){
    cout<<"enter any string"<<endl;
    cin>>s;
} 
void bin :: chk(){
    for (int i=0;i< s.length();i++)
    {
        if(s.at(i)!='0' &&  s.at(i)!='1')
        {
            cout<<"incorrect";
            exit(0);
        }
    }
}
void bin :: one(){
     for (int i=0;i< s.length();i++)
    {
        if(s.at(i)=='0' )
        {
            s[i]='1';
        }
        else{
            s[i]='0';
        }
    }
    
}
void bin :: display(){
     for (int i=0;i< s.length();i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}
int main(){
    bin b;
    b.read();
    b.chk();
    b.display();
    b.one();
    b.display();
return 0;
}  