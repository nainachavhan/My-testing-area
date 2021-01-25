list_1=[11,5,6,4,9,8]
value=10
print("the list:"+str(list_1))
count=len([ i for i in list_1 if i > value])
print("the number of elements grater than 10:" + str(count))