# Detección de anomalías

Objetivo: detectar anomalías (posibles vertidos) con al menos 85 % de acierto sobre anomalías simuladas (hito H3).

Pasos previstos:
1. Recoger datos normales de los nodos.
2. Simular anomalías (cambios bruscos de pH, turbidez o conductividad).
3. Entrenar y comparar modelos (por ejemplo, Isolation Forest o un autoencoder).
4. Integrar el modelo con el sistema de alertas.
