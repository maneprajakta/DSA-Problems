/*
Link:https://www.programiz.com/java-programming/examples/check-valid-shuffle-of-strings
1XY2 is a valid shuffle of XY and 12
Y1X2 is a valid shuffle of XY and 12     
Y21XX is not a valid shuffle of XY and 12
*/

#include <bits/stdc++.h>
using namespace std;

bool isShuffle(string s1,string s2,string res)
{
     int l1 = s1.length();
     int l2 = s2.length();
     int n = res.length();
     
     if(l1+l2!=n)
     return false;
     
     int i=0;
     int j=0;
     int k=0;
     while(k<n )
     {
        if(s1[i]==res[k])i++;
        else if(s2[j]==res[k])j++;
        else return false;
        k++;
     }
     if(i<l1 && j<l2)
     {
         return false;
     }
    return true;
}

int main()
{
    string s1,s2,res;
    cin>>s1>>s2>>res;
    
    if(isShuffle(s1,s2,res))
    cout<<"YES";
    else cout<<"NO";
    
    return 0;
}
