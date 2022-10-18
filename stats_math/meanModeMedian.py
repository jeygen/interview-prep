def mean(arr):
    return sum(arr)/len(arr)

def median(arr):
    arr.sort()
    if len(arr)%2 == 0:
        return (arr[len(arr)//2] + arr[len(arr)//2 - 1])/2
    else:
        return arr[len(arr)//2]

def mode(arr):
    arr.sort()
    count = 0
    mode = arr[0]
    for i in range(len(arr)):
        if arr.count(arr[i]) > count: # count the number of times the current element appears in the list
            count = arr.count(arr[i])
            mode = arr[i]
    return mode