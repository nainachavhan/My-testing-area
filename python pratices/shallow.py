my_list=[[2,3,4],['a','b','c']]

print('id of my_list',hex(id(my_list)))

new_list=my_list

print('id of new_list',hex(id(my_list)))

new_list.append([7,9,8])

print('new list',new_list)

print('my_list',my_list)