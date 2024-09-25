#include<stack>
using namespace std;
class MinStack {
public:
    stack<int> st;
    stack<int> mst;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if (mst.empty() || mst.top() >= val) {
            mst.push(val);
        }
    }
    
    void pop() {
        int ele = st.top();
        st.pop();
        if (mst.top() == ele) {
            mst.pop(); 
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mst.empty() ? NULL : mst.top();
    }
};
