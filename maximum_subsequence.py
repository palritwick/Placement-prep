#  Find the longest maximum subsequence of a given array 
# Input : arr -> [10,2,9,33,39]
# Output : 4
# Input : arr -> [10,5,32,40,22]
# Output : 3

def lis(arr):
    if len(arr)==0:
        return 0
    count = 1
    max_length = 1
    for i in range(1,len(arr)):
        if(arr[i]>arr[i-1]):
            count+=1
        else:
            max_length = max(max_length,count)
            count = 1
    return max(max_length,count)
arr = list(map(int,input().split()))
print(lis(arr))