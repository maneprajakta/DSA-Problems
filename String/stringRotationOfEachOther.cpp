/*
link : https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/
str1 = "ABACD"
                     str2 = "CDABA"

     temp = str1.str1 = "ABACDABACD"
     Since str2 is a substring of temp, str1 and str2 are 
     rotations of each other.

*/

#include <bits/stdc++.h>
using namespace std;

bool isSubstring(string s1,string s2)
{
    if(s1.length()!=s2.length())
    return false;
    
    string temp;
    temp = s1+s1;
    
    return (temp.find(s2)!=string::npos);
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    if(isSubstring(s1,s2))
    cout<<"YES";
    else cout<<"NO";
    
    return 0;
}
