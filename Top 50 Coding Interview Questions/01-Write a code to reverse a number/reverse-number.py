num = int(input("Enter the number:"))
temp = num
reverse = 0
while num >0:
    remainder = num % 10
    reverse = (reverse *10) + remainder
    num = num // 10

print("The given number is {} and reverse is {}".format(temp , reverse))    