//pair sum

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int size =7;

    //print all pairs
    //outer loop wil traverse for each loop
    for(int i=0;i<size;i++)
    {
        int element = arr[i];

        //for every element , will traverse on aage wale elements
        for(int j=i+1;j<size;j++)
        {
            if(element+arr[j]==7)
            {
               cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            }
            // cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
    }



    return 0;
}