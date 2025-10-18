def sieve_of_eratosthenes(limit):
    primes = []
    sieve = [True] * (limit + 1)
    for p in range(2, int(limit**0.5) + 1):
        if sieve[p]:
            for i in range(p*p, limit + 1, p):
                sieve[i] = False
    for p in range(2, limit + 1):
        if sieve[p]:
            primes.append(p)
    return primes

print(sieve_of_eratosthenes(50))
