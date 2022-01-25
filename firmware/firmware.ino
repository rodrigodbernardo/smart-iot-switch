bool ledFlag = 0;

void setup() {
  pinMode(D1, INPUT);
  pinMode(D4, OUTPUT);
  Serial.begin(500000);
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(D1) == HIGH) {

    do {
      delay(50);
    }
    while (digitalRead(D1) == HIGH);
    
    if (ledFlag == 0)
      ledFlag = 1;
    else
      ledFlag = 0;
      
    digitalWrite(D4, ledFlag);
    Serial.println(ledFlag);

  }


  // put your main code here, to run repeatedly:

}
