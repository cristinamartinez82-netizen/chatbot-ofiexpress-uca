# Chatbot OfiExpress – Proyecto para VS Code

Este proyecto contiene las diferentes versiones del **Chatbot OfiExpress** usadas en el curso de Logica de Programacion.

> Nota: Todo el texto (comentarios y mensajes) esta escrito sin acentos para evitar problemas de codificacion en algunas consolas.

## Introduccion

OfiExpress es una PyME que desea automatizar parte de su atencion al cliente y el seguimiento basico de pedidos.  
El objetivo de este proyecto es construir paso a paso un chatbot en C++ que:

- Interactue con la persona usuaria por consola.
- Responda a preguntas simples sobre horario, servicios y contacto.
- Envie mensajes predefinidos y aleatorios.
- Registre algunas acciones en un archivo de texto llamado `historial_chatbot.txt`.

Cada archivo `.cpp` corresponde a una sesion de trabajo donde se agrega un nuevo concepto de logica de programacion.

## Objetivo del proyecto

Desarrollar un chatbot funcional en C++ que integre:

- Entrada y salida de datos
- Condicionales
- Ciclos
- Funciones
- Arreglos
- Aleatoriedad
- Manejo de archivos de texto

y que sirva como ejemplo didactico para practicar la logica de programacion en contexto.

## Contenido de cada archivo

- `chatbot_sesion1.cpp`  
  - Tema: Entrada / salida y variables.  
  - Muestra un saludo simple y pide el nombre del usuario.

- `chatbot_sesion2.cpp`  
  - Tema: Condicionales `if` y `else if`.  
  - Responde diferente segun la palabra clave: `horario`, `contacto` o `servicios`.

- `chatbot_sesion3.cpp`  
  - Tema: Ciclo `while`.  
  - Mantiene una conversacion que termina solo cuando la persona escribe `salir`.

- `chatbot_sesion4.cpp`  
  - Tema: Ciclo `for` y estructura `switch`.  
  - Implementa un menu numerico con opciones para ver horario, contacto, servicios o salir.

- `chatbot_sesion5.cpp`  
  - Tema: Funciones.  
  - Separa la logica del chatbot en funciones como `mostrarMenu`, `mostrarHorario`, `mostrarContacto`, `mostrarServicios` y `consultarPedidoSimulado`.

- `chatbot_sesion6.cpp`  
  - Tema: Arreglos.  
  - Incluye un arreglo de mensajes rapidos para clientes y los muestra usando un ciclo `for`.

- `chatbot_sesion7.cpp`  
  - Tema: Aleatoriedad (`rand` y `srand`).  
  - Agrega una opcion para mostrar un mensaje aleatorio tomado de un arreglo.

- `chatbot_sesion8.cpp`  
  - Tema: Manejo de archivos (`ofstream`).  
  - Registra en el archivo `historial_chatbot.txt` las acciones realizadas por la persona (consultar horario, servicios, etc.).

- `chatbot_final.cpp`  
  - Sesion 9: Integracion.  
  - Integra menu, funciones, arreglos, aleatoriedad y manejo de archivos en un solo programa.  
  - Es la version recomendada como producto final del proyecto.

## Como usar el proyecto en Visual Studio Code

1. Descomprimir el archivo ZIP y abrir la carpeta `chatbot-ofiexpress-vscode` en VS Code.
2. Verificar que tengas instalado un compilador de C++ (por ejemplo, `g++` en Windows, WSL o Linux).
3. En VS Code, abrir la paleta de comandos (Ctrl+Shift+P) y ejecutar:
   - `Tasks: Run Task`
   - Elegir `Compilar chatbot_sesion1` para probar la primera version del chatbot.
   - Elegir `Compilar chatbot_final` para compilar la version integrada.

Tambien puedes compilar desde la terminal dentro de la carpeta del proyecto:

```bash
g++ -std=c++11 chatbot_sesion1.cpp -o chatbot_sesion1
./chatbot_sesion1

g++ -std=c++11 chatbot_final.cpp -o chatbot_final
./chatbot_final
```

## Flujo sugerido para clase

1. Ejecutar primero `chatbot_sesion1.cpp` para explicar entrada / salida y variables.
2. Avanzar sesion por sesion, ejecutando cada archivo para observar el cambio en el comportamiento.
3. Al final, usar `chatbot_final.cpp` como ejemplo de integracion de todos los temas.

Este repositorio se puede usar tal cual o adaptarse para actividades como:
- Correccion de errores (debugging).
- Ejercicios de ampliacion de funcionalidad.
- Practicas de documentacion de codigo.
