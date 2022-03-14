print("Welcome to the Love Calculator!")
name1 = input("What is your name? \n")
name2 = input("What is their name? \n")
# 🚨 Don't change the code above 👆

#Write your code below this line 👇
a=name1.lower()
b=name2.lower()
t,r,u,e,l,o,v,e=0,0,0,0,0,0,0,0

t=a.count("t")+b.count("t")
r=a.count("r")+b.count("r")
u=a.count("u")+b.count("u")
e=a.count("e")+b.count("e")
sumtrue=t+r+u+e
l=a.count("l")+b.count("l")
o=a.count("o")+b.count("o")
v=a.count("v")+b.count("v")
e=a.count("e")+b.count("e")
sumlove=l+o+v+e
true=str(sumtrue)
love=str(sumlove)
add=true+love
lovescore=int(add)
if lovescore<10 or lovescore>90:
    print(f"Your score is {lovescore}, you go together like coke and mentos.")
elif lovescore<50 and lovescore>40:
    print(f"Your score is {lovescore}, you are alright together.")
else:
    print(f"Your score is {lovescore}.")

