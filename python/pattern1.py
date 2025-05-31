# Question:
# 1
# 2 4
# 3 6 9
# 4 8 12 16

num = int (input ("Enter the Number: "))
if num<1:
    print("You enter '0' or Negetive number. Retry...")

for i in range(num):
    for j in range(i+1):
        print((i+1)*(j+1),end=' ')
    print()