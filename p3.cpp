#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mid= (n/2);
    // Upper Half
    for(int i=0;i<=mid;i++)
    {
        for(int j= mid;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<i * 2+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower Half
    for(int i=mid-1;i>=0;i--)
    {
        for(int j= mid;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<i * 2+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   
    return 0;
}