                                            //commonly asked in an interview.
//brute force approach.
//sort the array first then largest element will be arr[n-1] but we cannot say that second largest will be arr[n-2] because they can be same.
//so loop will start from (n-2)th index
for(int i=n-2;i>=0;i--){
if(arr[i]!=largest){
    secondLargest=arr[i];          //O(n) might have to travel the entire array.
         break;}
}

//T.C:O(nlogn+ n)    :brute force

//Better solution approach:
//we will do the first pass and find out the largest element.


//Optimal solution
