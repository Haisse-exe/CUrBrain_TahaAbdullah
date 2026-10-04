def EvenCount():
    number = int(input("Enter the number: "))
    condition = True
    count = 0
    if number == 0:
        print("0 has 1 digit which is odd")
        count+=1
    else:
        while condition == True:
            if number == 0:
                condition = False
            else:
                number = int(number/10)
                count+=1
    if count%2 == 0:
        return True
    else:
        return False

print(EvenCount())