# C++ Passing Arrays to Functions
C++ does not allow to pass an entire array as an argument to a function. However, You can pass a pointer to an array by specifying the array's name without an index.

>Can not pass 2D arrays

# How to pass an array o functions?

### 1. Formal parameters as a pointer

>void myFunction(int *param) {
>}`

### 2. Formal parameters as a sized array

>void myFunction(int param[10]) {
>}

### 3. Formal parameters as an unsized array

>void myFunction(int param[]) {
>}
