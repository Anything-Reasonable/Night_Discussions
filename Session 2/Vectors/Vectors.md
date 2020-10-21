# Vectors

C++ Vector is a sequence of containers that can be changed dynamically. A better substitution of arrays. It is a template library.

The C++ STL (Standard Template Library) is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks.

## When to use a Vector?

When dealing with data elements that change consistently.
If the size of the data is not known before beginning, the vector won't require you to set the maximum size of the container.

## How to use?

1) Header file
`#include <vector` 

1) Initialising vector
`vector <object_type> vector_name`

#### Accessing elements
Different techniques to get an element from the vector by index or position.

1) vector::operator[ ]: The operator is used to reference the element present at a position given inside the operator. It accesses the specified element at position i.
`vector[position]`

2) vector::at(): The at() function is used reference the element present at the position given as the parameter to the function.
`vector.at(position)`

3) vector::front()
The front() function can be used to fetch the first element of a vector container. Returns the reference to the first element of the vector.
`vector.front()`

4) vector::back(): The back() function can be used to fetch the last element of a vector container. Returns the reference to the last element of the vector.
`vector.back()`

#### Modifiers
Modifiers are used for changing the meaning of the specified data type. Here are the common modifiers in C++:

1) vector::push_back(): This modifier pushes the elements from the back.
`vector.push_back(value)`

2) vector::pop_back(): This modifier removes the vector elements from the back.
`vector.pop_back()`

3) vector::insert(): For inserting new items to a vector at a specified location.
`vector.insert (position, value)`

4) vector::erase(): It is used for removing a range of elements from the specified location.
`vector.erase(startpos, endpos)`

5) vector::clear(): It removes all the vector elements.
`vector.clear()`

6) vector::swap(): It swaps the content in vector as well as the contents of one vector with another vector of the same type and size.
`vector1.swap(vector2)`

#### Iterators
The purpose of iterators is to help us access the elements that are stored in a vector. It's an object that works like a pointer. Here are the common iterators supported by C++ vectors:

1) vector::begin(): it gives an iterator that points to the first element of the vector.
`vector.begin()`

2) vector::end(): it gives an iterator that points to the past-the-end element of the vector.
`vector.end()`

3) vector::cbegin(): it's the same as vector::begin(), but it doesn't have the ability to modify elements.
`vector.cbegin()`

4) vector::cend(): it's the same as vector::end() but can't modify vector elements.
`vector.cend()`

#### Capacity
Use the following functions to determine the capacity of a vector:

1) vector::size(): It returns the number of items in a vector.
`vector.size()`

2) vector::max_size(): It returns the highest number of items a vector can store.
`vector.max_size()`

3) vector::capacity(): It returns the amount of storage space allocated to a vector.
`vector.capacity()`

4) vector::resize(): It resizes the container to contain n items. If the vector's current size is greater than n, the back items will be removed from the vector. If the vector's current size is smaller than n, extra items will be added to the back of the vector.
`vector.resize(int n, int value)`

5) vector::empty(): It returns true if a vector is empty, else, it returns false.
`vector.empty()`
