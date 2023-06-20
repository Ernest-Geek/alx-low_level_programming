# init_dog

The `init_dog` function is a C function that initializes a variable of type `struct dog` with provided values for the name, age, and owner.

## Function Signature

```c
void init_dog(struct dog *d, char *name, float age, char *owner);
```

## Parameters

- `d`: A pointer to a `struct dog` that will be initialized.
- `name`: A pointer to a string representing the name of the dog.
- `age`: A floating-point value representing the age of the dog.
- `owner`: A pointer to a string representing the owner of the dog.

## Function Description

The `init_dog` function takes a pointer to a `struct dog` and initializes its members with the provided values. It assigns the `name`, `age`, and `owner` values to the corresponding members of the structure.

If the provided pointer `d` is `NULL`, the function does nothing and returns.

## Example Usage

```c
#include "dog.h"
#include <stdlib.h>

int main() {
    struct dog my_dog;
    init_dog(&my_dog, "Buddy", 5.5, "John");

    // Access and print the initialized dog's information
    printf("Dog name: %s\n", my_dog.name);
    printf("Dog age: %.1f\n", my_dog.age);
    printf("Dog owner: %s\n", my_dog.owner);

    return 0;
}
```

## Compilation

To compile a program that uses the `init_dog` function, make sure to include the `"dog.h"` header file and link against the necessary libraries, if any.

Example compilation command using GCC:

```
gcc main.c dog.c -o program
```.
