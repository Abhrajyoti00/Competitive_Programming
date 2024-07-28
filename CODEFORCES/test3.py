def numberOfSubint(m, k):
    m_str = str(m)
    length = len(m_str)
    count = 0
    
    for i in range(length - k + 1):
        sub_str = m_str[i:i + k]
        sub_int = int(sub_str)
        
        # To avoid division by zero, skip substrings which result in 0
        if sub_int != 0 and m % sub_int == 0:
            count += 1
    
    return count

# Test cases
print(numberOfSubint(500, 1))  # Output: 1
print(numberOfSubint(224, 2))  # Output: 0
