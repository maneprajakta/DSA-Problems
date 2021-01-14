#include<bits/stdc++.h>
using namespace std;


 

// Returns the maximum value that  
// can be put in a knapsack of capacity W
int dp[1001][1001];

int answer(int W, int wt[], int val[], int n) 
{ 
   // Your code here
   
   if(n==0 || W==0)
   return 0;
   
   if(dp[n-1][W]!=-1)
   return dp[n-1][W];
   
   if(wt[n-1]<=W)
   {
       return dp[n-1][W]= max(val[n-1]+ answer(W-wt[n-1],wt,val,n-1), answer(W,wt,val,n-1));
   }
   
   else{
       return dp[n-1][W] =  answer(W,wt,val,n-1);
   }
}

int knapSack(int W, int wt[], int val[], int n) 
{  memset(dp,-1,sizeof(dp));
   return answer(W,wt,val,n);   
}




// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        
        //calling method knapSack()
        cout<<knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  
