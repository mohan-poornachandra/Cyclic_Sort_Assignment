#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={10,2,5,10,9,1,1,4,3,7};
    vector<int> ans;

    int i=0;
    while(i<arr.size())
    {
        
        if(arr[i]==i+1) i++;
        else{
            if(arr[i]==arr[arr[i]-1])//The duplicate element is there!
            {   
                bool flag=true;
                for(int j=0;j<ans.size();j++)
                   if(ans[j]==arr[i]){
                    flag=false;
                    break;
                   }
                if(flag)
                  ans.push_back(arr[i]);
                i++;
            }
            else 
            swap(arr[i],arr[arr[i]-1]);
        } 

    }
    for(int i=0;i<ans.size();i++)
       cout<<ans[i]<<" ";
    cout<<endl;
}
