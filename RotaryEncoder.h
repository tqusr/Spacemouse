class rotaryEncoder(){
  static int d1 = 14;
  static int d2 = 15;
  int encoderLastState;
  int encoderState;
  int button;
  pinMode(d1, INPUT);
  pinMode(d2, INPUT);
  encoderLastState = digitalRead(d1);

  void checkStatus(){
    if(digitalRead(button) == HIGH){
      //Serial.write("PRE NER\n");
      while (digitalRead(button) == HIGH){}
      //Consumer.write(MEDIA_PREVIOUS);
      //Serial.write("PRE UPP\n");
      delay(100);
    }  
    encoderState = digitalRead(d1);
    //Serial.write(encoderState);
    //Serial.write(encoderLastState);

    if (encoderState != encoderLastState){
      if (digitalRead(d2) != encoderState){
        //Consumer.write(MEDIA_VOLUME_DOWN);
        //Serial.write("VOLYM NER\n");
        }
      else{
        //Consumer.write(MEDIA_VOLUME_UP);
        //Serial.write("VOLYM UPP\n");
        }
        delay(100);
        encoderLastState = digitalRead(d1);
    } 
  }
}




