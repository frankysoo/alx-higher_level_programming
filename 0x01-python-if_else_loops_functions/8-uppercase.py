#!/usr/bin/python3s
def uppercase(str):
    newstring = ""
    for i in str:
        if 'a' <= i <= 'z':
            newstring += chr((ord(i) - ord('a')) + ord('A'))
        else:
            newstring += i
    print("{}".format(newstring))
