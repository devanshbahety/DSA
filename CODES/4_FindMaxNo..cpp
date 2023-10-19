#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[]={2,4,1,6,8,9,10,0,19};
    int size = 9;
    int maxi= INT_MIN;
    int min= INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"maximum no. is "<<maxi<<endl;
    cout<<"minimum no. is "<<min<<endl;

    return 0;
}