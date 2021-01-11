// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function to convert infix expression
//to postfix expression

int prec(char x)
{
    if(x=='^')
    return 3;
    else if(x=='*' || x=='/')
    return 2;
    else if(x=='+' || x=='-')
    return 1;
    else
    return -1;
}

string infixToPostfix(string s)
{
    // Your code here

    stack<char>st;
    st.push('N');
    string res="";
    
    for(auto x:s)
    {
        if((x>='a' && x<='z')||(x>='A' && x<='Z'))
        res+=x;
     
     else
     {   
        if(x=='(')
        st.push(x);
        
     else{   if(x==')')
        {
            while(st.top()!='N' && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            if(st.top()=='(')
              st.pop();
        }
        else{
            while(st.top()!='N' &&  prec(x)<=prec(st.top()))
            {
                res+=st.top();
                st.pop();
            }
            st.push(x);
        }
        }
     }
    }
    while(st.top()!='N')
    {
        res+=st.top();
        st.pop();
    }
    return res;
}


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        cout<<infixToPostfix(exp)<<endl;
    }
    return 0;
}
