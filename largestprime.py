def largest_prime(n):
    x = 2
    while(n != x):
        if n % x == 0:
            n = n / x
            x = 2
        else:
            x += 1

    return n

print(largest_prime(600851475143))
