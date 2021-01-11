class Solution {
    public:
    int celebrity(vector<vector<int> >& M, int n) {
        // code here 
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        while(s.size()>=2)
        {
            int i = s.top();
            s.pop();
            int j=s.top();
            s.pop();
            if(M[i][j]==1)
            {
                s.push(j);
            }
            else{
                s.push(i);
            }
        }
        
        int cand = s.top();
        
        for(int i=0;i<n;i++)
        {
            if(i!=cand)
             {
            if(M[i][cand]==0 || M[cand][i]==1)
               return -1;
             }
        }
        return cand;
    }
};
