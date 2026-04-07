class MinStack {
public:
    vector<int> minStack;
    vector<int> minimum;
    MinStack() {
        
    }
    
    void push(int val) {
        minStack.push_back(val);
        if(minimum.size()>0){

        if(val<=minimum[minimum.size()-1]){
            minimum.push_back(val);
        }   
         }else{
            minimum.push_back(val);
         }
         
         }
    
    void pop() {
        int lastelement = minStack.back();
        minStack.pop_back();
        int size = minimum.size()-1;
        if(lastelement == minimum[size]){
            minimum.pop_back();
        }
    }
    
    int top() {
        int top = minStack[minStack.size()-1];
        return top;
    }
    
    int getMin() {

        return minimum.back();
    }
};
