
//Game of strings 

#include<bits/stdc++.h>
using namespace std;
int longestCommonSubsequence(string text1, string text2) {
       int m = text1.length();
       int n = text2.length();
       int dp[m+1][n+1];
       
       for(int i=0;i<m+1;i++)
       {
           for(int j=0;j<n+1;j++)
               if(i==0 || j==0)
                   dp[i][j]=0;
        }
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(text1[i-1]==text2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
int main()
{
    string s1,s2,s;
    cin>>s1>>s2>>s;
    int m = longestCommonSubsequence(s1,s);
    int n = longestCommonSubsequence(s2,s);
     if(m>=n)
     cout<<"WIN"<<endl;
     else
     cout<<"LOSE"; 
    return 0;
}

//second approach

#include<bits/stdc++.h>
using namespace std;
int Common(string text1, string text2) {
       map<char,int>mp;
       int c=0;
       for(auto x:text2)
       {
           mp[x]=0;
       }
       for(auto x:text1)
       {
           if(mp.find(x)!=mp.end())
           c++;
       }
        return c;
    }
int main()
{
    string s1,s2,s;
    cin>>s1>>s2>>s;
    int m = Common(s1,s);
    int n = Common(s2,s);
     if(m>=n)
     cout<<"WIN"<<endl;
     else
     cout<<"LOSE"<<endl; 
    return 0;
}
   
  //baby chef
  
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int arr[n];
       vector<int>v;
       int sum=0;
       int j=1;
       for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          sum+=arr[i];
          v.push_back(sum/j);
          j++;
      }
      for(auto x:v)
      cout<<x<<" ";
      cout<<endl;
    }
    return 0;
}
   
   // experiment of chef
    #include<bits/stdc++.h>
    using namespace std;
     
     int maxProduct(int nums[] ,int size) {
       
        int res = nums[0], cur_min = nums[0], cur_max = nums[0];
        
        for(int i = 1;i < size;i++ )
        {
            int next_min,next_max;
            cur_min = cur_min * nums[i];
            cur_max = cur_max * nums[i];
            
            next_min = min(cur_min,min(cur_max,nums[i]));
            next_max = max(cur_min,max(cur_max,nums[i]));
            
            cur_min = next_min,cur_max = next_max;
            res = (cur_max > res) ? cur_max : res;
        }
        
        return res;
    }
     
    int main() {
    	
    	int n;
    	cin>>n;
    	int nums[n];
    	for(int i=0;i<n;i++)
    	cin>>nums[i];
    	cout<<maxProduct(nums,n)<<endl;
    	return 0;
    }
     
   
   //new dish
   
#include<bits/stdc++.h>
using namespace std;

bool ifpossible(string s,string u) {
        
        int n = s.length();
        int ind1 = 0;
        int ind2 = 0;
        int flag=1;
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i]==u[j])
                {
                    ind1 = i;
                    ind2 = j;
                }
            }
        }
        int c=0;
        while(c<=n)
        {
            if(s[ind1]==u[ind2])
            {
                ind1 = (ind1+1)%n;
                ind2 = (ind2+1)%n;
                c++;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==0)
        return false;
    return true;
    }

int main() {

	int t;
	cin>>t;
	while(t--)
	{
    string s,u;
	cin>>s>>u;
	if(ifpossible(s,u))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}
	return 0;
}
