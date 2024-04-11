# You are given a password containing alphabates and numbers, you have to validate the password which have to follow these rules:
#  1. It has minimum 7 charecters and may contain maximum 31 charecters.
#  2. It must have atleast one integer.
#  3. It must have atleast one uppercase and one lowercase letter.
#  4. It may contain exclamation or any mathematical symbol.
#  5. Doesn't have any special charecters in it.
# If all these conditions are satisfied then declare the password as a valid else invalid
# Input: str: "Leet!code==123" Output: true
# Input: str: "ha@ckerRank#coding" Output: false

import re
def validate_password(password):
    # Rule 1: Check length
    if len(password) < 7 or len(password) > 31:
        return False
    
    # Rule 2: Check for at least one integer
    if not any(char.isdigit() for char in password):
        return False
    
    # Rule 3: Check for at least one uppercase and one lowercase letter
    if not any(char.islower() for char in password) or not any(char.isupper() for char in password):
        return False
    
    # Rule 4: Check for mathematical or exclamation symbols
    if re.match("^[a-zA-Z0-9!+-/*^%=]+$", password):
        return True
    
    # Rule 5: Check for special characters
    if re.match("^[a-zA-Z0-9!+-/*^%]*$", password):
        return True
    else:
        return False

# Test cases
print(validate_password("Leet!code==123"))  # Output: True
print(validate_password("ha@ckerRank#coding"))  # Output: False