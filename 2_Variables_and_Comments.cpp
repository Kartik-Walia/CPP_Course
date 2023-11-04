// High Level - Logically Sound (Away from hardware)
// Low Level - Nearer to hardware

// Variables are containers to store your data
// DataTypes : int, float, double, char etc.
// SYNTAX for declaring variables 
// Data_type Variable_name = value; 

// Compiler ignores the comments (Lines written with '//' at start)
// Multi-line comments are written within '/* */'

#include <iostream>
using namespace std;

// This is a SIngle line comment

/*
This
is
a
multi-line
comment
*/

int main()
{
    int sum = 6;

    cout << "Hello World!" << sum;

    return 0;
}

/*
RULES TO DECLARE VARIABLES :
1. Variable names can range from 1 to 255 characters.
2. All variable names must begin with a letter of aplhabet or an underscore(_)
3. After first initial letter, variable names can also contain letters and numbers
4. Variable names are case sensitive
5. No spaces or special characters are allowed
6. You cannot use a C++ keyword (a reserved word) as a variable name
*/