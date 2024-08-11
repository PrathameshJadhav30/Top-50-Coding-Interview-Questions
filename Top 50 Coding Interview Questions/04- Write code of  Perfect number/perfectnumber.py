#Taking input from user
n = int(input("Enter a number: "))
sum = 0
for i in range(1,n):
    if(n% i ==0):
        sum = sum + i
#checking of perfect number
if(sum == n):
    print("The Number is Perfect number")

else:
    print("The number is not a Perfect number")