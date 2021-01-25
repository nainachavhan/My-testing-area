def progression(l):

    
  if len(l) == 1:
        
      return True
    
  else:

        
     diff = l[1] - l[0]
        
     for index in range(len(l) - 1):
            
       if not (l[index + 1] - l[index] == diff):
                
          return False
       
     return True



print(progression([5,7,9,11]))

print(progression([ 5, 8, 9, 11]))