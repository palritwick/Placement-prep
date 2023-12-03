# Return a single integer the smallest 4 digits number that is greater than num and has  distinct digits.   
# Input: 1234
# Output: 1235

# Input: 1012
# Output: 1023

def find_small(num):
    while True:
        num += 1
        if len(set(str(num))) == len(str(num)) == 4:
            return num
n = int(input())
print(find_small(n))