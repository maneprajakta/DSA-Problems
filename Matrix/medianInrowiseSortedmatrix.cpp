int median(vector<vector<int>> &matrix, int r, int c){
        // code here 
        
        int mine = INT_MAX;
        int maxe = INT_MIN;
        
        for(int i=0;i<r;i++)
        {
            mine = min(mine,matrix[i][0]);
            maxe = max(maxe,matrix[i][c-1]);
        }
        int mid=0;
        int countexp = (1+r*c)/2;
        int count=0;
        while(mine<maxe)
        {   count=0;
            mid = (mine+maxe)/2;
            
            for(int i=0;i<r;i++)
            {
                count=count+(upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin());
            }
            if(count<countexp)
               mine=mid+1;
            else
               maxe=mid;
        }
        return mine;
    }
