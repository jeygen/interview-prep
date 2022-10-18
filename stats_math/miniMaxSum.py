# Sum the (n-1) smallest and (n-1) largest numbers in a list of n numbers

def miniMaxSum(arr):
    arr.sort()
    
    minarr, maxarr = arr.copy(), arr.copy() 
    minarr.pop(len(arr)-1)
    maxarr.pop(0)
    
    mi, ma = sum(minarr), sum(maxarr) 
    print(f"{mi} {ma}")
       