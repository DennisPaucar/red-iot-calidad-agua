// Esqueleto inicial del firmware del nodo sensor (ESP32)
// Proyecto: Red IoT con IA para el monitoreo de la calidad del agua

#define INTERVALO_MS (10UL * 60UL * 1000UL)  // 10 minutos

struct Lectura {
  float ph;
  float turbidez;      // NTU
  float temperatura;   // °C
  float conductividad; // µS/cm
};

Lectura leerSensores() {
  Lectura l;
  // TODO: leer cada sensor y aplicar su calibración
  l.ph = 0; l.turbidez = 0; l.temperatura = 0; l.conductividad = 0;
  return l;
}

bool lecturaValida(const Lectura &l) {
  // Descarta valores físicamente imposibles
  return l.ph >= 0 && l.ph <= 14 && l.temperatura > -5 && l.temperatura < 50;
}

void enviarLoRaWAN(const Lectura &l) {
  // TODO: empaquetar y enviar por LoRaWAN; si falla, guardar en memoria local
}

void setup() {
  Serial.begin(115200);
  // TODO: inicializar sensores y módulo LoRa
}

void loop() {
  Lectura l = leerSensores();
  if (lecturaValida(l)) enviarLoRaWAN(l);
  else Serial.println("Lectura inválida: revisar sensores");
  delay(INTERVALO_MS);  // TODO: reemplazar por reposo profundo
}
