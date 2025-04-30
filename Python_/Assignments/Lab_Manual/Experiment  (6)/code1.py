# Read and display the contents of a file
file_name = 'example.txt'
try:
    with open(file_name, 'r') as file:
        content = file.read()
        print('File contents:\n', content)
except FileNotFoundError:
    print(f'The file {file_name} does not exist.')