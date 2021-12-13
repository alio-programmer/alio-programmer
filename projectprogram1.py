def importantprograms():
    print('''Please choose a chapter from which you want the program
1)Python Fundamentals
2)Data Handling
3)Conditional And Iterative Statements
4)String & List Manipulation
5)Dictionary
6)Sorting''')
for i in range(1,23):
    a=int(input("your choice"))
    if a==1:
        print('''Enter the program no. you want?
1)program to print BMI(body mass index) of a person
2)program to convert temperature in celsius to fahrenheit''')
        b=int(input(" your choice"))
        if b==1:
            print('''PROGRAM-1

#program to print BMI(body mass index) of a person
weight=float(input("enter weight in kg"))
height=float(input("enter heightin meter"))
bmi=weight/(height**2)
print("BMI is:",bmi)''')
        else:
            print('''PROGRAM-2
ss
#program to convert temperature in celsius to fahrenheit
cels=float(input("enter temperatue in celsius :"))
fahr=cels*9/5+32
print("temperature in fahrenheit is :",fahr''')
    elif a==2:
        print('''PROGRAM

#program to read base/length(L),width(w) and height(h) of a parallelogram and calculate its area and perimeter
L=float(input("enter length of the parallelogram : "))
w=float(input("enter width of the parallelogram : "))
h=float(input("enter heaight of the parallelogram : "))
area=L*h
perimeter=2*1+2*w
print("the area of the parallelogram is :",area)
print("the perimeter of the given parallelogram is :",perimeter)''')
    elif a==3:
        print('''Enter the program no. you want?
1)python code to add the numbers up to (and including) a given value N and print the result
2)to find the lowest and second lowest integer from 10 integers
3)to print fibonacci series upto a required no.
4)write a python program that displays first 10mersenne no.
5)program to print BMI of a person and gives its nutritional status
6)python program to find sum of series s=1+x+x^2+x^3+...+x^n
7)python program to input two numbers and print their lcm and hcf
8)program to print the half diamond shape
9)program to print the sum of s=(1)+(1+2)+(1+2+3)+(1+2+3+...+n)''')
        b=int(input("your choice"))
        if b==1:
            print('''PROGRAM-1

#python code to add the numbers up to (and including) a given value N and print the result
n=int(input("enter number"))
sum=0
i=1
while i<=n:
                sum=sum+i
                i=i+2
print(sum)''')
        elif b==2:
            print('''PROGRAM-2

#to find the lowest and second lowest integer from 10 integers
small = smaller = 0
for i in range (10):
    n=int(input("enter number:"))
    if i==1:
        small==n
    elif i== 1:
        if n<= small:
            smaller = n
        else:
            smallern = small
            small = n
    else:
        if n< smaller:
            small=smaller
            smaller = n
        elif n< small:
            small = n
print("the lowest number is : ",smaller)
print("the second lowest number is : ",small)''')
        elif b==3:
            print('''PROGRAM-3

#to print fibonacci series upto a required no.
first=0
second=1
a=int(input("enter the no. of terms of which series is required"))
print(first)
print(second)
for i in range(1,a):
                third=first + second
                print(third)
                first,second=second,third''')
        elif b==4:
            print('''PROGRAM-4

#write a python program that displays first 10mersenne no.
print("first 10 mersenne no. are :")
for i in range(1,11):
                mersum=2**a-1
                print(mersum,end="")
print()''')
        elif b==5:
            print('''PROGRAM-5

#program to print BMI of a person and gives its nutritional status
weight=float(input("enter weight in kg"))
height=float(input("enter height in m"))
bmi=weight/(height**2)
print("BMI is : ",bmi,end=" ")
if bmi<18.5:
                print("underweight")
elif bmi<25 :
                print("normal")
elif bmi<30 :
                print("overweight")
else :
                print("obese")''')
        elif b==6:
            print('''PROGRAM-6

#python program to find sum of series s=1+x+x^2+x^3+...+x^n
x=float(input("enter value of x:"))
n=int(input("enter value of n(for x^n):"))
s=0
for a in range(n+1):
                s+=x**a
print|("sum of first",n,"terms:",s)''')
        elif b==7:
            print('''PROGRAM-7

#python program to input two numbers and print their lcm and hcf
x=int(input("enter first no."))
y=int(input("enter second number :"))
if x>y:
                smaller = y
else:
                smaller = x
for i in range(1,smaller+1):
                if((x%i==0) and (y%i==0)):
                                hcf=i
                lcm=(x*y)/hcf
                print("the H.C.F of ",x,"and",y,"is",hcf)
                print("the L.C.M of",x,"and",y,"is",lcm)''')
        elif b==8:
            print('''PROGRAM-8

#program to print the half diamond shape
for i in range(1,12):
                for j in range(1,i,1):
                print("*",end="")
                print()
                i+=1               
for i in range(10,1,-1):
                for j in range(i,1,-1):
                print("*",end="")
                print()''')
        else:
            print('''PROGRAM-9

#program to print the sum of s=(1)+(1+2)+(1+2+3)+(1+2+3+...+n)
sum=0
n=int(input("how many terms?"))
for a in range(2,n+2):                       #added 2 to n because started with 2
                term=0
                for b in range(1,a):
                                term+=b
                print("term",(a-1),":",term)
                sum+=term
print("sum of",n,"term is",sum)''')
    elif a==4:
        print('''Enter the program no. you want?
1)program to traverse a string(one letter per line)
2)program that reads a line and substring and print its no. of of occurences in the line
3)program that takes a string and capitalises its first letter
4)program to find the longest substring which contains consonants
5)program to print element of list['q','w','e','r','t','y']in separate line along with indexes(positive and negative)
6)program to calculate mean of a given list of no.
7)program to search for an element in a given list
8)program to count frequency of a given element in a list of no.''')
        b=int(input("your choice"))
        if b==1:
            print('''PROGRAM-1

#program to traverse a string(one letter per line)
str1=input("enter a sringh :")
print("the",str1,"in reverse order is")
length=len(str1)
for a in range(-1,(-length-1),-1):
                print(str1[a]''')
        elif b==2:
            print('''PROGRAM-2

#program that reads a line and substring and print its no. of of occurences in the line
line=input("enter the line")
str1=input("enter the substring:")
length=len(line)
lensub=len(str1)
start=count=0
end=length
while true:
                pos=line.find(str1,start,end)
                if pos !=1
                                count+=1
                                strat=pos+lensub
                else:
                                break
                if start>+length:
                                break
print("no. of occurences of",sub,":",count)''')
        elif b==3:
            print('''PROGRAM-3

#program that takes a string and capitalises its first letter
string = input("enter a string:")
length=len(string)
a=0
emd=length
string2=' '                   #empty string
while a<length:
                if a==0:
                                string2+=string[0].upper()
                                a+=1
                elif(string[a]==' ' and string[a+1] !=' '):
                                string2+=string[a]
                                string2=+string[a+1].upper()
                                a+=2
                else:
                                string2+=string[a]
                                a+=1
print("original string:",string)
print("capitalized word string",string)''')
        elif b==4:
            print('''PROGRAM-4

#program to find the longest substring which contains consonants
string=input("enter a string:")
length=len(string)
maxlength=0
maxsub=' '
sub=' '
lensub=0
for a in range(length):
                if string[a] in 'aeiou' or string[a] in 'AEIOU':
                                if lensub>maxlength:
                                maxsub=sub
                                maxlegth=lensub
                                sub=' '
                                lensub=0
                else:
                                sub+=string[a]
                                lensub=leb(sub)
                a=+1
print("maximum length consonant substring is :",maxsub,end=' ')
print("with,maxlength,"characters")''')
        elif b==5:
            print('''PROGRAM-5

#program to print element of list['q','w','e','r','t','y']in separate line along with indexes(positive and negative)
L=['q','w','e','r','t','y']
length=len(L)
for a in range(length):
                print("at indexes",a,"and",(a-length),"element:",L[a])''')
        elif b==6:
            print('''PROGRAM-6

#program to calculate mean of a given list of no.
lst=eval(input("enter list:")
length=len(lst)
mean=sum=0
fpor i in range(0,length):
                sum+=lst[i]
mean=sum/length
print("given list is:",lst)
print("the mean of the given list is:",mean)''')
        elif b==7:
            print('''PROGRAM-7

#program to search for an element in a given list
lst=eval(input("enter list:")
length=len(lst)
element=int(input("enter element to be searched for:"))
for i in range(0,length):
                if element==lst[i]:
                                print("element found at:",i)
                                break
                else:
                print(element,"not found in given list")''')
        else:
            print('''PROGRAM-8

#program to count frequency of a given element in a list of no.
lst=eval(input("enter list :"))
length=len(lst)
element=int(input("enter element:"))
count=0
for i in range(0,length):
                if element == lst[i]:
                                count+=1
if count==0:
                print(element,"not found in given list")
else:
                print(element,"has frequency as",count,"in given list")''')
    elif a==5:
        print('''PROGRAM

#program to create a dictionary containings names of competion winner as key and no.of their wins as values
n=int(input("how many students?"))
compwinner={}
for i in range(n):
                key=input("name of the students:")
                value=int(input("no.of competition won:"))
                compwinner[key]=value
print("the dictionary now is :")
print(compwinner)''')
    else:
        print('''Enter the program no. you want?
1)program to sort a list using bubble sort
2)program to sort a sequence using insertion sort''')
        b=int(input("your choice"))
        if b==1:    
            print('''PROGRAM-1

#program to sort a list using bubble sort
alist=eval(input("enter a list"))
print("original lis is ",alist)
n=len(alist)
#traverse through all list elements
for i in range(n):
    for j in range(0,n-i-1):
        if alist[j]>alist[j+1]:
            alist[j],alist[j+1]=alist[j+1],alist[j]
print("list after sorting:",alist)''')
        else:
            print('''PROGRAM-2

#program to sort a sequence using insertion sort
alist=eval(input("enter the list"))
print("original list is:",alist)
for i in range(1,len(alist)):
    key = alist[i]
    j=i-1
    while j>=0 and key<alist[j]:
        alist[j+1]=alist[j]
            j=j-1
        else:
            alist[j+1]=key
print("list after sorting :",alist)''')
importantprograms()