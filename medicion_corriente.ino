#define RAIZ_2  1.41421356237

int _max = 0;
int _min = 1023;
int _peak = 0;
int adc = 0;
float v_sensor = 0;
float voltaje_rms = 0;
float corriente = 0;
float potencia =0;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("La potencia es:");
  Serial.print(medicion());
  Serial.println("Watts");
  delay(1000);
}

float medicion(void){
  for (int i = 0; i < 300; i++){
    adc = analogRead(A0);
    if (adc <= _min) _min = adc;
    if (adc >= _max) _max = adc;
    }
    _peak = _max - _min;
    v_sensor = (float)_peak * 5.0 /1024.0;
    voltaje_rms = v_sensor * (RAIZ_2 / 2);
    corriente = voltaje_rms * 10;
    potencia = corriente * 220.0;
    _max = 0;
    _min = 1023;
    return potencia;
  }
