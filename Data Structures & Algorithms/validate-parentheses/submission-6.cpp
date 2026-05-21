class Solution {
   public:
    bool isValid(string s) {
        std::stack<char> operatorStack;

        std::unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

        for (const auto bracket : s) {
            // opening bracket
            if (!mapping.contains(bracket)) {
                operatorStack.push(bracket);
                continue;
            }
            // closing bracket
            if (operatorStack.empty() || operatorStack.top() != mapping[bracket]) {
                return false;
            }
            operatorStack.pop();
        }

        return operatorStack.empty();
    }
};
