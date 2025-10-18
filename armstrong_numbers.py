def is_armstrong(num):
    digits = str(num)
    power = len(digits)
    return num == sum(int(d)**power for d in digits)

for n in range(100, 1000):
    if is_armstrong(n):
        print(n)
