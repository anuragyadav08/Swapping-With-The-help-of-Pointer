
#include <iostream>
using namespace std;
void swqap(int *p1,int *p2)
{
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
}
int main()
{
    int num1,num2;
    cout<<"Enter 1st Number :";
    cin>>num1;
    cout<<"Enter 2nd Number :";
    cin>>num2;
    cout<<"Before Swapping : ";
    cout<<num1<<" "<<num2;
    swap(num1,num2);
    cout<<endl;
    cout<<"After swapping : ";
    cout<<num1<<" "<<num2;
    return 0;
}