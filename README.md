# Display 7 segmentos
Integrantes: 
1. Jose David Jayk Vanegas
2. Diego Collazos Bermudez
3. Samuel Corrales

Descripcion:
Se crea el objeto llamado BusOut llamado display para controlar los pines de
7 segmentos
```c++
BusOut display(D2, D3, D4, D5, D6, D7, D8);
```
Luego se le pide al usuario que digite un numero. 
Se utilizo el switch que lo que hace es verificar los casos de cada digito que ingrese el usuario. 

El display.write(valor); controla el display de 7 segmentos. Se utiliza para establecer los segmentos que deben encenderse para mostrar el dígito correspondiente. El valor que se pasa a display.write() está en notación decimal, ya que pasamos todos los numeros de binario a decimal. 
```c++
case 0:
            std::cout << "El número es cero" << std::endl;
            display.write(126);
            break;
```
Es decir por ejemplo el 0 representa prender a,b,c,d,e,f. lo que nos lleva a tener en binario 1111110 y al pasarlo a decimal tenemos el numero 126
