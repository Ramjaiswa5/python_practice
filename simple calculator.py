print("****************************************")
print("****************************************")
print("**                                    **")
print("**         WELCOME TO PYTHON          **")
print("**    DESIGN BY RAM BABU JAISWAL      **")
print("**                                    **")
print("****************************************")
print("****************************************")
a=int(input("enter first number  "))
b= int(input("enter second number  "))
print("######################################################")
print("######################################################")
print("##   ******   enert 1 for addition         ******   ##")
print("##   ******   enert 2 for subtraction      ******   ##")
print("##   ******   enert 3 for multiplication   ******   ##")
print("##   ******   enert 4 for division         ******   ##")
print("##   ******   enert 5 for power            ******   ##")
print("##   ******   enert 6 for all operation    ******   ##")
print("######################################################")
print("######################################################")
choice=int(input("enter your choice  "))
if choice==1:
    add=a+b
    print("addition of ",a,"and ",b,"is ",add)
elif choice==2:
    sub=a-b
    print("subtraction of ",a,"and ",b,"is ",sub)
elif choice==3:
    mul=a*b
    print("multiplication of ",a,"and ",b,"is ",mul)
elif choice==4:
    div=a/b
    print("division of ",a,"and ",b,"is ",div)
elif choice==5:
    pow=a**b
    print(a,"power of ",b,"is ",pow)
elif choice==6:
    add=a+b
    sub=a-b
    mul=a*b
    div=a/b
    pow=a**b
    print("addition of ",a,"and ",b,"is ",add)
    print("subtraction of ",a,"and ",b,"is ",sub)
    print("multiplication of ",a,"and ",b,"is ",mul)
    print("division of ",a,"and ",b,"is ",div)
    print(a,"power of ",b,"is ",pow)
else:
    print("enter valid choice ")
    
    

