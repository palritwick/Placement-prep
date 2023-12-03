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