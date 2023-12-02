temp = 0
n = int(input("please give a number : "))
for i in range(2,n//2):
    if n%i == 0:
        temp=1
        break
if temp == 1:
    print("given number is not prime")
else:
    print("given number is prime")