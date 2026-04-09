class MinStack {
private:
stack<long>stac;
long min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(stac.empty()){
            stac.push(0);
            min=val;
        }
        else{
            stac.push(val-min);
            if(val<min){
                min=val;
            }
        }
    }
    
    void pop() {
        if(stac.empty()) return;
        long po=stac.top();
        if(po<0){
            min=min-po;
        }
        stac.pop();
    }
    
    int top() {
        long top=stac.top();
        return (top>0) ? (top+min) : (int)min ;
    }
    
    int getMin() {
        return (int)min;
    }
};
