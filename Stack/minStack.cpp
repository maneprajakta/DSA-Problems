class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,int>>s;
   
    MinStack() {
        
    }
    
    void push(int x) {
        if(s.empty())
            s.push({x,x});
        else{
            if(s.top().second<x)
            {
                s.push({x,s.top().second});
            }
            else{
                 s.push({x,x});
            }
        }
    }
    
    void pop() {
        if(!s.empty())
        {
          s.pop();       
        }
    }
    
    int top() {
            return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
