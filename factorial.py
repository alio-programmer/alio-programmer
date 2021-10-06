n=int(input("enter number for which you want factorial: "))
factorial=1
i=1
while(i<=n):
    factorial*=i
    i+=1
print("the factorial of the number ", n ,"is", factorial)