#include<iostream>
#include<string>
#include<vector>
using namespace std;

void checkkey(string& str,int i,int& n,char& key,vector<int>&ans)
{
    if(i>=n)
    {
        return ;

    }
    if(str[i]==key)
    {
        //cout<<"Found at"<<i<<endl;
        ans.push_back(i);
    }
    checkkey(str,i+1,n,key,ans);
    // return ans;
}

int main()
{
    string str="devadnsh";
    int n=str.length();
    char key='d';
    int i=0;
    vector<int>ans;
   checkkey(str,i,n,key,ans);
    //cout<<"the key index is "<<ans<<" ";
    
    cout<<"printing ans"<<endl;
    for(auto val:ans)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}