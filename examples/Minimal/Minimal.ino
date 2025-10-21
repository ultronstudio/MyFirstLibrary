/**
 * @file Minimal.ino
 * @brief Ukázkový příklad použití knihovny MyFirstLibrary.
 * 
 * Tento příklad demonstruje základní použití knihovny:
 *  - Načtení hlavičkového souboru knihovny.
 *  - Vypsání informací o knihovně do Serial monitoru.
 *  - Použití jednoduché funkce add() pro výpočet součtu dvou čísel.
 * 
 * @author Petr Vurm
 * @version 1.0.0
 * @date 2025-10-21
 */

 #include <Arduino.h>
 #include <MyFirstLibrary.h>

 void setup() {
   // Inicializace sériové komunikace
   Serial.begin(9600);
   while (!Serial) {
     ; // čekej, dokud se Serial nepřipojí (užitečné např. pro Leonardo)
   }
 
   // Uvítací zpráva z knihovny
   Serial.println("=== MyFirstLibrary Example ===");
   Serial.println(MyFirstLibrary::info());
 
   // Použití funkce add()
   int a = 5;
   int b = 7;
   int result = MyFirstLibrary::add(a, b);
 
   Serial.print("Součet ");
   Serial.print(a);
   Serial.print(" + ");
   Serial.print(b);
   Serial.print(" = ");
   Serial.println(result);
 
   Serial.println("==============================");
 }
 
 void loop() {
   // Není potřeba dělat nic dalšího
 }
 