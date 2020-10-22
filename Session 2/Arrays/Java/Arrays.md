# Java Array
Java array is an object which contains elements of a similar data type. Additionally, The elements of an array are stored in a contiguous memory location. It is a data structure where we store similar elements. We can store only a fixed set of elements in a Java array.

<img src= "./array.gif" >

## How to use?

1. Declaring Arrays
dataType[] arr; (or)  
dataType []arr; (or)  
dataType arr[];  

2. Instantiation  Arrays
arr = new datatype[size];  

Example : int a[]=new int[5];	//Both declaration and instantiation at a time

3. Initialization and Accession is done with same syntax as in C++.


##Advantages of Arrays
-Code Optimization: It makes the code optimized, we can retrieve or sort the data efficiently.
-Random access: We can get any data located at an index position.

##Disadvantages of Arrays
-Size Limit: We can store only the fixed size of elements in the array. It doesn't grow its size at runtime. To solve this problem, collection framework is used in Java which grows automatically.
-Insertion and Deletion of elements in between cannot be done easily , it take a lot of time.



##for each loop for iterables
for(data_type variable:array){  
//body of the loop  
}  

Example : 
		class Testarray1{  					| Output:
			public static void main(String args[]) {  	| 33
				int arr[]={33,3,4,5};  		| 3 
				//printing array using for-each loop	| 4 
				for(int i:arr)  			| 5
				System.out.println(i);  		|
				}					|
			}						|
		}  							|







