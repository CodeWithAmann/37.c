#include<iostream>
#include<string.h>
using namespace std;
class binary
{
    string s;
    public:
    void enter_number();
    void check_number();
    void print_number();
};
void binary ::enter_number()
{
    cout<<"Enter number for checking either binary or not "<<endl;
    cin>>s;
}
void binary ::check_number()
{
    for(int i = 0; i< s.length(); i++)
    {
        if(s.at(i) != '0'  &&  s.at(i) != '1')
        {
            cout<<"Enter number is not in binary form "<<endl;
            exit (0);
        }
    }
}
void binary ::print_number()
{
    for(int i = 0; i<s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<"The number is in binary form "<<endl;
}
int main()
{
    binary b1;
    b1.enter_number();
    b1.check_number();
    b1.print_number();
    return 0;
}
