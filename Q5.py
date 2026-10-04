num = int(input("Enter a number: "))
print(num)
digit =0
answer=[]
while num != 0:
    digit = num%10
    if digit % 2 == 0:
        answer.append(0)
    else:
        answer.append(digit)
    num//=10
answer.reverse()
print(answer)