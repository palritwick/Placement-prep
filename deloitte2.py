# Deloitte 16th Feb Coding questions --->
# 1.Double Character problem 
# Input: helloworld
# Output: hheelllloowwoorrlldd

# str = input()
# s = ""
# for i in str:
#     s+=i*2
# print(s)

# 2. Find the sum of a specified levelof an equal BST which is created by an given array
# Input:
# 6
# 1 2 3 4 5 6
# 3
# Equal BST
#        4
#      /   \
#     2     6
#    / \   /
#   1   3 5 

# Output :  15

def sum_at_level(elements, level):
    start_index = 2 ** (level - 1) - 1
    end_index = min(start_index * 2, len(elements))
    level_sum = sum(elements[start_index:end_index])
    return level_sum

total_elements = int(input())
elements = list(map(int, input().split()))
level = int(input())

print(sum_at_level(elements, level))