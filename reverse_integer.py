testcase = int(input())
while (testcase != 0):
    n = int(input("Enter integer \n"))
    reverse = 0
    while (n!= 0):
        reverse = (reverse * 10) + (n%10)
        n = (n//10)
    print("Reverse integer is " + str(reverse))
    testcase -= 1
