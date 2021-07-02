/*
First and last occurrences of x
Given a sorted array arr containing n elements with possibly duplicate elements, 
the task is to find indexes of first and last occurrences of an element x in the given array.

Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5.
*/
int bsfirst(vector<long long> &v, long long x)
{
    int res=-1;
    int first=0;
    int last=v.size()-1;
    int mid;
    
    while(first<=last)
    {
        mid = first +(last-first)/2 ;
        
        if(v[mid]==x)
        {   res=mid;
            last = mid-1;
        }
        else{
            if(x>v[mid])
            first=mid+1;
            else if(x<v[mid])
            last=mid-1;
        }
    }
    return res;
}

int bslast(vector<long long> &v, long long x)
{
    int res=-1;
    int first=0;
    int last=v.size()-1;
    int mid;
    
    while(first<=last)
    {
        mid = first +(last-first)/2 ;
        
        if(v[mid]==x)
        {   res=mid;
            first = mid+1;
        }
        else{
            if(x>v[mid])
            first=mid+1;
            else if(x<v[mid])
            last=mid-1;
        }
    }
    return res;
}

pair<long,long> Indexes(vector<long long> &v, long long x)
{
    // Your code goes here
    int a = bsfirst(v,x);
    int b = bslast(v,x);
    return {a,b};
}
