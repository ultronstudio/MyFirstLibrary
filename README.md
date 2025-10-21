# MyFirstLibrary

Jednoduchá demonstrační knihovna pro Arduino, vytvořená jako ukázka správné struktury, dokumentace a metadat.

## 🧩 Funkce

| Funkce | Popis |
|---------|--------|
| `int add(int a, int b)` | Vrací součet dvou čísel. |
| `const char* info()` | Vrací text s názvem a verzí knihovny. |

## Instalace

1. V **Arudino IDE** přidej knihovnu do projektu jako **ZIP soubor**.
2. Ve svém projektu použij např:
```cpp
#include <MyFirstLibrary.h>

void setup() {
  Serial.begin(9600);
  Serial.println(MyFirstLibrary::info());
  Serial.println(MyFirstLibrary::add(5, 3));
}

void loop() {}
```

## ✍️ Autor

* Jméno: Petr Vurm
* Web: https://petrvurm.cz
* Email: kontakt@petrvurm.cz

## ⚖️ Licence

Tato ukázková knihovna je licencována pod licencí MIT. Více informací naleznete v souboru [LICENSE](./LICENSE.txt).

Knihovna slouží pro demonstrační a vzdělávací účely. Je povoleno její volné použití, úpravy a distribuce dle podmínek licence MIT.