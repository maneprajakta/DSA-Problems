/*

Given a fraction. Convert it into a decimal. 
If the fractional part is repeating, enclose the repeating part in parentheses.
 

Example 1:

Input: numerator = 1, denominator = 3
Output: "0.(3)"
Explanation: 1/3 = 0.3333... So here 3 is 
recurring.

*/

	string fractionToDecimal(int num, int den) {
	    // Code here
	    string ans=to_string(num/den);
	    int que=0;
	    int rem=0;
	    map<int,int>mp;
	    
	    if(num%den==0)
	    {
	        return ans;
	    }
	    else{
	       
	        ans+=".";
	        rem = num%den;
	       while(rem!=0)
	       {
	           if(mp.find(rem)!=mp.end())
	           {
	             int len = mp[rem];
	             ans.insert(len,"(");
	             ans+=")";
	             break;
	           }
	           else{
	               mp[rem] = ans.length();
	               rem = rem*10;
	               que = rem/den;
	               ans = ans+to_string(que);
	               rem=rem%den;
	           }
	       }
	    }
	   return ans;
	}
