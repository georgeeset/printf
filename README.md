# _printf()

## ALX team project

**Team Members:**

*Esetevbe George*

*Egbetamah Oghenero*

**Objective**

- Create an immitation of printf() c function.
- The main objective of this team project is to enable us master the act of coding c functions from scratch with collaboration.
- this will help improve communication skill and introduce us to working in as a team to solve probelms.

---

### Formatted Output with _pritf() function

---

One of the common task in every program requires printing of some values to allow us get a visual feed back of status or result. There are numerus functions used to print formatted output but printf() is quite rubbust that you can print out multiple characters and other data types together. The seperation and presentation procedure is done in the printf function to ensure all data types are processed and displayed as intended.

In order to send clear command to the printf() function, Texts has to be specified by special characters called specifier. The main specifier of data type in printf() is the % sign followed by any of the listed characters.

## Conversion Specifiers:


| Spesifier | Description                                                        |
| :---------- | -------------------------------------------------------------------- |
| %c        | convert an int to a n unsigned character and print result as ascii |
| %i / %d   | print signed integer decimal number                                |
| %u        | print unsigned decimal number                                      |
| %o        | print unsigned octal number                                        |
| %x        | print hexadecimal in lower case                                    |
| %X        | Print hexadecimal in upper case                                    |
| %s        | print the string pointed to by a char *                            |
| %p        | Print a void * argument in hexadecimal                             |
| %%        | Print a sinble '%' character                                       |
| ...       | ...                                                                |

**Syntax Example:**

`int _printf(const char *format-string, argument-list);`
