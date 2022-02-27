#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int choice,a,b,temp;
    float r,area,circum;
    float const pi=3.14;
    cout<<"1-Replace variable with using third variable"<<endl;
    cout<<"2-Replace variable without using third variable"<<endl;
    cout<<"3-Find Area and circumference of a circle"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter the first number"<<endl;
        cin>>a;
        cout<<"Enter the second number"<<endl;
        cin>>b;
        cout<<"Before Interchange A = "<<a<<" And B = "<<b<<endl;
        temp=b;
        b=a;
        a=temp;
        cout<<"After Interchange A = "<<a<<" And B = "<<b<<endl;
        break;

    case 2:
        cout<<"Enter the first number"<<endl;
        cin>>a;
        cout<<"Enter the second number"<<endl;
        cin>>b;
        cout<<"Before Interchange A = "<<a<<" And B = "<<b<<endl;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"After Interchange A = "<<a<<" And B = "<<b<<endl;
        break;

    case 3:
        cout<<"Enter the radius of a circle: "<<endl;
        cin>>r;
        area=pi*r*r;
        circum=pi*2*r;
        cout<<"Area of the circle = "<<std::setprecision(10)<<area<<endl;
        cout<<"circumference of a circle = "<<std::setprecision(10)<<circum<<endl;
        break;
    default:cout<<"Can't You Read?";
    }
return 0;
}