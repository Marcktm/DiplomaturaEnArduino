//Declaro variable
String miString = "Hola Arduino";

void setup() {
  // Uso estandar de 9600 baudios
  Serial.begin(9600);
}


void loop() {
  // Imprime por el monitor serial "Hola Arduino"
  Serial.println(miString);

  // Imprimir números pares menores a 100
  for (int i = 0; i < 100; i += 2) {
    Serial.println(i);
    // Esperar un segundo antes de repetir
    delay(1000);
  }

}
