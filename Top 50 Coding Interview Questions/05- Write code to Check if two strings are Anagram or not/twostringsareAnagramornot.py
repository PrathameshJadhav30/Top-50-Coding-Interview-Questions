#take user input
String1 = input('Enter the 1st string :')
String2 = input('Enter the 2nd string: ')
#check if length matches
if len(String1) != len(String2):
    #if false
    print('Strings are not anagram')
else:
    #sorted functions sort string by characters
    String1 = sorted(String1)
    String2 = sorted(String2)
#check if now strings matches
if String1 == String2:
#if true
    print('Strings are anagram')
else:
    print('Strings are not anagram') 