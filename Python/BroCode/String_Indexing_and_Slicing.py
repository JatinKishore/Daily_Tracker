name = "Bro code"

first_name = name[0:3] # indexing --> string[start:stop:step]
first_name1 = name[:3]

print(first_name)
print(first_name1)

last_name = name[4:8]
last_name1 = name[4:]

print(last_name)
print(last_name1)

funky_name = name[0:8:2] # the n steps decides next charcter at nth position needs to be displayed  
funky_name1 = name[::2]
print(funky_name) # here the charcters at 2 position gaps will be printed
print(funky_name1)


reversed_name = name[::-1] # the steps are counted in reversed manner

print(reversed_name) # reversing a number using indexing method

website = "http://google.com"
website2 = "http://wikipedia.com"

website_name = slice(7,-4)

print(website[website_name])


