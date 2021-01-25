original_list=[0,10,[20,30],40,50,[60,70,80],[90,100,110,120]
flatten_list = []
 def removenesting(original_list):
for i in original_list:
  if type(i)==list:
    removenesting(i)
 else: 
     flatten_list.append(i)
print("the original  list',original_list)
removenesting(original_list)
print("the list after removing elements:',flatten_list)
