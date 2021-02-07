#include <bits/stdc++.h>
using namespace std;

class FindMedian
{
	public:
		void insertHeap(int &);
		double getMedian();
	private:
		double median; //Stores current median
		priority_queue<int> max; //Max heap for lower values
		priority_queue<int, vector<int>, greater<int> > min; //Min heap for greater values
		void balanceHeaps(); //Method used by insertHeap
};


 // } Driver Code Ends


// Function to insert heap
void FindMedian::insertHeap(int &x)
{
	// Your code here
	if(max.size() == 0)
	{
	    max.push(x);
	    getMedian();
	}
	else if(x > max.top())
	{
	    min.push(x);
	    balanceHeaps();
	    getMedian();
	}
	else
	{
	    max.push(x);
	    balanceHeaps();
	    getMedian();
	}
}

// Function to balance heaps
void FindMedian::balanceHeaps()
{
	// Your code here
		if((max.size() - min.size()) == 2)
	{
	    min.push(max.top());
	    max.pop();
	}
	else if((min.size() - max.size()) == 1)
	{
	    max.push(min.top());
	    min.pop();
	}
}

// Function to return getMedian
double FindMedian::getMedian()
{
	// Your code here
	if((max.size() - min.size()) == 1)
	    return max.top();
	else
	    return ((max.top() + min.top())/2);
}


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	FindMedian Ans;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		Ans.insertHeap(x);
    	    cout << floor(Ans.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends
