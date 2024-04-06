#A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and it reads the same forward and backward. Alphanumeric characters include letters and numbers.
# Given a string s, return true if it is a palindrome, or false otherwise.

def validPalindrome(s):
    s = s.replace(" ","")
    s = s.lower()
    revS = s[::-1]
    if s == revS:
        return True
    return False
strParam = "Too hot to hoot"
print(validPalindrome(strParam))