#include <Servo.h>

Servo monServo;  // Création de l'objet servo

void setup() {
  monServo.attach(9);  // Connecte ton servo à la pin 9 (change si nécessaire)
}

void loop() {
  for(int i =0; i<10; i++) {
     // Aller de 0 à 180
  for (int angle = 0; angle <= 180; angle++) {
    monServo.write(angle);
    delay(10);  // Plus petit = plus rapide
  }

  // Revenir de 180 à 0
  for (int angle = 180; angle >= 0; angle--) {
    monServo.write(angle);
    delay(10);
  }
  }
 
}


//j ajoute ce com
