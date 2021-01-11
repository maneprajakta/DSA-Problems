int evaluatePostfix(string &str)
{
    stack<int>st;
    
    for(auto x:str)
    {
        if(x >= '0' && x <= '9')
        {
            st.push(x-'0');
        }
        else
        {
            int a = st.top();
            st.pop();
            
            int b = st.top();
            st.pop();
            
            if(x == '*')
            {
                st.push(a*b);
            }
            else if(x == '/')
            {
                st.push(b/a);
            }
            else if(x == '+')
            {
                st.push(a+b);
            }
            else if(x == '-')
            {
                st.push(b-a);
            }
        }
    }
    
    return st.top();
}
