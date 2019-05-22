def linear_search(A, p):
    #returns index of the element to be found
    #if not present, return -1
    
    for i in range(len(A)):
        if A[i]==p:
            return i
    
    return -1