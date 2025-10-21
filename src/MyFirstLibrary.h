#pragma once
/**
 * @file MyFirstLibrary.h
 * @brief Hlavičkový soubor ukázkové knihovny pro Arduino.
 * 
 * Tato knihovna demonstruje základní strukturu Arduino knihovny,
 * včetně dokumentace a implementace jednoduché funkce.
 * 
 * @author Petr Vurm
 * @version 1.0.0
 * @date 2025-10-21
 * 
 * @copyright
 * Copyright (c) 2025 Petr Vurm
 * All rights reserved.
 */
class MyFirstLibrary {
public:
  /**
   * @brief Spočítá součet dvou čísel.
   *
   * Tato funkce vrací součet dvou celočíselných hodnot.
   * Slouží pouze pro demonstrační účely — v reálné knihovně
   * by zde byly pokročilejší funkce, senzory, atd.
   *
   * @param a První číslo.
   * @param b Druhé číslo.
   * @return int Součet obou čísel (a + b).
   */
  static int add(int a, int b);

  /**
   * @brief Vrátí uvítací text knihovny.
   *
   * Slouží jako testovací metoda, kterou lze vypsat
   * přes Serial monitor pro ověření, že knihovna funguje.
   *
   * @return const char* Text s názvem knihovny a verzí.
   */
  static const char* info();
};
