#include<iostream>
using namespace std;
void printdigit(int n)
{
    if(n==0)
    {
        return;
    }
    
    printdigit(n/10);
    int ans=n%10;
    cout<<ans;
    
}

int main()
{
    int n=647;
    printdigit(n);

    return 0;
}