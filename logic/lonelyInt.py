def lonelyinteger(a):
    answer = 0
    for candidate in a:
        answer ^= candidate # xor
    return answer