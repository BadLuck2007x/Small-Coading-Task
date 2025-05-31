# Question:
# 1
# 12
# 123
# 1234

num = int (input ("Enter the Number: "))
if num<1:
    print("You enter '2' or Negetive number. Retry...")


for i in range(1,num+1):
    for j in range(1,i):
        print(j,end=' ')
    print()
