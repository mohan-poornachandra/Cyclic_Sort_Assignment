//In an array where no. are from 1 to n, there is a no. missing and a no. is repeated. 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={2,4,1,3,2};
    vector<int> ans;

    int i=0,idx=-1;//idx is to track that duplicate element.
    while(i<arr.size())
    {
        
        if(arr[i]==i+1) i++;
        else{
            if(arr[i]==arr[arr[i]-1])//The duplicate element is there!
            {   
                idx=i;
                i++;
            }
            else 
            swap(arr[i],arr[arr[i]-1]);
        } 

    }
    cout<<"["<<arr[idx]<<","<<idx+1<<"]"<<endl;
}
