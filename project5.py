import random
letters=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
numbers=['1','2','3','4','5','6','7','8','9','0']
symbols=['!','@','#','$','%','^','*','(',')']
print("welcome to the password generator")
nr_letters=int(input("how many letters you want"))
nr_numbers=int(input("how many numbers you want"))
nr_symbols=int(input("how many symbol you want"))

password_list=[]
password=""
for char in range(1 , nr_letters+1):
    password_list.append(random.choice(letters))
for char in range(1 , nr_numbers+1):
    password_list.append(random.choice(numbers))
for char in range(1 , nr_symbols+1):
    password_list.append(random.choice(symbols))

print(password_list)
random.shuffle(password_list)
for char in range(len(password_list)):
    password+=password_list[char]
    
print(password)