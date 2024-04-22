#  Write a program to find the sum of all characters and all possible contiguous character combinations from the given string.
# Consider the string S1="321".
# All characters and combinations of contiguous characters from the above string are: 3,2,1,32,21,321.
# Adding all the numbers (3+2+1+32+21+321), we get 380 as the result.

def sum_of_substrings(string):
    total_sum = 0
    for i in range(len(string)):
        for j in range(i, len(string)):
            total_sum += int(string[i:j+1])
    return total_sum
def main():
    S1 = "321"
    contiguous_sum = sum_of_substrings(S1)
    print("Sum of all contiguous character combinations:", contiguous_sum)
if __name__ == "__main__":
  main()