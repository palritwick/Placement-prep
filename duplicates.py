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