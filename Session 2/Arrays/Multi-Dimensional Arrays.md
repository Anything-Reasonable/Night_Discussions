# C++ Multi-dimensional Arrays

### General form
`type name[size1][size2]...[sizeN]`
But, we use 2D arrays generally.
`type name[x][y]` 

### Two-Dimensional Arrays
It looks like:
<img src= "https://www.tutorialspoint.com/cplusplus/images/two_dimensional_arrays.jpg" >

Thus, every element in array a is identified by an element name of the form a[ i ][ j ], where a is the name of the array, and i and j are the subscripts that uniquely identify each element in a.

1. Initializing Two-Dimensional Arrays
    int a[3][4] = {  
    {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
    {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
    {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
    }; 

2. Accessing Two-Dimensional Array Elements
`int val = a[2][3];`
