//Game of strings 

#include<bits/stdc++.h>
using namespace std;
int Common(string text1, string text2) {
       map<char,int>mp;
       int c=0;
       for(auto x:text2)
       {  
            mp[x]++;
       }
       for(auto x:text1)
       {
           if(mp.find(x)!=mp.end())
           c=c+mp[x];
       }
        return c;
    }
int main()
{
    string s1,s2,s;
    cin>>s1>>s2>>s;
    int m = Common(s1,s);
    int n = Common(s2,s);
     if(m>n)
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
     
     int maxProduct(long long int nums[] ,int size) {
       
        long long int res = nums[0], cur_min = nums[0], cur_max = nums[0];
        
        for(int i = 1;i < size;i++ )
        {
            long long int next_min,next_max;
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
    	long long int nums[n];
    	for(int i=0;i<n;i++)
    	cin>>nums[i];
    	cout<<maxProduct(nums,n);
    	return 0;
    }
     
   
   //new dish
#include<bits/stdc++.h>
using namespace std;

bool ifpossible(string s,string u) {
        
    if(s.length()!=u.length())
    return false;
    
    string combine = s + s;
    return (combine.find(u)!=string::npos);
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
