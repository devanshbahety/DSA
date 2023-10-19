#include<iostream>
#include<vector>
using namespace std;

bool sorted(int v[],int n,int i)
{
    if(i==n-1)
    {
        return true;
    }
    if(v[i+1]<v[i])//false only for less than case
    {
        return false;
    }
    return sorted(v,n,i+1);
}
int main()
{

    int v[]={10,40,30,40,50,60};
    int n=6;
    int i=0;
    bool issorted=sorted(v,n,i);
    if(issorted)
    {
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"not sorted";
    }

}