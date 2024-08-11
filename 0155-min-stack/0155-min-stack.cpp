class MinStack {
public:
    std::stack<int> primaryStack;
    std::stack<int> minStack;
    MinStack() 
    {
       
        
    }
    
    void push(int val) 
    {
         primaryStack.push(val);
        if (minStack.empty() || val <= minStack.top())
        {
            minStack.push(val);
        }
    }
    
    void pop()
    {
         if (primaryStack.top() == minStack.top()) 
        {
            minStack.pop();
        }
        primaryStack.pop();
        
    }
    
    int top()
    {
         return primaryStack.top();
        
    }
    
    int getMin()
    {
         return minStack.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */