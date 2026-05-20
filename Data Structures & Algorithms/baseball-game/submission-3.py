class Solution:
    def calPoints(self, operations: List[str]) -> int:
        resultArray: List[int] = []
        res = 0

        for operation in operations:
            if operation == "+":
                secondValue = resultArray[-1]
                firstValue = resultArray[-2]

                result = firstValue + secondValue
                res += result

                resultArray = [*resultArray,result]

                continue

            if operation == "C":
                res -= resultArray.pop()
                continue

            if operation == "D":
                variable = resultArray[-1]
                value = int(variable) * 2
                res += value
                resultArray = [*resultArray,  value]

                continue

            else:
                resultArray.append(int(operation))
                res += int(operation)
                continue

        return res
