# STRUCT
In computer programming, a struct (short for "structure") is a user-defined composite data type that groups together variables of different data types under a single name. It is similar to a class in object-oriented programming, but without methods or encapsulation. A struct can contain any number of variables of any data type, including other structs.
For example: If I have to write a program to store Student information, which will have Student's name, age, branch, permanent address, father's name etc, which included string values, integer values etc, how can I use arrays for this problem, I will require something which can hold data of different types together.

# Algoritm 
The algorithm for using a struct in a C program is as follows:

1. Define the struct using the `struct` keyword, giving it a name and listing the members with their data types.
2. Declare variables of the struct type.
3. Initialize the members of the struct either during declaration or afterwards using the dot (.) operator.
4. Access the members of the struct using the dot (.) operator.
5. Use the struct in your program as needed.

Here is an example of using a struct to store information about a person:

```
// Step 1: Define the struct
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Step 2: Declare variables of the struct type
    struct Person person1;
    struct Person person2;

    // Step 3: Initialize the members of the struct
    strcpy(person1.name, "John");
    person1.age = 30;
    person1.height = 1.8;

    strcpy(person2.name, "Jane");
    person2.age = 25;
    person2.height = 1.6;

    // Step 4: Access the members of the struct
    printf("%s is %d years old and %.2f meters tall\n", person1.name, person1.age, person1.height);
    printf("%s is %d years old and %.2f meters tall\n", person2.name, person2.age, person2.height);

    // Step 5: Use the struct in your program as needed
    return 0;
}
```

In this example, we define a struct called `Person` with three members: `name`, `age`, and `height`. We then declare two variables of the `Person` type, `person1` and `person2`, and initialize their members using the dot (.) operator. Finally, we access and print the members of the structs using the dot (.) operator within `printf` statements.
# My Program
