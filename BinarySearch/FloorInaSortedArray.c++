           //floor in a sorted array.
//Lower bound: smallest index such that arr[index]>=target.

//search+sorted=binary search.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<=k) {
                ans=mid;
              low=mid+1;
                
            }
            else{
              high=mid-1;
            }
        }
        return ans;
    }
};

//we can simply write:  C++ STL
//(in case of vector)
lb=lower_bound(arr.begin(),arr.end(),x)  //this will return an iterator pointing to that index.
lb=lower_bound(arr,arr+n,x)    //(in case of array)
  //to find that index:
  lb=lower_bound(arr.begin(),arr.end(),x)-arr.begin();

//T.C:O(log2n)
