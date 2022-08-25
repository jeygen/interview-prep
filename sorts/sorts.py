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