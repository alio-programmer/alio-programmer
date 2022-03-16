row1 = ["⬜️","⬜️","⬜️"]
row2 = ["⬜️","⬜️","⬜️"]
row3 = ["⬜️","⬜️","⬜️"]
map = [row1, row2, row3]
print(f"{row1}\n{row2}\n{row3}")
for i in range(0,9):
    position = input("Where do you want to put the treasure? ")
    row= int(position[0])
    coloumn= int(position[1])
    map[coloumn-1][row-1]=int(input("enter the value to inserted here"))
print(f"{row1}\n{row2}\n{row3}")