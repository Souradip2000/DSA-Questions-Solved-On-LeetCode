class MyQueue {
public:
    vector<int> arr;
    MyQueue() {
        
    }
    
    void push(int x) {
        arr.push_back(x);
    }
    
    int pop() {
       int ele = arr[0];
        arr.erase(arr.begin());
        return ele;
    }
    
    int peek() {
       return arr[0]; 
    }
    
    bool empty() {
        if(arr.size()==0) return true;
        return false;
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