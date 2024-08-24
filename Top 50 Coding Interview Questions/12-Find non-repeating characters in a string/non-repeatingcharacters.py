#take user input
String = input("Enter a String: ")
for i in String:
    #initialize a count variables
    count = 0
    for j in String:
        #check for repeated charcters
        if i == j:
            count+=1
        #if charcter is found more than 1 times
        #brake the loop
        if count > 1:
            break
    #print for non-repeating characters
    if count == 1:
        print(i, end =" ")