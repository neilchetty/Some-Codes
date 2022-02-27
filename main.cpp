#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int choice,a,b,temp;
    cout<<"1-Replace variable with using third variable"<<endl;
    cout<<"2-Replace variable without using third variable"<<endl;
    cin>>choice;
    if (choice=1)
    {
        cout<<"Enter the first number"<<endl;
        cin>>a;
        cout<<"Enter the second number"<<endl;
        cin>>b;
        cout<<"Before Interchange A = "<<a<<" And B = "<<b<<endl;
        temp=b;
        b=a;
        a=temp;
        cout<<"After Interchange A = "<<a<<" And B = "<<b<<endl;
    }
    else if (choice=2)
    {
        cout<<"Enter the first number"<<endl;
        cin>>a;
        cout<<"Enter the second number"<<endl;
        cin>>b;
        cout<<"Before Interchange A = "<<a<<" And B = "<<b<<endl;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"After Interchange A = "<<a<<" And B = "<<b<<endl;
    }
return 0;
}