# Deloitte 16th Feb Coding questions --->

# 1.Given n lines of 1d-array, you have to find sum of the elements of the array which are even times occur in the array
# Input
#  2 
# 1 2
# 1 2
# Output : 6
# Explanation: 1 two times and 2 two times => sum = 1+1+2+2 = 6

n = int(input()) #num of lines of input
matrix=[]
for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)
counts = {}
for row in matrix:
    for num in row:
        if num in counts:
            counts[num]+=1
        else:
            counts[num]=1
total=0
for num, count in counts.items():
    if count%2 == 0:
        total+= num*count
print(total)

# 2. Convert given string str to it's corrosponding ASCII char value. Return the sum of all ASCII values.
# Input: Hello World
# Outout: 1052

input_string = input()
total = 0
for char in input_string:
    total += ord(char)
print(total)