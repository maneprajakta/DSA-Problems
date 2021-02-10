/*
link : https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1
For an integer N find the number of trailing zeroes in N!.

Example 1:

Input:
N = 5

Output:
1
*/

int trailingZeroes(int N)
    {
        // Write Your Code here
        if(N<5)
        return 0;
        return N/5+trailingZeroes(N/5);
    }
