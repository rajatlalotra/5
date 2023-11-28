#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int sum=0;
    for(int y=0;y<=x;y++){
        sum=sum+y;
    }
    cout<<sum;
    return  0;
}