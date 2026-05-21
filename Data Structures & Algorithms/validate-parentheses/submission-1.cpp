class Solution {
public:
    bool isValid(string s) {
        std::vector<char> brackets(s.begin(),s.end());
        std::stack<char> operatorStack;

        std::unordered_map<char, char> mapping = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(const auto bracket: brackets) {
            cout << bracket << "+";
            // if opening bracket, 
            if (bracket == '{' || bracket == '(' || bracket == '[') {
                operatorStack.push(bracket);
                continue;
            }

           


            if (operatorStack.empty()) {
                return false;
            }

            if (operatorStack.top() != mapping[bracket]) {
                return false;
            }
            


            operatorStack.pop();


        }

        return operatorStack.empty();
    }
};
