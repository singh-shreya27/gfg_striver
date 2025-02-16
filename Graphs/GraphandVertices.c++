//   Graph and Vertices

class Solution {
  public:
    long long count(int n) {
        // your code here
        //calculate the number of edges
         long long edges=(1LL*n*(n-1))/2;
        //calculate the number of undirected graphs as 2^edges.
         return(1LL<<edges);
    }
};

//T.C:O(1)
//S.C:O(1)

//We use bitwise left shift (1LL << edges), which is equivalent to 2^edges but faster than pow(2, edges).

