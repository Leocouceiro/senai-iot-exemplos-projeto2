// Inclusão da biblioteca do sensor
// Essa biblioteca não vem por padrão com o arduino e 
// precisa ser instalada pelo gerenciador de bibliotecas
#include <Ultrasonic.h>

// Inicializa o objeto do sensor ultrasônico
// Usando as portas 09 e 10 para trigger e echo
Ultrasonic ultrasonic(9, 10);

void setup() {
  // Inicializa a porta Serial
  Serial.begin(9600);
}

void loop() {
  // Lê o valor do sensor
  int distancia = ultrasonic.distanceRead();

  // Escreve o valor da distância no painel Serial
  Serial.print("Distance in CM: ");
  Serial.println(distancia);
  
  delay(1000);
}
