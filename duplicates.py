# Find all the repeating elements of an integer array.With a constant spece
def printduplicates(arr, n):
    for i in range(0, n): 
        index = arr[i] % n 
        arr[index] += n 
    for i in range(0, n): 
        if (arr[i]/n) >= 2: 
            print(i, end=" ") 
arr = [1, 6, 3, 1, 3, 6, 6] 
arr_size = len(arr) 
  
print("The repeating elements are:")
printduplicates(arr,arr_size)

# Find factorial of a large number.
# def factorial(n):
#     f = 1
#     for i in range(2,n):
#         f *= i
#     return f
# print(factorial(100))

# Time Complexity - O(n)
# Space Complexity - O(1)