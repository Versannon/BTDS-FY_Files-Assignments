# Count the number of words in a file
file_name = 'example.txt'
try:
    with open(file_name, 'r') as file:
        content = file.read()
        word_count = len(content.split())
        print(f'The file {file_name} contains {word_count} words.')
except FileNotFoundError:
    print(f'The file {file_name} does not exist.')