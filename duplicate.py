def containsDuplicate(nums):
    # Create a set to keep track of unique elements
    unique_elements = set()
    
    # Iterate through the array
    for num in nums:
        # If the element is already in the set, it's a duplicate
        if num in unique_elements:
            return 'true'
        # Otherwise, add the element to the set
        else:
            unique_elements.add(num)
    
    # No duplicates found
    return 'false'
'''
# Example usage:
nums = [1, 2, 3, 4, 5]
result = containsDuplicate(nums)
print(result)  # Output: false

def containsDuplicate(nums):
    # Check if the length of the set is less than the length of the array
    return len(set(nums)) < len(nums)

# Example usage:
nums = [1, 2, 3, 4, 5]
result = containsDuplicate(nums)
print(result)  # Output: False

nums_with_duplicates = [1, 2, 3, 4, 5, 1]
result_with_duplicates = containsDuplicate(nums_with_duplicates)
print(result_with_duplicates)  # Output: True
'''