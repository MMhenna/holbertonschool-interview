#!/usr/bin/python3

def canUnlockAll(boxes):

    myKey = [0]
    for key in myKey:
        for boxeKey in boxes[key]:
            if boxeKey not in myKey:
                myKey.append(boxeKey)

    if len(myKey) == len(boxes):
        return True
    return False