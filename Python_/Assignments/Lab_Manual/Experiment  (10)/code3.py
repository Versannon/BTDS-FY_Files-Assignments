# Implement linear search and analyze its time complexity
def linear_search(arr, x):
    for i in range(len(arr)):
        if arr[i] == x:
            return i
    return -1

arr = [int(x) for x in input("Enter list of numbers: ").split()]
x = int(input("Enter the number to search: "))
result = linear_search(arr, x)
if result != -1:
    print(f"Element found at index {result}")
else:
    print("Element not found")