# C++ pointers and references

## pointer VS reference

Reference is an extention of pointer. But, now we can say they are pretty the same thing in terms of how computers deal with them.

**Reference** is to <u> reference an existing variable,</u> while it
- is not a new variable like pointer,
- does not occpy memory.

## How to declare a reference.
```
int& ref = a // compared to int* ptr = &a
```
Then, any mannipulation on ref will be applied to a, while nothing new is being created.


## Function input type: key use of reference
Imagine we hava a function increase_float as
```
void increase_float(float input)
{
    input ++;
} 
```

When we call a funciton and input a variable, computers will
1. create a new variable that is the real *input*,
2. copy the input's valve and past it to the new created variable.

We can save those memory of new variabl with the help of reference.

In this function declaration, referece as input types, **float& input**, can allow use to modify the inputs without copying and creating new varaiables. Memory is saved.

Then, the function is redefined as

```
void increase_float(float& input)
{
    input ++;
} 
```

After calling increase_float, the input will increase by 1.

As a consequence, using reference in function declaration is one key application. It passes the input's reference directly in calling fucntions.