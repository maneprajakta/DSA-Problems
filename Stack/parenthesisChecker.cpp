bool ispar(string x)
{
    stack<char>st;
    int c=0;
    for(int i=0;i<x.length();i++)
    {   
        if(x[i]=='('||x[i]=='['||x[i]=='{')
        {
            st.push(x[i]);
            c++;
        }
        if(x[i]==')'&& !st.empty() && st.top()=='(')
        {
            st.pop();
        }
         if(x[i]=='}'&& !st.empty() && st.top()=='{')
        {
            st.pop();
        }
         if(x[i]==']'&& !st.empty() && st.top()=='[')
        {
            st.pop();
        }
    }
    if(st.empty() && 2*c==x.length())
    return true;
    return false;
}
