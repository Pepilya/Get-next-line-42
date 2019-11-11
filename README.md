# Get-next-line-42
Get next line - second project of School 21 (Ecole 42).

This projects is about creating a function that, allows to read a line ending with a newline character ('\n') from a file descriptor, without knowing its size beforehand. One of the goal of this project is to learn a highly interesting new concept in C programming: static variables, and to gain a deeper understanding of allocations, whether they happen on the stack memory or in the heap memory, the manipulation and the life cycle of a buffer, the unexpected complexity implied in the use of one or many static variables.

# Return value
return 1 when it read a line
return 0 when it finished reading a file
return -1 when an error occurs
