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
//Initially store first element as largest and then iterate through whole array and store the largest element .
int largest=arr[0];
for(int i=0;i<arr.size();i++){           //O(n)
   if(arr[i]>largest)
     largest=arr[i];
}
//second pass
//Now, keep second largest as -1,   sLargest will be INT_MIN if negatives are there.
sLargest=-1;
for(int i=0;i<arr.size();i++){
   if(arr[i]>sLargest && arr[i]!=largest)       //O(n)
     sLargest=arr[i];
}

//algorithm is taking two passes so O(n+n)=O(2n)

                          //Optimal solution
int largest=arr[0]; 
int sLargest=-1;        //sLargest will be INT_MIN if negatives are there.

//iterate through the array and check each element if it is greater than largest then that element will be second largest, so replace both largest and second largest.

//CODING NINJAS:FIND SECOND LARGEST AS WELL AS SECOND SMALLEST.
int secondLargest(vector<int> &a, int n){
  int largest=a[0];
  int slargest=-1;
  for(int i=1;i<n;i++){
    if(a[i]>largest){
      slargest= largest;
      largest=a[i];
    }
    else if(a[i]<largest && a[i]>slargest){
      slargest =a[i];
    }
  }
  return slargest;
}

int secondSmallest(vector<int> &a,int n){
  int smallest =a[0];
  int ssmallest = INT_MAX;    //we are finding smallest so it has to be a very big number.
  for(int i=1;i<n;i++){
    if(a[i]<smallest){
      ssmallest =smallest;
      smallest=a[i];
    }
    else if (a[i]!= smallest && a[i]<ssmallest ){
     ssmallest=a[i];
  }
  }
  return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a){
  int slargest = secondLargest(a,n);
  int ssmallest = secondSmallest(a,n);
  
  return{slargest,ssmallest};
}

//T.C:O(n)     optimal solution
