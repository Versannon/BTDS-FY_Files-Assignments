# Handle ZeroDivisionError and IndexError exceptions
try:
    # ZeroDivisionError example
    result = 10 / 0
except ZeroDivisionError as e:
    print(f"Caught a ZeroDivisionError: {e}")

try:
    # IndexError example
    my_list = [1, 2, 3]
    print(my_list[5])
except IndexError as e:
    print(f"Caught an IndexError: {e}")