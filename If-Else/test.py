import time

start = time.time()

limit = 10_000_000

is_prime = bytearray(b'\x01') * (limit + 1)
is_prime[0] = 0
is_prime[1] = 0

p = 2

while p * p <= limit:
    if is_prime[p]:
        is_prime[p * p : limit + 1 : p] = b'\x00' * (
            ((limit - p * p) // p) + 1
        )
    p += 1

count = sum(is_prime)

last_prime = limit
while is_prime[last_prime] == 0:
    last_prime -= 1

end = time.time()

print("Total prime numbers:", count)
print("Last prime:", last_prime)
print("Time taken:", end - start, "seconds")