import string # string module contains all the letters of the alphabet

def isPangram(sentence):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet:
        if char not in sentence.lower():
            return False
    return True

def isPangram2(sentence):
    alphabet = string.ascii_lowercase
    for char in alphabet:
        if char not in sentence.lower():
            return False
    return True

def isPangram3(sentence):
    alphabet = set(string.ascii_lowercase)
    return alphabet <= set(sentence.lower())