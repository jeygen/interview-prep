# Python solution for Longest Palindromic Substring (Manacher's Algorithm) O(n) time complexity

# A function to print a substring.
def printSubstring(str, left, right):
    for i in range(left, right + 1):
        print(str[i], end="")


# Implementation of Manacher's Algorithm
def longestPalSubstring(s):

    # If length of given string is n then its length after
    # inserting n+1 "#", one "@", and one "$" will be
    # (n) + (n+1) + (1) + (1) = 2n+3
    strLen = 2 * len(s) + 3
    sChars = [0]*strLen

    # Inserting special characters to ignore special cases
    # at the beginning and end of the array
    # "abc" -> @ # a # b # c # $
    # "" -> @#$
    # "a" -> @ # a # $
    sChars[0] = '@'
    sChars[strLen - 1] = '$'
    t = 1
    for i in s:
        sChars[t] = '#'
        t += 1
        sChars[t] = i
        t += 1

    sChars[t] = '#'

    maxLen = int(0)
    start = int(0)
    maxRight = int(0)
    center = int(0)
    p = [0] * strLen  # i's radius, which doesn't include i
    for i in range(1, strLen - 1):
        if i < maxRight:
            p[i] = min(maxRight - i, p[2 * center - i])

        # Expanding along the center
        while sChars[i + p[i] + 1] == sChars[i - p[i] - 1]:
            p[i] += 1

        # Updating center and its bound
        if i + p[i] > maxRight:
            center = i
            maxRight = i + p[i]

        # Updating ans
        if p[i] > maxLen:
            start = int((i - p[i] - 1) / 2)
            maxLen = p[i]

    # Printing the longest Palindromic substring
    print("The Longest Palindromic Substring is: ", end="")
    printSubstring(s, start, start + maxLen - 1)
    return


# Driver Code
if __name__ == '__main__':
    my_string = "daabddfddbegtd"
    longestPalSubstring(my_string)

###

# Python solution for Longest Palindromic Substring (Brute Force) n**3

# A function to print a substring.
def printSubstring(str, left, right):
    for i in range(left, right + 1):
        print(str[i], end="")

# A function to get the longest palindromic substring in a
# given string using Brute Force Approach.
def longestPalSubstring(str):

    # Getting length of the input string
    n = len(str)

    # All substrings of length 1 are palindromes
    maxLength = 1
    start = 0

    # Checking all the substrings
    for i in range(n):
        for j in range(i, n):
            flag = 1

            # Checking for a palindromic subtring
            for k in range(0, ((j - i) // 2) + 1):
                if str[i + k] != str[j - k]:
                    flag = 0

            # If substring is palindromic
            if flag != 0 and (j - i + 1) > maxLength:
                start = i
                maxLength = j - i + 1

    # Printing the longest Palindromic substring
    print("The Longest Palindromic Substring is: ", end="")
    printSubstring(str, start, start + maxLength - 1)


# Driver Code
if __name__ == '__main__':
    my_string = "daabddfddbegtd"
    longestPalSubstring(my_string)
