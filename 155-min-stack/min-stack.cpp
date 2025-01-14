class MinStack {
public:
    std::stack<long long> st; // Stack to store values
    long long min;            // Track the current minimum value

    MinStack() {
        min = LLONG_MAX;      // Initialize min to the maximum possible value
    }

    void push(int val) {
        if (st.empty()) {
            min = val;         // Update min to the pushed value
            st.push(val);      // Push the value directly
        } else if (val >= min) {
            st.push(val);      // Push the value as is if it's greater than or equal to min
        } else {
            st.push(2LL * val - min); // Encode the value to keep track of the previous minimum
            min = val;         // Update the minimum
        }
    }

    void pop() {
        if (st.empty()) return;

        long long topval = st.top(); // Use long long to handle large values safely
        st.pop();
        if (topval < min) {
            // Decode the previous minimum value
            min = 2LL * min - topval;
        }
    }

    int top() {
        if (st.empty()) return -1;

        long long topval = st.top();
        if (topval < min) {
            // If the top is encoded, return the current minimum
            return static_cast<int>(min);
        } else {
            // Otherwise, return the top value as is
            return static_cast<int>(topval);
        }
    }

    int getMin() {
        // Return the current minimum as an integer
        return static_cast<int>(min);
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