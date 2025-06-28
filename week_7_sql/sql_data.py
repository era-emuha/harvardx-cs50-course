# import libraries
import csv

# Open the CSV file and read its contents
with open('data.csv', mode='r') as file:
    csv_reader = csv.reader(file)
    
    # Skip the header row
    next(csv_reader)
    
    # Initialize an empty list to store the data
    employee_data = []
    
    # Read each row in the CSV file and append it to the list
    for row in csv_reader:
        print(row)
        employee_data.append(row)


# Open the CSV file and read its contents
with open('data.csv', mode='r') as file:
    csv_dict_reader = csv.DictReader(file)
    
    # Read each row in the CSV file and append it to the dictionary
    employee_data_dict = {}

    for row in csv_dict_reader:
        print(row)  # Print each row as a dictionary
        employee_data_dict[row['id']] = row

# Print the employee data
print(employee_data)
print(employee_data_dict)