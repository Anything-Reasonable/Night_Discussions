# Queue

Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first.

![](https://www.tutorialspoint.com/data_structures_algorithms/images/queue_example.jpg)

------------

### Basic Operations
Queue operations may involve initializing or defining the queue, utilizing it, and then completely erasing it from the memory. Here we shall try to understand the basic operations associated with queues −

```
enqueue() − add (store) an item to the queue.
dequeue() − remove (access) an item from the queue.
peek() − Gets the element at the front of the queue without removing it.
isfull() − Checks if the queue is full.
isempty() − Checks if the queue is empty.
```

-----------

### Enqueue
##### Queues maintain two data pointers, front and rear
![](https://www.tutorialspoint.com/data_structures_algorithms/images/queue_enqueue_diagram.jpg)
Step 1 − Check if the queue is full.
Step 2 − If the queue is full, produce overflow error and exit.
Step 3 − If the queue is not full, increment rear pointer to point the next empty space.
Step 4 − Add data element to the queue location, where the rear is pointing.
Step 5 − return success.

------------

### Dequeue
##### Access the data where front is pointing and remove the data after access.

![](https://www.tutorialspoint.com/data_structures_algorithms/images/queue_dequeue_diagram.jpg)

Step 1 − Check if the queue is empty.
Step 2 − If the queue is empty, produce underflow error and exit.
Step 3 − If the queue is not empty, access the data where front is pointing.
Step 4 − Increment front pointer to point to the next available data element.
Step 5 − Return success.

------------


#### All in one 
![](https://he-s3.s3.amazonaws.com/media/uploads/cf1e1c1.png)

------------

### peek
```
begin procedure peek
   return queue[front]
end procedure
```
### isFull
```
begin procedure isfull
   if rear equals to MAXSIZE
      return true
   else
      return false  
end procedure
```
### isEmpty
```
begin procedure isempty
   if front is less than MIN  OR front is greater than rear
      return true
   else
      return false   
end procedure
```

------------

## Queue variations
The standard queue data structure has the following variations:
- Double-ended queue
- Circular queue

#### Double-ended queue

In a standard queue, a character is inserted at the back and deleted in the front. However, in a double-ended queue, characters can be inserted and deleted from both the front and back of the queue.

#### Circular queue

A circular queue is an improvement over the standard queue structure. In a standard queue, when an element is deleted, the vacant space is not reutilized. However, in a circular queue, vacant spaces are reutilized.</br>
![](https://he-s3.s3.amazonaws.com/media/uploads/51fe410.png)

------------



### Comparison between standard queue and circular queue

![](https://i.imgflip.com/4jvs7e.jpg)
##### Standard Enqueue
```cpp
void enqueue(int queue[], int element, int& rear, int arraySize) {
    if(rear == arraySize)            // Queue is full
            printf(“OverFlow\n”);
    else{
         queue[rear] = element;    // Add the element to the back
         rear++;
    }
}
```
##### Circular Enqueue
```cpp
void enqueue(int queue[], int element, int& rear, int arraySize, int& count) {
    if(count == arraySize)            // Queue is full
            printf(“OverFlow\n”);
    else{
        queue[rear] = element;
        rear = (rear + 1)%arraySize;
        count = count + 1;
    }
}
```

>Difference --> rear = (rear + 1)%arraySize;

This line of code assign the rear pointer again at the 0 index.
Condition: 0 index have no element


