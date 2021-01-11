vector<long long> nextLargerElement(vector<long long> arr, int n){
    // Your code here
    vector<long long>v;
    stack<long long>s;
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty()&&arr[i]>s.top())
        {
            s.pop();
        }
        s.empty()?v.push_back(-1):v.push_back(s.top());
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}

/*
Input: 
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1

*/
