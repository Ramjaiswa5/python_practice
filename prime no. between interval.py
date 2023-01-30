a=int(input("enter the begining number"))
b=int(input("enter the ending number"))

for i in range(a,b+1):
    if i > 1:
       for j in range(2, i):
           if (i % j) == 0:
               break
       else:
           print(i)
