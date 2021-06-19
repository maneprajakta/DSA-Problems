/*

link- https://practice.geeksforgeeks.org/problems/reverse-a-string/1#

You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG
*/

string reverseWord(string str){
    
//first method
 int j = str.length()-1;
 
 for(int i=0;i<str.length()/2;i++)
 {
     swap(str[i],str[j]);
     j--;
 }

 
 //second method
 int start = 0;
 int end =  str.length()-1;
 
 while(start<end)
 {
     swap(str[start],str[end]);
     start++;
     end--;
 }
 
  return str;
}
