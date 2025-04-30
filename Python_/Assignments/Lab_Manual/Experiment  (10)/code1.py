# Implement bubble sort and analyze its time complexity
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

arr = [int(x) for x in input("Enter numbers to sort: ").split()]
sorted_arr = bubble_sort(arr)
print("Sorted array:", sorted_arr)