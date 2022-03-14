print("Welcome to the tip calculator")
a=float(input("what was the total bill? \n "))
b=float(input("what percentage of tip would you like to give?10, 12 or 15? \n "))
c=float(input("in how many people the bill is gonna split? \n "))
d= a*(b/100)
e= a+d
f= round(e/c,2)
print(f"Each person should pay: {f}")
