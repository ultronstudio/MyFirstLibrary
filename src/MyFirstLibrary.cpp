/**
 * @file MyFirstLibrary.cpp
 * @brief Implementation of the example Arduino library.
 * 
 * The MyFirstLibrary demonstrates how to create a custom class,
 * add methods, write documentation, and provide basic function descriptions.
 */

 #include "MyFirstLibrary.h"

 int MyFirstLibrary::add(int a, int b) {
   return a + b;
 }
 
 const char* MyFirstLibrary::info() {
   return "MyFirstLibrary v1.0.1 — by Petr Vurm";
 }
 