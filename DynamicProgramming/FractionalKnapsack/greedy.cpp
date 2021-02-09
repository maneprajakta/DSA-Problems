
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// function to return fractionalweights


bool cmp(struct Item a,struct Item b)
{
    double r1 = (double)a.value/a.weight;
    double r2 = (double)b.value/b.weight;
    
    return r1>r2;
}
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    
    sort(arr,arr+n,cmp);
    
    double finalvalue=0.0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].weight<=W)
        {
            W-=arr[i].weight;
            finalvalue += arr[i].value;
        }
        else{
           finalvalue += arr[i].value*((double)W/arr[i].weight);  
           break;
         }
    }
    return finalvalue;
}


int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		cout<<fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  
