 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>v;
        
        int left=0;
        int right=c-1;
        int top=0;
        int bottom=r-1;
        
        while(1)
        {
            if(left>right)
               break;
            for(int i=left;i<=right;i++)
            {
                v.push_back(matrix[top][i]);
            }
            top++;
            
            if(top>bottom)
            break;
             for(int i=top;i<=bottom;i++)
            {
                v.push_back(matrix[i][right]);
            }
            right--;
            
            if(left>right)
            break;
             for(int i=right;i>=left;i--)
            {
                v.push_back(matrix[bottom][i]);
            }
            bottom--;
            
            if(top>bottom)
            break;
             for(int i=bottom;i>=top;i--)
            {
                v.push_back(matrix[i][left]);
            }
            left++;
            
        }
        return v;
    }
