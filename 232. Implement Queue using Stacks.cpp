class MyQueue {
public:
    stack<int> stack1; //main stack
    stack<int> stack2;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack1.push(x);
    }
    
    int pop() {
        int result;
        transferStacks(stack1,stack2);
        result = stack2.top();
        stack2.pop();
        transferStacks(stack2,stack1);
        return result;
    }
    
    int peek() {
        int result;
        transferStacks(stack1,stack2);
        result = stack2.top();
        transferStacks(stack2,stack1);
        return result;
    }
    
    bool empty() {
        if(stack1.size() == 0 && stack2.size()==0)
            return true;
        else
            return false;
    }

    void transferStacks(stack<int>& source, stack<int>& dest){
        while(!source.empty()){
            dest.push(source.top());
            source.pop();
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
