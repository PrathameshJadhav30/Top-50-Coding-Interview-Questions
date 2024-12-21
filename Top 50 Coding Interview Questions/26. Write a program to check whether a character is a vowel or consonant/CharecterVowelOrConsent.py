# Function to check whether a character is a vowel or consonant
def check_character(ch):
    # Convert the character to lowercase for simplicity
    ch = ch.lower()

    # Check if the character is an alphabet
    if ch.isalpha():
        # Check if the character is a vowel
        if ch in 'aeiou':
            print(f"{ch} is a vowel.")
        else:
            print(f"{ch} is a consonant.")
    else:
        print(f"{ch} is not an alphabet.")

# Input from the user
char = input("Enter a character: ")

# Validate input length
if len(char) == 1:
    check_character(char)
else:
    print("Please enter only one character.")
