# Array_operations
operations
This repository is about array and array operations 
  
First of all ...what is an array ?????
 
ARRAY

Arrays:- When there is a need to use many variables then There is a big problem because we will Conflict with name of variables So that in this Situation where we wants to Operate on many numbers then we can use array . The Number of Variables also increases the complexity of the Program. So that we uses Arrays.
Arrays are Set of Elements having same datatype or we can Say that Arrays are Collection of Elements having same name and same data type But Always Remember Arrays are Always Start From its index value and the index of array is start From 0 to n-1. 

  
Suppose we wants to Access 5th Element of array then we will use 4th Element Because Arrays are Start From 0 and arrays are always stored in Continuous Memory Locations The Number of Elements and Types of array are Identified by Subscript of array Elements. The Various types of Array those are provided by c as Follows:- 

  
1.    Single Dimensional Array 

2.    Two Dimensional Array

3.    Three Dimensional array 

4.     Character Array or Strings. 

  
A dimensional is used representing the elements of the array for example 

                                     int a[5] 
                                     
The [] is used for dimensional or the sub-script of the array that is generally used for declaring the elements of the array For Accessing the Element from the array we can use the Subscript of the Array like this 

                                    a[3]=100 
                                    
This will set the value of 4th element of array 

So there is only the single bracket then it called the Single Dimensional Array 

This is also called as the Single Dimensional Array 

  
2) Two Dimensional Array or the Matrix 

    The Two Dimensional array is used for representing the elements of the array in the form of the rows and columns and these are used for representing the Matrix A Two Dimensional Array uses the two subscripts for declaring the elements of the Array 
    
                   Like this int a[3][3] 
                   
So This is the Example of the Two Dimensional Array In this first 3 represents the total number of Rows and the Second Elements Represents the Total number of Columns The Total Number of elements are judge by Multiplying the Numbers of Rows * Number of Columns in The Array in the above array the Total Number of elements are 9 

  
3) Multidimensional or the Three Dimensional Array :The Multidimensional Array are used for Representing the Total Number of Tables of Matrix A Three dimensional Array is used when we wants to make the two or more tables of the Matrix Elements for Declaring the Array Elements we can use the way like this 

                                                                    int a[3][3][3] 
                                                                    
  
In this first 3 represents the total number of Tables and the second 3 represents the total number of rows in the each table and the third 3 represents the total number of Columns in the Tables 

                             So this makes the 3 Tables having the three rows and the three columns 
                             
          The Main and very important thing about the array that the elements are stored always in the Contiguous in the memory of the Computer 
          
  
4) Character Array of String: -Like an integer characters are also be in the Array The Array of Characters are called as the Strings They are Generally used for representing the Strings Always Remember that a String is Terminated with the \0 or Null Character 
  
  
There are the built in string Operation those are provided by the C Language in the String.h Header file Like 

  
1) strLen For Getting the Length or Total Numbers of Characters in String 

2) strconcat This is Used for Joining the two Strings or This function is used for Concatenating the two Strings. 

3) strRev This Function is used for obtaining the Reverse of the String 

4) strcmp This Function is used for Comparing the Two Strings and it gives us the Result as follows after comparing the Two Strings 

  
                   it Returns us + value 
                   
                             if String1 is Greater than String2 
                             
  
                   it Returns us the - Value 
                   
                             if String1 is Less than String2 
                             
  
                   it Returns us the 0 
                   
                             if string1 is Equals to String2 
                             
  
Like The array elements of Integer Types The Character array also are the Single Dimensional or The Two Dimensional Array 

  
        Single Dimensional Array The Single Dimensional array are used for creating the Number of characters like 
        
char name[10] 

in this we can use the 10 characters on the name variable Means we can give the name as 10 characters long 

  
2) Two Dimensional array :-
When we talk about the Two Dimensional of the Character array The first Subscript of the array if used for representing the Total Numbers of Strings and the second Subscript is used for defining the length of the array Characters in the String 
like This 

                                                             char name[5][10] 
                                                             
  
It declares the 5 names and each having the characters up to 10 So the First Subscript is used for defining the total number of the Strings and the Second is used for Length of the Characters 

