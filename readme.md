La empresa “UTN FRA Robotics” ganó la licitación de un proyecto, y deberá Implementar un sistema que permita al usuario saber a qué estación de subte está llegando, aparte el sistema muestra las estaciones que faltan hasta llegar a destino, para ello debemos utilizar 4 LEDs y el display de 7 segmentos. Esta vez el buzzer deberá emitir un sonido diferente cada vez que se llegue a una estación.
El sistema deberá arrancar apagado, luego de accionar el interruptor empezará y hará lo pedido.
Deberá recorrer las estaciones comenzando por constitución y mostrará en el display 7 segmentos cuantas estaciones faltan para llegar a moreno, cada vez que llega a una estación realiza un sonido el buzzer.

# Ejemplo Documentación

![Tinkercad](./img/ArduinoTinkercad.jpg)

## Integrantes

- Esteban M. Quiroz
- Dario Cuda

## Proyecto: Contador binario.

![Tinkercad](./img/ContadorBinario.png)

## Descripción

En este parrafo deberan describir que funcion cumple su proyecto. Que solucion esta ofreciendo.

## Función principal

Esta funcion se encarga de encender y apagar los leds.

B0, B1, B2, B3 son #define que utilizamos para agregar los leds, asociandolo a pines de la placa arduino.

(Breve explicación de la función)

```C (lenguaje en el que esta escrito)
void EncenderBinario(int estado3, int estado2,int estado1,int estado0)
{
  digitalWrite(B3,estado3);
  digitalWrite(B2,estado2);
  digitalWrite(B1,estado1);
  digitalWrite(B0,estado0);
}
```

## :robot: Link al proyecto

- [proyecto](https://www.tinkercad.com/things/aOYiibnDjWu)

## :tv: Link al video del proceso

- [video](https://www.youtube.com/watch?v=VyGjE8kx-O0)

---

### Fuentes

- [Consejos para documentar](https://www.sohamkamani.com/how-to-write-good-documentation/#architecture-documentation).

- [Lenguaje Markdown](https://markdown.es/sintaxis-markdown/#linkauto).

- [Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet).

- [Tutorial](https://www.youtube.com/watch?v=oxaH9CFpeEE).

- [Emojis](https://gist.github.com/rxaviers/7360908).

---
