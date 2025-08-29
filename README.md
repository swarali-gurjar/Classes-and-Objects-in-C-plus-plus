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

## 2. Algorithm: Car Details

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

## 3. Algorithm: Area of a rectangle

**Step 1**: Start

**Step 2**: Define a class named Rectangle_Area

**Step 3**: Declare two public data members:

- length (integer)

- breadth (integer)

**Step 4**: Define three public member functions:

- enter_dimensions()

- Prompt the user to enter the length and breadth of the rectangle.

- Store the input values in length and breadth.

**Step 5**: calculate_area()

- Calculate and return the area using the formula:
area = length × breadth.

**Step 6**: display_area()

- Call the calculate_area() function.

- Display the returned area to the user.

**Step 7**: In the main function:

- Create an object named rect of class Rectangle_Area.

- Call rect.enter_dimensions() to input length and breadth.

- Call rect.display_area() to compute and display the area.

**Step 8**: End
  
## 4. Algorithm: Simple Calculator

**Step 1**: Start

**Step 2**: Define a class named Calculator

- Declare public data members:

- num1 (integer)

- num2 (integer)

**Step 3**: Define public member functions:

- enter_numbers() to input two numbers from the user.

- display_num() to display the two numbers.

- Addition() to return the sum of num1 and num2.

- Subtraction() to return the difference of num1 and num2.

- Multiplication() to return the product of num1 and num2.

- Division() to return the result of division of num1 by num2.

- If num2 is 0, display an error message and return 0.

**Step 4**: In the main function:

- Create an object c1 of the Calculator class.

**Step 5**: Call member functions using the object c1:

- Call enter_numbers() to input two integers.

- Call display_num() to display the entered numbers.

- Call Addition() and store the result in variable sum.

- Call Subtraction() and store the result in variable diff.

- Call Multiplication() and store the result in variable prod.

- Call Division() and store the result in variable div.

**Step 6**: Display the results:

- Print sum, diff, prod, and div.

**Step 7**: End

## 1. Algorithm: 

