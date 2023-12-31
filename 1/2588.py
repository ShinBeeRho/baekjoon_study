#(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
# (1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.

A = int(input())
B = int(input())

Result1 = A * (B%10)
B = B//10
Result2 = A * (B%10)
B = B//10
Result3 = A * B

Result = Result1 + (Result2 * 10) + (Result3 * 100)
print(Result1)
print(Result2)
print(Result3)
print(Result)
