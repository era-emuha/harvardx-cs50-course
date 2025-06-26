# Data Structures in Python
# List
my_list = []

# Adding elements to the list
for i in range(10):
    my_list.append(i)

# Calculate the AVG of the list
my_avg = sum(my_list) / len(my_list)
print(f"List: {my_list}")
print(f"Average of the list: {my_avg}")

# Dictionary
my_dict = {}
# Adding key-value pairs to the dictionary
for i in range(10):
    my_dict[i] = i * 2
# Calculate the sum of values in the dictionary
my_dict_sum = sum(my_dict.values())
print(f"Dictionary: {my_dict}")
print(f"Sum of values in the dictionary: {my_dict_sum}")

# List of Dictionaries
my_list_of_dicts = []
# Adding dictionaries to the list
for i in range(10):
    my_list_of_dicts.append({'index': i, 'value': i * 3})
# Calculate the sum of 'value' in the list of dictionaries
my_list_of_dicts_sum = sum(d['value'] for d in my_list_of_dicts)
print(f"List of Dictionaries: {my_list_of_dicts}")
print(f"Sum of 'value' in the list of dictionaries: {my_list_of_dicts_sum}")

