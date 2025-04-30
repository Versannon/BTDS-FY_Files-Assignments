# Implement binary search using recursion
def binary_search(arr, low, high, x):
    if high >= low:
        mid = (high + low) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binary_search(arr, low, mid - 1, x)
        else:
            return binary_search(arr, mid + 1, high, x)
    else:
        return -1

arr = sorted([int(x) for x in input("Enter sorted list of numbers: ").split()])
x = int(input("Enter the number to search: "))
result = binary_search(arr, 0, len(arr) - 1, x)
if result != -1:
    print(f"Element found at index {result}")
else:
    print("Element not found")