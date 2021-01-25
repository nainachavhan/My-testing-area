def find_len(list1): 
    length = len(list1) 
    list1.sort() 
   
    print("Second Largest element is:", list1[length-2]) 
    print("Second Smallest element is:", list1[1]) 
   
list1=[12, 45, 2, 41, 31, 10, 8, 6, 4] 
Largest = find_len(list1) 