
class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int number = 0;
        int result = 0;
        int sign = 1;

        for (char c : s) {
            if (isdigit(c)) {
                number = (number * 10) + (c - '0');
            } else if (c == '+') {
                result += number * sign;
                number = 0;
                sign = 1;
            } else if (c == '-') {
                result += number * sign;
                number = 0;
                sign = -1;
            } else if (c == '(') {
                st.push(result);
                st.push(sign);
                result = 0;
                sign = 1;
            } else if (c == ')') {
                result += number * sign;
                number = 0;
                int last_sign = st.top(); st.pop();
                int last_result = st.top(); st.pop();
                result = last_result + (last_sign * result);
            } else if (isspace(c)) {
                continue;
            }
        }

        result += number * sign;
        return result;
    }
};
