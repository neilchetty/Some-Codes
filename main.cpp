#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int choice;
    float a,b,c,temp,r,area,circum,s1,s2,s3,semi,areatriangle,largest,secondlargest,smallest;
    float const pi=3.14;
    cout<<"1-Replace variable with using third variable"<<endl;
    cout<<"2-Replace variable without using third variable"<<endl;
    cout<<"3-Find Area and circumference of a circle"<<endl;
    cout<<"4-Find Area of triangle"<<endl;
    cout<<"5-Find largest, smallest and second largest of three numbers"<<endl;
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

    case 4:
        cout<<"Give three sides of a triangle"<<endl;
        cin>>s1>>s2>>s3;
        semi=(s1+s2+s3)/2;
        areatriangle=sqrt(semi*(semi-s1)*(semi-s2)*(semi-s3));
        cout<<"Area of triangle is = "<<std::setprecision(10)<<areatriangle;
        break;

    case 5:
        cout<<"Enter three numbers"<<endl;
        cin>>a>>b>>c;
        largest=a;
        if(b>largest)
        largest=b;
        if(c>largest)
        largest=c;
        smallest=a;
        if(b<smallest)
        smallest=b;
        if(c<smallest)
        smallest=c;
        secondlargest=(a+b+c)-(largest+smallest);
        cout<<"Smallest is = "<<smallest<<endl;
        cout<<"Second largest is = "<<secondlargest<<endl;
        cout<<"Largest = "<<largest<<endl;
        break;
    default:cout<<"Can't You Read?";
    }
return 0;
}