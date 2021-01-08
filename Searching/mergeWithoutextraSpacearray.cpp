	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=n-1;
	    int j=0;
	    while(i>=0 && j<m)
	    { 
	        if(arr1[i]>arr2[j])
	        swap(arr1[i],arr2[j]);
	        i--;
	        j++;
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
  
  /*
  Input:
N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}
Output: 0 1 2 3 5 6 7 8 9
*/
