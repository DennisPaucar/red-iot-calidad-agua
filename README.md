# Red IoT con IA para el monitoreo de la calidad del agua

Red de sensores IoT de bajo coste, con inteligencia artificial, para vigilar en tiempo real la calidad del agua de ríos y quebradas.

> **Estado:** 🟡 Planificación inicial terminada; la etapa 1 (investigación, compras y diseño) empieza en noviembre de 2026

## Problema

La contaminación de ríos y quebradas suele detectarse tarde, cuando el daño ya afecta a la salud de las personas y a los ecosistemas. Los muestreos manuales son costosos y esporádicos. Con sensores electrónicos de bajo coste y redes inalámbricas de largo alcance se puede vigilar el agua de forma continua.

## Objetivo

Construir un prototipo funcional de bajo coste que:

- mida **pH, turbidez, temperatura y conductividad eléctrica**;
- envíe los datos a una **plataforma web abierta**;
- **detecte anomalías automáticamente**, como posibles vertidos, y **alerte** a comunidades y autoridades locales.

## Arquitectura

```
[Sensores] → [ESP32 + panel solar] → LoRaWAN → [Pasarela] → [Servidor + base de datos] → [Panel web + alertas por Telegram]
                                                                       ↑
                                                       [Modelo de detección de anomalías]
```

| Componente | Tecnología prevista |
|---|---|
| Nodo sensor | ESP32, sensores de pH, turbidez, temperatura (DS18B20) y conductividad |
| Alimentación | Panel solar + batería |
| Comunicación | LoRaWAN |
| Plataforma | Servidor web, base de datos de series temporales, mapa y gráficas |
| Alertas | Bot de Telegram |
| IA | Modelo de detección de anomalías entrenado con los datos recogidos |

## Estructura del repositorio

| Carpeta | Contenido |
|---|---|
| [`docs/`](docs/) | Planificación, informes y documentación técnica |
| [`firmware/`](firmware/) | Código del ESP32 (lectura de sensores y envío por LoRaWAN) |
| [`hardware/`](hardware/) | Esquemas, diseño de la placa, carcasa y lista de materiales |
| [`web/`](web/) | Servidor, base de datos, panel web y notificaciones |
| [`ia/`](ia/) | Modelo de detección de anomalías |
| [`datos/`](datos/) | Datos de calibración y de campo |

## Alcance

**Incluido**
- Cinco nodos con sensores, ESP32 y alimentación solar.
- Comunicación LoRaWAN.
- Plataforma web con mapa, gráficas históricas y alertas por Telegram.
- Modelo de detección de anomalías.
- Piloto en un tramo de río y documentación técnica abierta.

**Fuera del alcance**
- Análisis químicos de laboratorio (metales pesados, bacterias).
- Fabricación en serie o comercialización.
- Aplicación móvil nativa (solo web adaptable).
- Acciones de remediación o sanción.
- Despliegue a escala regional o nacional.

## Hitos

| Hito | Logro verificable | Estado |
|---|---|---|
| H1. Prototipo validado | Un nodo mide las cuatro variables con un error menor al 5 % frente a un equipo de referencia | ⬜ Pendiente |
| H2. Red conectada | Cinco nodos transmiten cada 10 minutos durante una semana sin cortes | ⬜ Pendiente |
| H3. Alertas inteligentes | El modelo detecta anomalías simuladas con al menos 85 % de acierto y envía avisos | ⬜ Pendiente |
| H4. Piloto y cierre | Dos meses de operación en campo, informe y publicación abierta | ⬜ Pendiente |

## Cronograma (noviembre 2026 – abril 2027)

| Etapa | Nov | Dic | Ene | Feb | Mar | Abr |
|---|:-:|:-:|:-:|:-:|:-:|:-:|
| Investigación, compras y diseño | ■ | | | | | |
| Prototipo de un nodo (H1) | | ■ | | | | |
| Red de cinco nodos y plataforma web (H2) | | | ■ | | | |
| Modelo de IA y alertas (H3) | | | | ■ | | |
| Piloto en campo | | | | | ■ | |
| Evaluación, informe y publicación (H4) | | | | | | ■ |

> Ajusta los meses de esta tabla si tu cronograma en el PDF usa otra distribución.

## Equipo

| Rol | Responsable | Tareas |
|---|---|---|
| Coordinación | [Tu nombre] | Gestión, arquitectura, firmware, modelo de IA, integración y documentación |
| Electrónica | [Nombre] | Sensores, calibración, placa, alimentación solar y carcasa |
| Desarrollo web | [Nombre] | Servidor, base de datos, panel y notificaciones |
| Enlace comunitario y ambiental | [Nombre] | Puntos de muestreo, permisos, comunidad y validación ambiental |

## Bitácora

| Fecha | Avance |
|---|---|
| 2026-10-21 | Planificación inicial terminada y creación del repositorio |

## Licencia

Código bajo licencia [MIT](LICENSE). Los diseños de hardware y la documentación se publican de forma abierta como parte del hito H4.
