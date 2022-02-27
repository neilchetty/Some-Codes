#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"*********************************************"<<endl;
    cout<<"MADE BY NEIL\nhttps://github.com/neilchetty\nhttps://t.me/neilchetty"<<endl;
    cout<<"SOURCE: https://github.com/neilchetty/Some-Codes"<<endl;
    cout<<"**********************************************"<<endl;

    int choice,score,rem,su=0,x,fact=1,i,no,no1,sum,p,q;
    int h,l;
    int LCM(int,int);
    int HCF(int,int);
    int z[500];
    int y[500];
    long num;
    char ch;
    float a,b,c,temp,r,area,circum,s1,s2,s3,semi,areatriangle,largest,secondlargest,smallest,lar,seclar,smal,su1,su2,su3,su4,su5,percent;
    float const pi=3.14;
    cout<<"1-Replace variable with using third variable"<<endl;
    cout<<"2-Replace variable without using third variable"<<endl;
    cout<<"3-Find Area and circumference of a circle"<<endl;
    cout<<"4-Find Area of triangle"<<endl;
    cout<<"5-Find largest, smallest and second largest of three numbers"<<endl;
    cout<<"6-Find whether character is small or big alphabet"<<endl;
    cout<<"7-Determine whether student passed or failed in exam"<<endl;
    cout<<"8-Sum of all digits in a number"<<endl;
    cout<<"9-Factorial of a number"<<endl;
    cout<<"10-Sum and average of n elements"<<endl;
    cout<<"11-Find HCF and LCM of two numbers"<<endl;
    cout<<"12-Find largest, second largest, smallest number of n numbers"<<endl;


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

    case 6:
        cout<<"Enter the character"<<endl;
        cin>>ch;
        if(ch>='A'&&ch<='Z')
        cout<<""<<ch<<" Is a capital alphabet"<<endl;
        else if(ch>='a'&&ch<='z')
        cout<<""<<ch<<" Is a small alphabet"<<endl;
        else
        cout<<"Invalid Alphabet"<<endl;
        break;

    case 7:
        cout<<"Enter the marks of subject 1 : "<<endl;
        cin>>su1;
        cout<<"Enter the marks of subject 2 : "<<endl;
        cin>>su2;
        cout<<"Enter the marks of subject 3 : "<<endl;
        cin>>su3;
        cout<<"Enter the marks of subject 4 : "<<endl;
        cin>>su4;
        cout<<"Enter the marks of subject 5 : "<<endl;
        cin>>su5;
        percent=(su1+su2+su3+su4+su5)/5;
        cout<<"Percentage = "<<percent<<endl;
        cout<<"Result = ";
        score=percent/10;
        switch (score)
        {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
            cout<<"First Class"<<endl;
            break;
        case 5:
            cout<<"Second Class"<<endl;
            break;
        case 4:
            cout<<"Pass Class"<<endl;
            break;
        default:
            cout<<"Fail"<<endl;
            break;
        }
    break;

case 8:
    cout<<"Enter the number"<<endl;
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        su=su+rem;
        num=num/10;
    }
    cout<<"Sum of digits = "<<su<<endl;
    break;

case 9:
    cout<<"Enter The Number "<<endl;
    cin>>x;
    if(x==0)
    cout<<"Factorial of this number is 0"<<endl;
    else if(x<0)
    cout<<"Cant be determined "<<endl;
    else
    {
    for(i=1;i<=x;i++)
    fact=fact*i;
    }
    cout<<"Factorial of this number is "<<fact<<endl;
    break;

case 10:
    cout<<"Enter the number of elements you want to add (MAX 500) "<<endl;
    cin>>no;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<no;i++)
    {
    cin>>z[i];
    }
    sum=0;
    for(i=0;i<no;i++)
    {
    sum=sum+z[i];
    }
    cout<<"Sum of elements is "<<sum<<endl;
    cout<<"Average of all elements is "<<(float)sum/no<<endl;
    break;

case 11:
    cout<<"Write Two Numbers "<<endl;
    cin>>p>>q;
    l=LCM(p,q);
    h=HCF(p,q);
    cout<<"HCF of these two number are "<<h<<endl;
    cout<<"LCM of these two number are "<<l<<endl; 
    break;

case 12:
    cout<<"Enter the number of elements "<<endl;
    cin>>no1;
    cout<<"Enter the elements value "<<endl;
    for(i=0;i<no1;i++)
    {
    cin>>y[i];
    }
    lar=y[0];
    for(i=0;i<no1;i++)
    {
    if(y[i]>lar)
    lar=y[i];
    }
    smal=y[0];
    for(i=0;i<no1;i++)
    {
    if(y[i]<smal)
    smal=y[i];
    }
    seclar=y[0];
    for(i=0;i<no1;i++)
    if(y[i]!=lar)
    {
        if(seclar<y[i])
        seclar=y[i];
    }
    cout<<"Smallest number = "<<smal<<endl;
    cout<<"Second largest number = "<<seclar<<endl;
    cout<<"Largest number = "<<lar<<endl;
    break;
    default:cout<<"Can't You Read? Only Give Number Specific To The Task";
    }
    cout<<"\n*********************************************"<<endl;
    cout<<"MADE BY NEIL\nhttps://github.com/neilchetty\nhttps://t.me/neilchetty"<<endl;
    cout<<"SOURCE: https://github.com/neilchetty/Some-Codes"<<endl;
    cout<<"**********************************************"<<endl;
return 0;
}

int HCF(int m,int n)
{
    while(m!=n)
    if(m>n)
    m=m-n;
    else
    n=n-m;
    return (m);
}
int LCM(int r,int s)
{
    int h,l;
    h=HCF(r,s);
    l=(r*s)/h;
    return (l);
}