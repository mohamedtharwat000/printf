# Custom printf Function

This project is a custom implementation of the `printf` function in C. It provides a simplified version of the standard `printf` function with support for various format specifiers and flags.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Format Specifiers](#format-specifiers)
- [Flags](#flags)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The `printf` function is a widely used function in the C programming language for formatted output. This project aims to provide a custom implementation of the `printf` function, offering similar functionality to the standard `printf` while allowing customization and extensibility.

## Features

- Supports a wide range of format specifiers, including `%c` , `%s` , `%d` , `%i` , `%u` , `%o` , `%x` , `%X` , and more.
- Provides various flags for formatting options, such as `-` , `+` , `0` , `#` , and space.
- Supports width and precision specification.
- Handles variable argument lists using the `va_list` type from `<stdarg.h>` .

## Installation

To use the custom `printf` function in your project, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/mohamedtharwat000/printf.git
   ```
2. Include the `main.h` header file in your source code:
   ```c
   #include "main.h"
   ```
3. Compile your code with the custom printf implementation:
   ```bash
   gcc -Wall -Wextra -Werror -pedantic -std=c89 -o your-program your-program.c (printf functions\*.c)
   ```
4. Run your program:
   ```bash
   ./your-program
   ```

## Usage

To use the custom printf function, you can invoke it in your code just like the standard printf function. Here's an example:

```c
#include "main.h"
int main(void) {
   _printf("Hello, %s!\n", "world");
   return 0;
}
```

## Format Specifiers

The custom printf function supports the following format specifiers:

- `%c` : Character
- `%s` : String
- `%d` , `%i` : Signed decimal integer
- `%u` : Unsigned decimal integer
- `%o` : Unsigned octal
- `%x` , `%X` : Unsigned hexadecimal (lowercase/uppercase)

For a complete list of supported format specifiers, refer to the code files.

## Flags

The custom printf function supports the following flags for formatting options:

- `-` : Left-align the output
- `+` : Prefix positive numbers with a plus sign
- `0` : Pad with zeros instead of spaces
- `#` : Prefix the output with 0, 0x, or 0X for octal, hexadecimal, or floating-point values, respectively
- `Space` : Prefix positive numbers with a space if no sign is provided

For more details on flags and their usage, refer to the code files.

## Examples

Here are some examples demonstrating the usage of the custom printf function:

```c
_printf("Hello, %s!\n", "world");
_printf("Number: %d\n", 42);
_printf("Hexadecimal: %#x\n", 255);
```

For more examples, refer to the code files.

## Contributing

Contributions are welcome! Here are some ways you can contribute to this project:

- Report bugs and issues by creating a new GitHub issue.
- Fix bugs and issues by submitting pull requests.
- Add new validation functionality to enhance the form's capabilities.
- Improve styling and overall user experience.
- Refactor code to improve code quality and maintainability.
- Write documentation and improve existing docs to help others understand the project.

To contribute:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push your branch to your forked repository.
5. Submit a pull request, describing your changes in detail.

I will review pull requests and provide feedback.

## License

This project is open source and available under the [MIT License](LICENSE).

## Credits

Created by [Mohamed Tharwat](https://github.com/mohamedtharwat000). Feel free to reach out with any questions or feedback.
