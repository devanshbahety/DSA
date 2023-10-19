//triplet sum

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[7]={10,20,30,40,50,60,70};
    int size =7;

    //print all pairs
    //outer loop wil traverse for each loop
    for(int i=0;i<size;i++)
    {
        int element = arr[i];

        //for every element , will traverse on aage wale elements
        for(int j=i+1;j<size;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                if(element+arr[j]+arr[k]==80)
            {
               cout<<"("<<element<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
            }
            }
            
            
        }
    }



    return 0;
}