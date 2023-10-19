//vector- dynamic array (size not fixed)
//changes with time double gthe size 
//vector<int> arr(10,20,30);
//vector<int>arr(10,-1);



#include<iostream>
#include<vector>

using namespace std;

int main()
{
   
   

    vector<int> arr;
    // int ans=(sizeof(arr)/sizeof(int));
    //   cout<<ans<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(5);

    arr.push_back(7);
    arr.pop_back();
  
    for(int i =0; i<arr.size();i++)
    {
    cout<<arr[i]<<endl;
    }

    int n;
    cout<<"enetr value of n : "<<endl;
    cin>>n;
    vector<int> brr(n,101);
    cout<<"size of b "<<brr.size()<<endl;
     cout<<"capacity of b "<<brr.capacity()<<endl;

    for(int i =0; i<brr.size();i++)
    {
    cout<<brr[i]<<endl;
    }
   
    // arr.empty();



    // vector<int> crr{10,20,30,40,50};

    //  for(int i =0; i<crr.size();i++)
    // {
    // cout<<crr[i]<<endl;
    // }

    vector<int> drr;
    cout<<"drr is empty or not "<<drr.empty();
    return 0;
}