def insertion_sort(arr):
    n = len(arr)
    for i in range(1,n):
        key = arr[i]
        j = i-1
        while j>=0 and key < arr[j]:
            arr[j+1] = arr[j]
            j = j-1
        arr[j+1] = key
arr = [90,22,13,9,10,5,6,3]
print("sample list:",arr)
insertion_sort(arr)
print("sorted list:",arr)