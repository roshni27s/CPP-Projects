#include<iostream>
#include<cmath>
#include<windows.h>
#include<MMSystem.h>
using namespace std;
void list()
{
    cout<<"1- addition"<<endl;
    cout<<"2- subtraction"<<endl;
    cout<<"3- multiplication"<<endl;
    cout<<"4- division"<<endl;
    cout<<"5- power"<<endl;
    cout<<"6- square"<<endl;
    cout<<"7- square root"<<endl;
    cout<<"8- sin"<<endl;
    cout<<"9- cos"<<endl;
    cout<<"10- tan"<<endl;
    cout<<"11- log"<<endl;
    cout<<"-1 - exit"<<endl;
}
void add(float a,float b)
{
    cout<<a+b<<endl;
}
void subtract(float a,float b)
{
    cout<<a-b<<endl;
}
void multiply(float a,float b)
{
    cout<<a*b<<endl;
}
void divide(float a,float b)
{
    cout<<a/b<<endl;
}
void power(float a,float b)
{
    cout<<pow(a,b)<<endl;
}
void square(float a)
{
    cout<<a*a<<endl;
}
void square_root(float a)
{
    cout<<sqrt(a)<<endl;
}
void sine(float a)
{
    cout<<sin(a)<<endl;
}
void cosine(float a)
{
    cout<<cos(a)<<endl;
}
void tangent(float a)
{
    cout<<tan(a)<<endl;
}
void logarithm(float a)
{
    cout<<log(a)<<endl;
}
int main()
{
    PlaySound(TEXT("background_music.wav"),NULL,SND_ASYNC|SND_LOOP);
    system("color 5F");
    int i;
    float a,b;
    while(i!=-1)
    {
        list();
        cin>>i;
        system("cls");
        switch(i)
        {
        case 1:
            cout<<"first number:";
            cin>>a;
            cout<<"second number:";
            cin>>b;
            add(a,b);
            break;
        case 2:
            cout<<"first number:";
            cin>>a;
            cout<<"second number:";
            cin>>b;
            subtract(a,b);
            break;
        case 3:
            cout<<"first number:";
            cin>>a;
            cout<<"second number:";
            cin>>b;
            multiply(a,b);
            break;
        case 4:
            cout<<"first number:";
            cin>>a;
            cout<<"second number:";
            cin>>b;
            divide(a,b);
            break;
        case 5:
            cout<<"number:";
            cin>>a;
            cout<<"power:";
            cin>>b;
            power(a,b);
            break;
        case 6:
            cout<<"number:";
            cin>>a;
            square(a);
            break;
        case 7:
            cout<<"number:";
            cin>>a;
            square_root(a);
            break;
        case 8:
            cout<<"number:";
            cin>>a;
            sine(a);
            break;
        case 9:
            cout<<"number:";
            cin>>a;
            cosine(a);
            break;
        case 10:
            cout<<"number:";
            cin>>a;
            tangent(a);
            break;
        case 11:
            cout<<"number:";
            cin>>a;
            logarithm(a);
            break;
        case -1:
            break;
        default:
            cout<<"wrong choice"<<endl;
            break;
        }
    }
}
