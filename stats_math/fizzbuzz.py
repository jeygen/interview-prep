def fizzbuzz(n):
    if n % 3 == 0 and n % 5 == 0:
        return "FizzBuzz"
    elif n % 3 == 0:
        return "Fizz"
    elif n % 5 == 0:
        return "Buzz"
    else:
        return n

def fizzbuzz2(n):
    return "FizzBuzz" if n % 3 == 0 and n % 5 == 0 else "Fizz" if n % 3 == 0 else "Buzz" if n % 5 == 0 else n

