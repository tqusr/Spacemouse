class joystick(){
  const int swPin = 2;
  const int xPin = 0;
  const int yPin = 1;
  int sw, x, y;
  int swLast, xLast, yLast;

  pinMode(swPin, INPUT);
  digitalWrite(swPin, HIGH);
  x = analogRead(xPin);
  y = analogRead(yPin);
  sw = analogRead(swPin);
  xLast = x;
  yLast = y;
  swLast = sw;

  void checkStatus(){
    x = analogRead(xPin);
    y = analogRead(yPin);
    sw = analogRead(swPin);
    //if(x != xLast || y != yLast || sw != swLast){
      Serial.print("X: ");
      Serial.println(x);
      Serial.print("Y: ");
      Serial.println(y);
      /*Serial.print("Sw: ");
      if(digitalRead(swPin) == HIGH){
        Serial.println("Active");
      }
      else{
        Serial.println("Inactive");
      }*/
    //}
  
    xLast = x;
    yLast = y;
    swLast = sw;
  }
}
