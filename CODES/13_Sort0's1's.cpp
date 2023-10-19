#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[7]={0,1,0,1,0,0,1};

    int start =0;
    int end=6;
   
   int i=0;
   while(i!=end)
   {
    if(arr[i]==0)
    {
        swap(arr[start],arr[i]);
        start++;
        i++;
    }
    if(arr[i]==1)
    {
        swap(arr[end],arr[end]);
        end--;
        
    }

   }

for(auto value: arr)
{
    cout<<value<<" ";
}

    return 0;
}