n=int(input("enter the number of elements you want in the series: "))
first=0
second=1
i=1
while(i<=n):
    print(first,end=",")
    third=first+second
    first=second
    second=third
    i+=1
print("\nis the fibonacci series")
