def arrSubset(arr):
    # Write your code here
    n = len(arr)
    for i in range(1 << n):
        for j in range(n):
            if (i & (1 << j)) > 0:
                print(arr[j], end=" ")
        print()

arr = [1, 2, 3]
arrSubset(arr)

def largestSubset(arr):
    arr.sort()
    n = len(arr)
    count = 0
    asum, bsum = 0, 0
    while (asum <= bsum):
        asum, bsum = 0, 0
        for i in range(0, n-count):
            bsum += arr[i]
        for j in range(n-count, n):
            asum += arr[j]
        count += 1
        #print(arr[n-count+1 : n])
    return arr[n-count+1 : n]
  # works but is too slow
arr = [1, 2, 3]
print(largestSubset(arr))

# faster
def largestSubset2(arr):
    arr.sort()
    n = len(arr)
    count = 0
    asum, bsum = 0, 0
    while (asum <= bsum):
        bsum = sum(arr[0:n-count])
        asum = sum(arr[n-count:n])
        count += 1
    return arr[n-count+1 : n]

arr = [1, 2, 3, 4, 5, 6]
print(largestSubset(arr))