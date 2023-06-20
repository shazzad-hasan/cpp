### Variables and Types

Variables are containers for storing data values. 
In C++, there are built-in as well as user defined data types.

##### Built-in

- `int` - integers, without decimals, e.g. 125 or -125

- `double` and `float` - floating point numbers, with decimals, e.g. 15.25 or -15.25.

  |                        | double                         | float                         |
  | ---------------------- | ------------------------------ | :---------------------------- |
  | size                   | 8 bytes                        | 4 bytes                       |
  | precision (In general) | 15 decimal digits of precision | 7 decimal digits of precision |
  | example                | double pi = 3.1416             | float pi = 3.1416f            |

- `char` - single characters (alphabets and all the symbols) surrounded by single quotes, e.g. 'a' or 'A'. 

- `string` - text, surrounded by double quotes, e.g. "Hello World"

- `bool` - boolean values, either true or false

  

##### Creating (declaring) Variables

Syntax: `type variableName = value;`

Example:

```c++
int myNum = 100;               
double myFloatNum = 99.99;      
float myFloatNum = 99.99f;     
char myLetter = 'A';           
string myText = "Hello World"; 
bool myBoolean = true;         
```



​                           