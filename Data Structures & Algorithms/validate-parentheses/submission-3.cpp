class Solution {
   public:
    bool isValid(string s) {
        std::vector<char> brackets(s.begin(), s.end());
        std::stack<char> operatorStack;

        std::unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

        for (const auto bracket : brackets) {
            if (mapping.contains(bracket)) {
                // closing bracket
                if (!operatorStack.empty() && operatorStack.top() == mapping[bracket]) {
                    operatorStack.pop();
                } else {
                    return false;
                }

            } else {
                // opening bracket
                operatorStack.push(bracket);
            }
        }

        return operatorStack.empty();
    }
};
