print("Welcome to treasure island your mission is to find treasure")
print("you arrive at the entrance of a cave on Drum island")
print("you have to make correct decesion to successfully reach the tresure if you fail you will die")
print("you arrive at a intersection of two paths in the cave one path is going left left and the other goes to right")
a=int(input("choose the correct path \n 1.Right path \n 2.Left path"))
if a==1:
    print("GAME OVER !!! ")
else:
    print("now you arrived at a lake you think of unknown dangers in the lake and stepback and wait but loss is too much so you consider your decision again")
    b=int(input("choose the correct decision to further continue \n 1.Swim \n 2.Wait"))
    if b==1:
        print("after crossing the lake you come across 3 doors of different colour namely red, blue and yellow now you think which door to choose...")
        c=int(input("choose the correct door to reach the treasure \n 1.Blue \n 2.Red \n 3.Yellow "))
        if c==1:
            print("you chose wrong door and is dropped inside the big well and you drowned")
            print("GAME OVER !!!")
        elif c==2:
            print("you chose the wrong door and is devoured by a giant sleeping snake")
            print("GAME OVER !!!")
        else:
            print("CONGRATULATION !!! ... YOU FOUND THE HIDDEN TREASURE OF GOL D ROGER CALLED ONE PIECE !!!")
    else:
        print("because you waited too much the treasure was looted by someone else")
        print("GAME OVER !!!")
