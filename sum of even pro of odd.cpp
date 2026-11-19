#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,pro=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1;n>0;n=n/10)
        i=n % 10;
    if(i % 2 == 0){
        sum = sum + i;
    }
    else{
        pro=pro*i;
    }
    cout<<"sum of digit="<<sum<<endl<<"product of digit="<<pro<<endl;
    return 0;
}
