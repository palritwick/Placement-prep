# Accenture On Campus Drive Dec 2023
# 4th dec 2nd slot 2023

# If the string contain more uppercase letters then you should return the string in uppercase only, or else if the string contain more lowercase letters then you should return the string in lower case only.
# Input: MADam
# Output: MADAM
s = input()
cap=0
sm=0
for i in s:
    if i>'A' and i<'Z':
        cap+=1
    if i>'a' and i<'z':
        sm +=1
if(cap>sm):
    print(s.upper())
else:
    print(s.lower())