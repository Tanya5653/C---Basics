def selection_sort(arr):
    n =len(arr)
    for i in range(0,n-1):
        mini = i
        for j in range(i+1,n):
            if(arr[j]<arr[mini]):
                mini =j
                arr[i],arr[mini]  = arr[mini],arr[i]
arr = [90,44,78,22,89]
print ("before sorting:", arr)
selection_sort(arr)
print("after sorting: ",arr)
