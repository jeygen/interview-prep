def diagonalDifference(arr):
    # Write your code here
    sum1, sum2 = 0,0
    for i in range(len(arr)):
        sum1 += arr[i][i]
        sum2 += arr[len(arr)-1-i][i]
        
    return int(abs(sum1-sum2))
        