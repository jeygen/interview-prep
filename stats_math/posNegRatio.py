def plusMinus(arr):
    # Write your code here
    n = len(arr)
    negA, posA = 0,0 
    for e in arr:
        if e == 0:
            continue
        if e < 0:
           negA += 1 
        else:
           posA += 1 
    print(f"{(posA/n):0.6f}")
    print(f"{(negA/n):0.6f}")
    print(f"{((n-posA-negA)/n):0.6f}")