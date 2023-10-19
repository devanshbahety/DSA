//climb stair question
//steps allowed : 1 stair at atime/ 2 steps at atime
//source to destination
//total no of ways to reach 
//nth stair = f(n) =f(n-1)+f(n-2) //total no. of ways so add both

#include<iostream>
using namespace std;

int climbstairs(int n)
{
    //base case - stopping condition to stop
    if(n==0 || n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    int ans=climbstairs(n-1) + climbstairs(n-2);
    return ans;

}

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int ans=climbstairs(n);
    cout<<"answer is"<<ans<<endl;


    return 0;
}
