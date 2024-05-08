def bubble_sort(arr):
    n = len(arr)
    for i in range(0,n-1):
        for j in range(0,n-i-1):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]
sample_list = [12,90,10,8,9,50]
print("original List: ", sample_list)
bubble_sort(sample_list)
print("SortedList: ", sample_list)