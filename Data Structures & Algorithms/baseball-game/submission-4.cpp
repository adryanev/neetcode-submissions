class Solution {
public:
    int calPoints(vector<string>& operations) {
       std::vector<int> resultArray;
        int res = 0;

        for (const std::string& operation : operations) {
            if (operation == "+") {
                // Get the last two scores
                int secondValue = resultArray[resultArray.size() - 1];
                int firstValue = resultArray[resultArray.size() - 2];

                int result = firstValue + secondValue;
                res += result;
                resultArray.push_back(result);
            } 
            else if (operation == "C") {
                // Remove the last score from the total and the record
                res -= resultArray.back();
                resultArray.pop_back();
            } 
            else if (operation == "D") {
                // Double the last score
                int value = resultArray.back() * 2;
                res += value;
                resultArray.push_back(value);
            } 
            else {
                // It's an integer string, convert it to int
                int value = std::stoi(operation);
                resultArray.push_back(value);
                res += value;
            }
        }

        return res; 
    }
};