# Objects, Types and Values

1. What is meant by the term prompt?

It is a message shown up on the screen to guide user while input a data.
2. Which operator do you use to read into a variable?

>>
3. If you want the user to input an integer value into your program for a
variable named number , what are two lines of code you could write to
ask the user to do it and to input the value into your program?

int number;
cout << "Input integer: ";
cin >> number;

4. What is \n called and what purpose does it serve?

special character, create new line
5. What terminates input into a string?

white space
6. What terminates input into an integer?


7. How would you write

cout << "Hello, ";
cout << fi rst_name;
cout << "!\n";

as a single line of code?

cout << "Hello, " << first_name << "\n";

8. What is an object?

some memory that holds a value of a given type
9. What is a literal?

a way of writting to state a value is a particular type
10. What kinds of literals are there?

"string"
23 integer
23.3 double
'c'  char
true bool
11. What is a variable?

named object
12. What are typical sizes for a char , an int , and a double ?

char 1 byte
int 4 byte
double 8 byte
13. What measures do we use for the size of small entities in memory, such
as int s and string s?
14. What is the difference between = and == ?

= is operator for assignment
== is logical comparison equal
15. What is a definition?

a declaration that sets aside memory for an object.
16. What is an initialization and how does it differ from an assignment?

init = giving a variable its initial value
assignment = giving a variable a new value
17. What is string concatenation and how do you make it work in C++?

addition of two strings variable resulting one string consists of those two
18. Which of the following are legal names in C++? If a name is not legal,
why not?

This_little_pig: legal (usually used for user defined type)
latest thing: not, name should not have space
MiniMineMine: legal (but usually for class)
This_1_is fine: not legal
the_$12_method: not legal
number : legal
2_For_1_special: not legal
_this_is_ok: better not, _ at begining reserved for internal variable
correct?: not legal, spec char
19. Give five examples of legal names that you shouldn’t use because they are
likely to cause confusion.
20. What are some good rules for choosing names?
21. What is type safety and why is it important?
22. Why can conversion from double to int be a bad thing?
23. Define a rule to help decide if a conversion from one type to another is
safe or unsafe.