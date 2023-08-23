/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <iostream>


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms


using namespace std;
int main()
{
    // Initialise the digital pin LED1 as an output
    BusOut display(D2, D3, D4, D5, D6, D7, D8);

    while (true) {
        int numero;
        cout << "Ingresa un número: ";
        cin >> numero;

    switch (numero) {
        case 0:
            std::cout << "El número es cero" << std::endl;
            display.write(123);
            break;
        case 1:
            std::cout << "El número es uno" << std::endl;
            display.write(48);
            break;
        case 2:
            std::cout << "El número es dos" << std::endl;
            display.write(109);
            break;
        case 3:
            std::cout << "El número es tres" << std::endl;
            display.write(121);
            break;
        case 4:
            std::cout << "El número es cuatro" << std::endl;
            display.write(51);
            break;
        case 5:
            std::cout << "El número es cinco" << std::endl;
            display.write(91);
            break;
        case 6:
            std::cout << "El número es seis" << std::endl;
            display.write(95);
            break;
        case 7:
            std::cout << "El número es siete" << std::endl;
            display.write(112);
            break;
        case 8:
            std::cout << "El número es ocho" << std::endl;
            display.write(127);
            break;
        case 9:
            std::cout << "El número es nueve" << std::endl;
            display.write(123);
            break;
        default:
            std::cout << "El número no está en el rango de 0 a 9" << std::endl;
            break;
    }
    }
}
