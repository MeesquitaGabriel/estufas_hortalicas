# Projeto: Estufa de Hortaliças IoT

Simulação feita no **Tinkercad** com Arduino UNO, sensor de temperatura TMP36, LED, buzzer e motor.

## Funcionalidade
- Leitura da temperatura ambiente.
- Aciona o ventilador se T >= 30 °C.
- Aciona LED vermelho e buzzer se T > 50 °C (emergência).

## Conexões
- TMP36: Vout → A0, VCC → 5V, GND → GND
- LED: D3 via resistor 220Ω → GND
- Buzzer: D4 → GND
- Motor: D5 → transistor + diodo flyback

## Código
Arquivo `estufa.ino` incluso.

## Link Tinkercad
Adicione aqui seu link do projeto.
