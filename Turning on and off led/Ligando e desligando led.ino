int D1 = 5;
void setup() {
  pinMode(D1, OUTPUT);              //Configura o pino que queremos usar como um pino de entrada e saída
  Serial.begin(115200);             //Velocidade de transmissão de bits
  Serial.println("Estado do led");  //Retorna dados na porta do serial como ASCII
}

void loop() {
  digitalWrite(D1, HIGH);  //Liga o virtual ao real
  Serial.println("Ligado");
  delay(1500);  //Tempo em milissegundos
  digitalWrite(D1, LOW);
  Serial.println("Desligado");
  delay(1500);
}
