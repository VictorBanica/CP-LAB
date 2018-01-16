min = 32000
max = -32000
numbers = []
n = int(input("Input number of integers: "))

for i in range(0,n):
     x = int(input())
     numbers.append(x)

for i in range(0,n):
    if numbers[i] < min:
        min = numbers[i]
    if numbers[i] > max:
        max = numbers[i]
print("\nThe minimum of the sequence is", min)
print("The maximum of the sequence is", max)
