#include<iostream>
#include<vector>

using namespace std;


int main()
{

    vector<int> arr{1,2,3,4,5,6,8};
    vector<int> brr{3,4,9,10};

    vector<int> ans;

    //outer loop
    for(int i=0; i<arr.size();i++)
    {
        int element =arr[i];
        for(int j=0;j<brr.size();j++)
        {
            if(element ==brr[j])
            {
                ans.push_back(element);
                brr[j]=-1;//it assigns the common to -1 so doesn't print duplicate intersection
            }
        }
    }

        //print ans
        for(auto value: ans)
        {
            cout<<value<<" ";
        }
    


    return 0;
}