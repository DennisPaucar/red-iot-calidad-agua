# Firmware del nodo (ESP32)

Funciones previstas:
1. Leer pH, turbidez, temperatura y conductividad.
2. Detectar lecturas imposibles (sensor sucio o dañado).
3. Enviar los datos por LoRaWAN cada 10 minutos.
4. Guardar los datos en memoria local si no hay cobertura y reenviarlos después.
5. Entrar en reposo profundo entre lecturas para ahorrar batería.

Herramientas: Arduino IDE o PlatformIO.
