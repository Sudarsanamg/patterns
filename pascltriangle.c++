#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> arr={1,1};
    vector <int> ans={};
    int num=5;
    //lines
    for(int i=1;i<=5;i++)
    {
        //space
        for(int j=num-1;j>=1;j--)
        {
            cout<<" ";
        } 
        num--;
        if(i==1)
        {
            cout<<1;
            cout<<"\n";
        }
        else if(i==2)
        {
            cout<<arr[0]<<" "<<arr[1];
            cout<<"\n";
        }
        else
        {
            ans.push_back(1);
            for(int a=0;a<arr.size()-1;a++)
            {
                int s=arr[a]+arr[a+1];
                ans.push_back(s);
            }
            ans.push_back(1);
            for(int val:ans)
            {
                  cout<<val<<" ";
            }
            ans.swap(arr);
            ans.clear();
            cout<<"\n";
        }
    }
    return 0;   
}