# C++ Pointer to an Array

Consider the array initialised:

    double *p;
    double balance[10];
    p = balance;

balance is a pointer to &balance[0], which is the address of the first element of the array balance. Thus, the following program fragment assigns p the address of the first element of balance.You can access array elements using *p, *(p+1), *(p+2) and so on.