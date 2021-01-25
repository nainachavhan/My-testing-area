numbers = [71,72,73,74,75,76,77,78,79,80]

squared_numbers = [number ** 2 for number in numbers]

list1=[squared_numbers]

numbers.extend(list1)

print(list1)
