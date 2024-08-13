#take user input
String1 = input("Enter the String: ")
#initialize string and save reverse of 1st string
String2 = String1[::-1]
#check if both matches
if String1 == String2:
    print("String is palindrome")
else:
    print("String is not palindrome")