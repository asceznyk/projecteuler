def fibonacci_sum(bound):
    n = 1
    f = [0,1]
    while(f[n] < bound):
        print(f, n)
        f.append(f[n] + f[n-1])
        n += 1

    return f

print(fibonacci_sum(15));
