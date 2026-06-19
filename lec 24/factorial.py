import math

# Calculate exact 212! and apply the modulo
ans = math.factorial(212) % (10**9 + 7)
print(ans)