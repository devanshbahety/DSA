//binary search in a array
//#include<algorithm> should be used for inbuilt function
//Using vector
// if(binary_search(v.begin(),v.end(),3))
// {
//     cout<<"found"<<endl;

// }
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

int arr[6]={1,2,3,4,5,6};
if(binary_search(arr,arr+6,3))
{
    cout<<"found"<<endl;

}
else
{
    cout<<"not found"<<endl;




    return 0;
}
}