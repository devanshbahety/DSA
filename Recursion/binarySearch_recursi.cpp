#include<iostream>
using namespace std;

int  binarysearch(int v[],int s,int e,int target)
{
    if(s>e)
    {
        return -1;
    }
    int mid=(s+e)/2;
    if(v[mid]==target)
    {
        return mid;
    }

    if(v[mid]>target)
    {
        bool ans=binarysearch(v,s,mid-1,target);
        return ans;
    }

    else
    {
        bool ans=binarysearch(v,mid+1,e,target);
        return ans;
    }
    
}

int main()
{
    int v[]={10,20,30,40,60,70,80,90};
    int n=8;
    int s=0;
    int e=v[n-1];
    int mid=(s+e)/2;
    int target=987;
    int ans=binarysearch(v,s,e,target);
    cout<<"answer is"<<ans<<endl;


    return 0;
}