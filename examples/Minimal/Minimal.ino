/**
 * @file Minimal.ino
 * @brief Example sketch demonstrating the usage of the MyFirstLibrary.
 * 
 * This example shows the basic usage of the library:
 *  - Including the library header file.
 *  - Printing library information to the Serial Monitor.
 *  - Using the simple add() function to calculate the sum of two numbers.
 * 
 * @author Petr Vurm
 * @version 1.0.0
 * @date 2025-10-21
 */

 #include <Arduino.h>
 #include <MyFirstLibrary.h>
 
 void setup() {
   // Initialize serial communication
   Serial.begin(9600);
   while (!Serial) {
     ; // wait for Serial to be ready (useful for boards like Leonardo)
   }
 
   // Greeting message from the library
   Serial.println("=== MyFirstLibrary Example ===");
   Serial.println(MyFirstLibrary::info());
 
   // Using the add() function
   int a = 5;
   int b = 7;
   int result = MyFirstLibrary::add(a, b);
 
   Serial.print("Sum of ");
   Serial.print(a);
   Serial.print(" + ");
   Serial.print(b);
   Serial.print(" = ");
   Serial.println(result);
 
   Serial.println("==============================");
 }
 
 void loop() {
   // Nothing else to do here
 }
 