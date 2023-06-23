

# Variadic Functions Project

This project explores the concept of variadic functions in the C programming language. Variadic functions allow you to define functions that can accept a variable number of arguments.

## Getting Started

To get started with the project, follow the instructions below:

1. Clone the repository:

   ```
   $ git clone https://github.com/your-username/variadic-functions-project.git
   ```

2. Navigate to the project directory:

   ```
   $ cd variadic-functions-project
   ```

3. Compile the source code:

   ```
   $ gcc -Wall -Wextra -pedantic -o main main.c variadic_functions.c
   ```

4. Run the program:

   ```
   $ ./main
   ```

## Project Structure

The project directory contains the following files:

- `main.c`: The main program file where the variadic function is called and tested.
- `variadic_functions.c`: The implementation file that defines the variadic function.
- `variadic_functions.h`: The header file that contains the function prototype and necessary includes.

## Usage

The `sum_them_all` function is the main focus of this project. It is defined in `variadic_functions.c` and declared in `variadic_functions.h`. The function takes an unsigned integer `n` as the first parameter, followed by a variable number of arguments. It calculates the sum of all the arguments and returns the result.

To use the `sum_them_all` function in your own code, follow these steps:

1. Include the `variadic_functions.h` header file in your source file:

   ```c
   #include "variadic_functions.h"
   ```

2. Call the `sum_them_all` function and pass the number of arguments and the arguments themselves:

   ```c
   int result = sum_them_all(4, 10, 20, 30, 40);
   ```

   In this example, the function is called with 4 arguments, and it returns the sum of those arguments.

## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.


Feel free to customize the README file according to your project requirements, providing more details or sections as needed.
