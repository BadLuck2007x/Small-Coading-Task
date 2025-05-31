# Question:
# *****
# *   *
# *   *
# *   *
# *****

num = int (input ("Enter the Number: "))
if num<3:
    print("You enter bellow '3' or Negetive number. Retry...")



for i in range(1,num+1):
    for j in range(1,num+1):
        if(i==1 or i==num  or j==1 or j==num):
            print("*",end=' ')
        elif (j<num):
            print(' ',end=' ')
    print()