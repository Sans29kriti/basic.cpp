#include<iostream>
using namespace std;
int main()
{
    int i,count=0,j;
    cin>>i;
    for(j=1;j<=i;i,j++)
    {
        if(i%j == 0)
            count++;
    }
    if(count == 2)
            cout<<"PRIME"<<endl;
    else
            cout<<"COMPOSITE"<<endl;
    return 0;
}
