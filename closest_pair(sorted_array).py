import sys 

def printClosest(arr, n, x): 
	res_l = res_r = 0 # To store indexes of result pair 
	temp = sys.maxsize # variable to store current minimum difference	 

	for i in range(n-1): 
		for j in range(i+1, n): 
			# if found more closest pair 
			if abs(arr[i] + arr[j] - x) < temp: 
				res_l = i 
				res_r = j 
				temp = abs(arr[i] + arr[j] - x) 
	
	print("The closest pair is", arr[res_l], "and", arr[res_r]) 

#driver code 
arr = [10, 22, 28, 29, 30, 40] 
x = 54
n = len(arr) 
printClosest(arr, n, x) 