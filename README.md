# Classes-and-Objects-in-C-plus-plus

## Aim:

To study and implement Classes and Objects in C++.

## Theory:

C++ is an object oriented programming language that allows the use of classes and objects to model real world entities.

A **class** is a user-defined data type that acts as a blueprint for creating objects. It groups data members(variables) and member functions (methods) into a single unit.

An **object** is an instance of a class. Each object has it's own copy of the data members defined in the class, but all objects can use the same member functions. Objects allow interaction with the class's data through well defined interfaces(methods).

## Key Concepts:

**1. Encapsulation**:
Encapsulation is the process of binding data and functions into a single unit (i.e., class). It hides the internal details of the object and only exposes necessary information through public functions.

**2. Abstraction**:
Abstraction means showing only essential features and hiding the complex implementation. In C++, this is achieved through classes and access specifiers.

**3. Accessing Members**:
Objects access the class’s public members using the dot (.) operator. For example:
objectName.memberFunction();

**4. Multiple Objects**:
A class can be used to create multiple objects. Each object has its own separate copy of data members but shares the same functions.

**5. Memory Allocation**:
Memory for data members is allocated when an object is created. Functions do not consume memory for each object—they are shared.

**6. Constructors and Destructors**:

- Constructor: Automatically invoked when an object is created. Used for initialization.

- Destructor: Automatically invoked when an object is destroyed. Used to release resources.

**7. Object Lifetime**:
The lifetime of an object depends on where and how it is declared:

- Local objects exist until the function ends.

- Global or static objects exist throughout the program.

**8. Access Specifiers**:

- Private: Members are accessible only within the class.

- Public: Members are accessible from outside the class using objects.

- Protected: Used mainly in inheritance scenarios.

## 1. Algorithm: Car Details

**Step 1**: Start

**Step 2**: Define a class named Car

- Declare public data members: name and year of type string.

- Define member functions:

- CarName() to input the car's name from the user.

- CarYear() to input the car's year from the user.

- displayCarName() to display the car's name.

- displayCarYear() to display the car's year.

**Step 3**: In the main function:

- Create two objects of the class Car named c1 and c2.

**Step 4**: For object c1:

- Call CarName() to input the car name.

- Call displayCarName() to display the car name.

- Call CarYear() to input the car year.

- Call displayCarYear() to display the car year.

**Step 5**: For object c2:

- Repeat the steps to input and display car name and year similar to c1.

**Step 6**: End

## 2. Algorithm: 

  
