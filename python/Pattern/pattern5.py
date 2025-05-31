# Question:
#     *
#    ***
#   *****

num = int (input ("Enter the Number: "))
if num<2:
    print("You enter '2' or Negetive number. Retry...")

count=0
for i in range(1,num):
    print(' '*int((num/2)+2 -i),end='')
    print('*'*int(1+count),end='')
    count+=2
    print()