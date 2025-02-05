                  //Find square root of an integer.

//brute force approach:
int ans=1;
for(int i=1;i<=n;i++){
  if(i*i<=n){
    ans=i;
  }
  else{
    break;
  }
}
