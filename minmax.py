# import sys
# A = {12,7,4,1,5,10,-5}
# def minmaxElement(A):
#     A = sorted(A)
#     min = A[0]
#     max = A[-1]
#     print("Max = "+str(max)+" Min = "+str(min))
# minmaxElement(A)

# #Time complexity : O(n log(n))
# # Auxiliary Space : O(1)

A = {12,7,4,1,5,10,-5}
min = min(A)
max = max(A)
print("Max = "+str(max)+" Min = "+str(min))

# Time Complexity: O(n)
# Auxiliary Space: O(1), as no extra space is used