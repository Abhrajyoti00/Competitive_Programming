def deduplicateDataBlocks(dataStream):
    seen = set()
    deduplicated = []
    
    for block in dataStream:
        tuple_block = tuple(block)  # Convert list to tuple to make it hashable
        if tuple_block not in seen:
            seen.add(tuple_block)
            deduplicated.append(block)
    
    return deduplicated

# Example usage:
dataStream = [
    [1, 2, 3], 
    [4, 5, 6], 
    [1, 2, 3], 
    [7, 8, 9], 
    [4, 5, 6], 
    [10, 11, 12]
]

deduplicatedData = deduplicateDataBlocks(dataStream)
print(deduplicatedData)
# Output: [[1, 2, 3], [4, 5, 6], [7, 8, 9], [10, 11, 12]]
