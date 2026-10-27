#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter three number";
    cin>>a>>b>>c;
    if(a>=b and a>=c)
        cout<<"max = a ="<<a;
    else if(b>=c and b>=a)
        cout<<"max = b ="<<b;
    else if(c>=a and c>=b)
        cout<<"max = c ="<<c;
    return 0;
}
