# MyFirstLibrary

A simple demonstration library for Arduino, created as an example of proper structure, documentation, and metadata for Arduino/PlatformIO libraries.

## 🧩 Functions

| Function                | Description                                                    |
| ----------------------- | -------------------------------------------------------------- |
| `int add(int a, int b)` | Returns the sum of two numbers.                                |
| `const char* info()`    | Returns a text string containing the library name and version. |

## Installation

1. In **Arduino IDE**, add the library to your project as a **ZIP file**.
2. In your sketch, use it like this:

```cpp
#include <MyFirstLibrary.h>

void setup() {
  Serial.begin(9600);
  Serial.println(MyFirstLibrary::info());
  Serial.println(MyFirstLibrary::add(5, 3));
}

void loop() {}
```

## ✍️ Author

* **Name:** Petr Vurm
* **Website:** [https://petrvurm.cz](https://petrvurm.cz)
* **Email:** [kontakt@petrvurm.cz](mailto:kontakt@petrvurm.cz)

## ⚖️ License

This demonstration library is licensed under the **MIT License**.
For more details, see the [LICENSE](./LICENSE.txt) file.

The library is intended for **demonstration and educational purposes**.
Free use, modification, and distribution are permitted under the terms of the MIT License.