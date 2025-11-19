// =========================================================
// chatbot_sesion2.cpp
// Sesion 2 – Chatbot OfiExpress
// Funcionalidad: decisiones según palabra clave (if - else if)
// =========================================================

#include <iostream>   // Biblioteca para cout y cin
#include <string>     // Biblioteca para strings
using namespace std;  // Usamos el espacio de nombres estandar

int main() {                                  // Inicio de la funcion principal
    string nombre;                            // Variable para el nombre del cliente
    string opcion;                            // Variable para almacenar la palabra clave
    string empresa = "OfiExpress";            // Nombre de la empresa

    // Titulo del chatbot
    cout << "=== Chatbot " << empresa << " v2 ===" << endl;

    // Saludo inicial
    cout << "Hola, soy el asistente virtual de "
         << empresa << "." << endl;

    // Solicitamos el nombre del cliente
    cout << "¿Como te llamas? ";
    getline(cin, nombre);                      // Leemos el nombre completo

    // Mostramos un saludo personalizado
    cout << "Hola, " << nombre
         << ". ¿En que puedo ayudarte hoy?" << endl;

    // Le pedimos al usuario elegir una palabra clave
    cout << "Escribe: 'horario', 'contacto' o 'servicios': ";
    getline(cin, opcion);                      // Leemos la palabra clave

    // ============================
    // Estructura condicional
    // ============================

    if (opcion == "horario") {                    // Compara si la opcion es "horario"
        cout << "Nuestro horario de atencion es de lunes a viernes de 9:00 a 18:00."
             << endl;

    } else if (opcion == "contacto") {            // Compara si la opcion es "contacto"
        cout << "Puedes comunicarte al telefono 55-1234-5678 o al correo "
             << "ventas@ofiexpress.mx" << endl;

    } else if (opcion == "servicios") {           // Compara si la opcion es "servicios"
        cout << "Ofrecemos venta y reparto de articulos de oficina para PyMEs."
             << endl;

    } else {                                      // Si la palabra clave no coincide
        cout << "Lo siento, aun no tengo informacion sobre ese tema." << endl;
    }

    return 0;                                     // Fin del programa
}
