/**
 * @file MyFirstLibrary.cpp
 * @brief Implementace ukázkové knihovny pro Arduino.
 * 
 * Knihovna MyFirstLibrary ukazuje, jak vytvořit vlastní třídu,
 * přidat metody, dokumentaci a základní popis funkcí.
 */

 #include "MyFirstLibrary.h"

 int MyFirstLibrary::add(int a, int b) {
   return a + b;
 }
 
 const char* MyFirstLibrary::info() {
   return "MyFirstLibrary v1.0.0 — by Petr Vurm";
 }
 