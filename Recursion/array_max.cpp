#include<iostream>
#include<limits.h>
using namespace std;
void findmaxi(int arr[],int n,int i ,int &maxi){
    //using & as maxi should get updated in the main so we use pass by refernece

    if(i>=n)
    {
        return;
    }
    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
    findmaxi(arr,n,i+1,maxi);
}
void findmini(int arr[],int n,int i,int &mini)
{
    if(i>=n)
    {
        return;
    }
    if(arr[i]<mini)
    {
        mini=arr[i];
    }
    findmini(arr,n,i+1,mini);
}
int main()
{

    int arr[]={10,30,3,44,32,17,19,66};
    int n=8;

    int maxi=INT_MIN;
    int mini=INT_MAX;
    int i=0;
    findmaxi(arr,n,i,maxi);

    cout<<"maximum number is "<<maxi<<endl;
    findmini(arr,n,i,mini);
    cout<<"minimumnumber is "<<mini<<" ";



    return 0;
}