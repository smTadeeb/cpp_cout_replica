#  Mini Replica of `std::cout` in C++

A simple, custom-built alternative to `std::cout` for educational purposes.  
It uses operator overloading and manipulators to mimic stream syntax, while internally using `printf` for output.

---

##  Features

- **Chaining output** with `<<` just like `std::cout`
- **Supported types**:
  - `const char*` (C-style strings)
  - `int`
  - `char`
  - `int*` (pointer addresses)
- **Custom manipulators**:
  - `atla()` → prints a newline (`\n`) like `std::endl`
- All functionality is inside the namespace **`TadeebsStandardDevice`**
- Global instance `goster` works as your `cout` replacement

---

##  Example Usage

```cpp
#include <iostream>
#include "tadeeb_cout.h"  // Your file

using namespace TadeebsStandardDevice;

int main() {
    int x = 10;
    char y = 'A';
    char b[7] = "Tadeeb";
    int* ptr_int = &x;

    goster << "Tadeeb is a Developer" << atla;
    goster << x << atla;
    goster << y << atla;
    goster << b << atla;
    goster << ptr_int << atla;
```

## How It Works

- **Namespace**  
  Everything is inside `TadeebsStandardDevice` to avoid conflicts.

- **Class `Ekranda`**  
  - Overloaded `operator<<` for multiple data types.  
  - Overloaded `operator<<` for function pointers to allow custom manipulators.

- **Global Object**  
  `Ekranda goster;` → accessible like `std::cout`.

- **Manipulator**  
  `atla()` → prints a newline and can be chained like:  
  ```cpp
  goster << atla;
  ```

## Future Ideas

- Add support for float, double, and long types.
- Implement std::hex, std::dec, and std::oct style manipulators.
- Add std::boolalpha-like support for booleans.
- Support printing of char* pointers differently from C-strings.
