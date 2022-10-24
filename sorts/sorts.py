class sorts:

    def bubbleSort(self, arr):
        for i in range(0, len(arr) - 1):
            for j in range(0, len(arr) - 1 - i):
                if arr[j] > arr[j+1]:
                    #temp = arr[j]
                    #arr[j] = arr[j+1]
                    #arr[j+1] = temp
                    arr[j], arr[j+1] = arr[j+1], arr[j]
        return arr

arr = [64, 34, 25, 12, 22, 11, 90]
s = sorts()
arr = s.bubbleSort(arr)
for i in range(len(arr)):
    print("% d" % arr[i], end=" ")

    def countingSort(arr):
        # Write your code here
        c = 0
        k = 0
        arr.sort()
        arr2 = []
        '''
        while (c < len(arr)):
            for i in range(len(arr)):
                if arr[i] == c:
                k += 1
            arr2.append(k)
            
            k = 0
            c += 1
        '''
        for i in range(len(arr)):
            arr2.append(arr.count(i))
        
        return arr2

    # smarter way
    def countingSort2(arr):
        tot = [0]*100
        for j in range(0,n):
            temp = arr[j]
            tot[temp] += 1
        return tot