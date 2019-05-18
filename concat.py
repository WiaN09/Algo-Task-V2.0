def concat(*strings):
    # check if all arguments are strings
    for string in strings:
        assert type(string) == str , f'{string} is not a string'
        
    return ''.join(strings)
