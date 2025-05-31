# Question:
# 1
# 2 3
# 4 5 6
# 7 8 9 10

num = int (input ("Enter the Number: "))
if num<1:
    print("You enter '0' or Negetive number. Retry...")



count=1
for i in range(1,num+1):
    for j in range(i):
        print(count,end=' ')
        count+=1
    print()