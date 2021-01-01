

int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
    set<int>mp;
    int c=0;
    
    for(int i=0;i<n;i++)
    {
        mp.insert(a[i]);
    }
    
    for(int i=0;i<m;i++)
    {
        if(mp.find(b[i])!=mp.end())
        {
            c++;
            mp.erase(b[i]);
        }
        
    }
    
    return c;
}


vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    
    vector<int>v;
    
    int i = 0, j = 0; 
    
    while (i < n && j < m){ 
        if (arr1[i] < arr2[j])
        {  if(i==0||arr1[i]!=arr1[i-1])
            v.push_back(arr1[i++]); 
        }
        else if (arr2[j] < arr1[i]){
            if(j==0||arr2[j]!=arr2[j-1])
            v.push_back(arr2[j++]); 
        }
        else { 
            if(j==0||arr2[j]!=arr2[j-1])
            v.push_back(arr2[j++]);
            i++; 
        } 
    } 
  
    /* Print remaining elements of the larger array */
    while (i < n) 
        if(i==0||arr1[i]!=arr1[i-1])
        v.push_back(arr1[i++]);
  
    while (j < m) 
       if(j==0||arr2[j]!=arr2[j-1])
        v.push_back(arr2[j++]);
    
    return v;
}
