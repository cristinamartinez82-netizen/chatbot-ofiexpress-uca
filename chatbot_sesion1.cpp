// ==============================================
// chatbot_sesion1.cpp
// Sesion 1 – Chatbot OfiExpress
// Funcionalidad: saludo y registro del cliente
// ==============================================

#include <iostream>   // Biblioteca para cout y cin (entrada y salida de texto)
#include <string>     // Biblioteca para usar strings
using namespace std;  // Evitamos escribir std:: cada vez

int main() {                                  // Funcion principal del programa
    string nombre;                             // Variable para almacenar el nombre del cliente
    string empresa = "OfiExpress";             // Nombre de la empresa (texto fijo)

    // Título del chatbot
    cout << "=== Chatbot " << empresa << " v1 ===" << endl;

    // Mensaje de bienvenida
    cout << "Hola, soy el asistente virtual de "
         << empresa << "." << endl;

    // Pedimos el nombre del usuario
    cout << "Para comenzar, dime tu nombre: ";

    getline(cin, nombre);    // Leemos la línea completa del usuario

    // Saludo personalizado
    cout << "Mucho gusto, " << nombre
         << ". Gracias por contactar a "
         << empresa << "." << endl;

    // Mensaje final
    cout << "En las proximas versiones podras consultar pedidos e informacion." << endl;

    return 0;  // Indica que el programa termino correctamente
}
