#include<iostream>
using namespace std;

int findsqrt(int n)
{
    int s=0;
    int target =n;
    int e=n;
    int mid=s+(e-s)/2;
    int ans =-1;
    while(s<=e)
    {
        if(mid*mid==target)
        {
            return mid;
        }
        if(mid*mid>target)
        {
            e=mid-1;

        }
        else
        {
            //store ans
            ans=mid;
            //right search
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enetr the number"<<endl;
    cin>>n;

    int ans = findsqrt(n);

    cout<<"ans is"<<ans<<endl;

    int precision;
    cout<<"eneter number of floating digits in precsison"<<endl;
    cin>>precision;
    double step=0.1;
    double finalans=ans;
    for(int i=0;i<precision;i++)
    {
        for(double j=finalans; j*j<=n;j=j+step)
        {
            finalans=j;
        }
        step =step/10;
    }
cout<<"afianl answer"<<finalans;

    return 0;
}