//Brute force approach:
//We will sort the array and print the largest element
//T.C: Sorting (any one merge sort,quick sort) takes O(nlogn)
//S.C: quick sort O(1) ignoring recursive stack space.

//Better approach:
//we do not have a better approach for this.

//Optimal approach:
//we have to optimise nlogn 
//Let's say we keep a largest variable(assume first element to be the largest)
//then, traverse through the array and check if any other element is greater than largest variable.
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largestElement=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largestElement){
                largestElement=arr[i];
            }
        }
        return largestElement;
    }
};

//T.C:O(n)        much better than the brute force solution.
