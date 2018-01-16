import math

def reverse(num):
    rev = 0
    while num > 0:
        rev = rev * 10 + num % 10
        num = num // 10
    return rev


n1 = int(input("Input first number: "))
n2 = int(input("Input second number: "))


print("First sqrt: ", math.sqrt(n1))
print("Second sqrt: ", math.sqrt(n2))
print("N1 to power N2: ", n1**n2)
print("First reverse: ", reverse(n1))
print("Second reverse", reverse(n2))