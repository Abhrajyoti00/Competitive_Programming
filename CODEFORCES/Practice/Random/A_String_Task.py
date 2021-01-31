s = input()
s = (s.lower())
vowels = ['a','e','i','o','u','y']
mod_string = []
for char in s:
    if char not in vowels:
        mod_string.append('.')
        mod_string.append(char)
print(''.join(mod_string))
