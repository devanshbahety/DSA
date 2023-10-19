#include<iostream>
using namespace std;



int firstoccurence(int arr[],int target)
{
    int s=0;
    int e =8;
    int mid =(s+e)/2;
    int ans =-1;

    while(s<=e)
    {

        if(arr[mid]==target)
        {
            //ans store and then goto left
            ans =mid;
            e=mid-1;


        }
        else if(target > arr[mid])
        {
            //right mein search
            s=mid+1;   
        }
        else if(target < arr[mid])
        {
            //left mein jana hai
            e=mid-1;
        }
        mid =(s+e)/2;
        
    }
    return ans;
}
int main()
{
    int v[9]={1,3,4,4,4,4,4,6,7};
    int target =4 ;
    int indexoffirstocc = firstoccurence(v,target);
    

    cout<<"ans is "<<indexoffirstocc<<endl;




    return 0;
}