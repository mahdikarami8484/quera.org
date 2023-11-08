number = int(input())

n = 0

for i in range(1, number):
    if(number%i == 0):
        n += i

if(number == n):
    print("YES")
else:
    print("NO")