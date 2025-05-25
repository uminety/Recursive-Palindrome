# Recursive Palindrome
## About
The **Recursive Palindrome** is an academic implementation of recursive functions in C, for the purpose of evaluating if a word, a phrase, or a sequence reads the same backwards as forwards, e.g. "madam" or "nurses run".

### Requirements and Set-up
Using *gcc* compiler, compile *main.c* as such: **gcc -o main main.c** - and execute giving the sequence as an argument.

### Program architecture

#### main function:
The main function processes the argument, calls the recursive function, and prints if it is palindrome or not.

#### palindrome function:
Gets the sequence as an argument, takes its length and calls recursively the function **tester** until all the characters of the sequence are checked.

#### tester function:
Checks if the first character is the same as the last one.

### Contributions
For the purposes of contribution to this work, feel free to use it whatever you feel appropriated.