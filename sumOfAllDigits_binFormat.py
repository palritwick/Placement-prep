# Find the sum of all digits in binary format of given num
# Input : 15
# Binary rep: 1111
# Output : 4

n = int(input())
b = bin(n)
# print(b) #binary representation of n  
sum=0
for i in b:
    if i=='1':
        sum+=1
print(sum) 