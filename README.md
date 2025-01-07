# Interview-Questions
This will be a place where I put code from technical interviews that I like and any discussions we had in the interview about the code.

## listcounter.c
  I was asked to write a program that will create a specified number of links in a linked list, and then a second method that walk through the linked list and count the number of links in the list. I chose to add the random number generater instead of asking the user to choose a number. During the interview, the employer asked me what the time complexity of the program was, and then had me explain each method and the time complexity for each method. He then asked if I could devise a way to make the addNewLink() method havea constant run-time instead of an N runtime. I told him that if I had written the code to place the new link at the head instead of the tail, it would be a faster method with a constant runtime. 
