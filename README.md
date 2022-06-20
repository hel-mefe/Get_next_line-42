<a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl2mijeuk000609l9mjany0lo/project/2425265" alt="hel-mefe's 42 get_next_line Score" /></a>

# What is Get_Next_Line All About ?

Imagine getting back in time to the time where programmers were facing problems of reading input line by line from the terminal or from a file,
imagine encoutering the same problems the oldest programmers have encoutered such as Dennis Ritchie, Ken Thompson and Brian Kernighan when
they were first working on Unix OS at Bell Labs.

Well, this project is about making a function called Get_next_line which will read a line from a file using a static buffer with an already defined
size.

# What that really means ?

Get_next_line is a function that takes one argument and it is an integer that represents the file descriptor of an open file bound with your program.
Once you call Get_next_line for the first time, it gets you the 1st line, once you recall Get_next_line for the 2nd time it will reads the next line which is the 2nd line from your file, once you recall it
a third time it will returns you the 3rd line and so on ...

It may seem like an easy task, but the difficulty resists in making a dynamic function that works in all the cases, as long as the buffer is defined by
the user then your function should not override that buffer.

If I give to that buffer as a user a size of 1337 (BUFFER_SIZE=1337), then your function must read the file I have given you 1337 characters by 1337 characters, and once 
all the characters have been read from your file, Get_next_line is supposed to keep returning you a NULL pointer which means that the file have been read entirely 
and there is no other lines to be read.

# Algorithm

I have used 

# BONUS PART!
