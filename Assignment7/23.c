/*
Which of the following statements are true?.
(1) (void *)0 is a void pointer
(2) (void *)0 is a NULL pointer
(3) int *p=(int *)0; p is a NULL pointer
(4) a[i]==i[a]
(5) a[i][j]== *(*(a+i)+j)



*(void )0 is a void pointer:
Correct. (void *)0 is a null pointer of type void *.

*(void )0 is a NULL pointer:
Correct. In many implementations, (void *)0 is equivalent to NULL, which is a null pointer.

**int p = (int )0; p is a NULL pointer:
Correct. The pointer p is explicitly assigned the value 0, making it a NULL pointer.

a[i] == i[a]:
Correct. In C, the expressions a[i] and i[a] are equivalent. Both expressions mean "the element at index i in the array a."

a[i][j] == ((a + i) + j):
Correct. This is the correct expression for accessing the element at row i and column j in a 2D array a.
Therefore, statements (1), (2), (3), (4), and (5) are all true.*/