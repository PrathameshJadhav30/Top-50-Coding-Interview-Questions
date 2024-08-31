#program to count unique elements
def count(arr, n):

    #Mark all arrays elements as not visited
    visited = [False for i in range(n)]

    #Traverse through array elements
    #and count frequencies
    for i in range(n):

        #skip this elements if already
        #processed
        if(visited[i] == True):
            continue

        #count frequency
        count = 1
        for j in range(i + 1, n ,1):
            if(arr[i] == arr[j]):
                visited[j] = True
                count +=1
        if count == 1:
            print(arr[i]);

#Driver code
arr = [10, 20, 40 ,30 , 10, 20 ,50 , 10]
n = len(arr)
count(arr, n)