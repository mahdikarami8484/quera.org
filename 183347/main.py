number = int(input())

i = 0
while(number > 1):
    number = number/2
    i+=1
if(number < 1):
    i -= 1
print(i)