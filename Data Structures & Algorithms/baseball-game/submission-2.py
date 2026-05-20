class Solution:
    def calPoints(self, operations: List[str]) -> int:
        resultArray: List[int] = []

        for operation in operations:
            if operation == "+":
                secondValue = resultArray[-1]
                firstValue = resultArray[-2]

                result = firstValue + secondValue

                resultArray = [*resultArray,result]

                continue

            if operation == "C":
                resultArray.pop()
                continue

            if operation == "D":
                variable = resultArray[-1]
                value = int(variable) * 2

                resultArray = [*resultArray,  value]

                continue

            else:
                resultArray.append(int(operation))
                continue

        return sum(resultArray)
