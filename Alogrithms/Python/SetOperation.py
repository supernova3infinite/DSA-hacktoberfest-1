#Set Operation in Python
# Creating a Set with
# a mixed type of values
# (Having numbers and strings)
Set = set([1, 2, 'Cool', 4, 'For', 6, 'Cool'])
print("\nSet with the use of Mixed Values")
print(Set)

# Accessing element using
# for loop
print("\nElements of set: ")
for i in Set:
	print(i, end =" ")
print()

# Checking the element
# using in keyword
print("Geeks" in Set)

#Ouput
Set with the use of Mixed Values
{1, 2, 4, 6, 'For', 'Cool'}

Elements of set: 
1 2 4 6 For Cool 
True
