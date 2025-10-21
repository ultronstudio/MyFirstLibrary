#pragma once
/**
 * @file MyFirstLibrary.h
 * @brief Header file of the example Arduino library.
 * 
 * This library demonstrates the basic structure of an Arduino library,
 * including documentation and the implementation of a simple function.
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
   * @brief Calculates the sum of two numbers.
   *
   * This function returns the sum of two integer values.
   * It serves purely as a demonstration — a real library would include
   * more advanced functionality, such as sensor control or data processing.
   *
   * @param a The first number.
   * @param b The second number.
   * @return int The sum of both numbers (a + b).
   */
  static int add(int a, int b);

  /**
   * @brief Returns a greeting text from the library.
   *
   * This function can be used as a simple test method,
   * for example printing it through the Serial monitor
   * to verify that the library is working correctly.
   *
   * @return const char* A text string containing the library name and version.
   */
  static const char* info();
};
