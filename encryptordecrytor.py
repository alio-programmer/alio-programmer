def decrypt(new_message,n):
    decrypt1=""
    n=shift
    new_message=text
    for letter in new_message:
        position=alphabet.index(letter)
        new_position=position-5
        new_letter=alphabet[new_position]
        decrypt1+=new_letter
    print(decrypt1)

def encrypt(plain_text,shift_amount):
    cypher_text=""
    new_position=0
    for letter in plain_text:
        position=alphabet.index(letter)
        new_position=position+shift_amount
        new_letter=alphabet[new_position]
        cypher_text+= new_letter
    print(f"the encoded text is {cypher_text}")
alphabet=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
          'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',' ',' ',' ',' ',' ',' ',' ','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
n=True
while n:
    direction=input(f"type 'en' to encrypt and 'dc' to decrypte:\n")
    text=input("Type your message:\n").lower()
    shift=int(input("Type the shift number:\n"))
    if direction=="en":
        encrypt(plain_text=text,shift_amount=shift)
    elif direction=="dc":
        decrypt(new_message=text,n=shift)
    permission=int(input("1 to continue and 0 to stop"))
    if permission==1:
        n=True
    elif permission==0:
        n=False
        
