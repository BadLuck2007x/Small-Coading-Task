# Question:
# *
# * *
# *  *
# *   *
# *****

num = int (input ("Enter the Number: "))
if num<3:
    print("You enter bellow '3' or Negetive number. Retry...")



count=1
for i in range(1,num+1):
    for j in range(1,num+1):
        
        if(j==1 or i==num):
            print("*",end=' ')
        elif(j==count):
            print("*",end=' ')
        else:
            print(' ',end=' ')
    count +=1
    print()