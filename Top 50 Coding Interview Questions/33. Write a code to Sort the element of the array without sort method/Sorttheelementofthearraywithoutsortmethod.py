# Take the main string input from the user
string = input("Enter String:\n") 

# Take the substring to be replaced as input from the user
str1 = input("Enter substring which has to be replaced:\n") 

# Take the substring to replace with as input from the user
str2 = input("Enter substring with which str1 has to be replaced:\n") 

# Replace all occurrences of str1 with str2 in the string
string = string.replace(str1, str2) 

# Print the string after the replacement
print("String after replacement") 
print(string)  # Display the modified string
