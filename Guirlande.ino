int Choix(0);
const int nombreLEDs = 11; // Nombre total de LEDs
const int pinDebut = 3;    // Pin de départ pour la première LED
int Delai(200); 

void setup() {
  Serial.begin(9600);

  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  delay(Delai);

  Serial.print(Choix);
  Serial.print("\n");

  if (Choix == 0) {
  }

  if (digitalRead(2) == HIGH) {
    Choix ++;
    for (int i = 0; i < nombreLEDs; i++) {
      digitalWrite(pinDebut + i, HIGH); // Allume la LED actuelle
    }
    delay(2000);
    for (int i = 0; i < nombreLEDs; i++) {
      digitalWrite(pinDebut + i, LOW); // Éteint la LED actuelle
    }
  }

  if (Choix == 6) {
    Choix = 0;
  }
  
  if (Choix == 1) {
    for (int i = 0; i < nombreLEDs; i++) {
      digitalWrite(pinDebut + i, HIGH); // Allume la LED actuelle
      delay(Delai);
      digitalWrite(pinDebut + i, LOW); // Éteint la LED actuelle
    }
 }
  
  if (Choix == 2) {
    for (int i = 0; i < nombreLEDs; i++) {
      if (i%2 == 0){
        digitalWrite(pinDebut + i, HIGH); // Allume la LED actuelle
      }
      else {
        digitalWrite(pinDebut + i, LOW); // Allume la LED actuelle
      }
    }
    delay(Delai);
    for (int i = 0; i < nombreLEDs; i++) {
      if (i%2 == 0){
        digitalWrite(pinDebut + i, LOW); // Allume la LED actuelle
      }
      else {
        digitalWrite(pinDebut + i, HIGH); // Allume la LED actuelle
      }
    }
  }

  if (Choix == 3) {
    for (int i = 0; i < nombreLEDs; i++) {
      digitalWrite(pinDebut + i, HIGH); // Allume la LED actuelle
    }
    delay(Delai);
    for (int i = 0; i < nombreLEDs; i++) {
      digitalWrite(pinDebut + i, LOW); // Éteint la LED actuelle
    }
  }

  if (Choix == 4) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(pinDebut + i, HIGH);
      digitalWrite(nombreLEDs + 2 - i, HIGH);
      delay(Delai);
      digitalWrite(pinDebut + i, LOW);
      digitalWrite(nombreLEDs + 2 - i, LOW);
    }
  }

  if (Choix == 5) {
    for (int a = 11; a > 0; a--) {
        for (int i = 0; i < a; i++) {
          digitalWrite(pinDebut + i, HIGH);
          delay(Delai/2);
          digitalWrite(pinDebut + i, LOW);
        }
      digitalWrite(a+2, HIGH);
    }
    for (int x = 3; x > 0; x--){
      for (int i = 0; i < nombreLEDs; i++) {
        digitalWrite(pinDebut + i, LOW); // Éteint la LED actuelle
      }
      delay(Delai);
      for (int i = 0; i < nombreLEDs; i++) {
        digitalWrite(pinDebut + i, HIGH); // Allume la LED actuelle
      }
      delay(Delai);
    }
  }
}
