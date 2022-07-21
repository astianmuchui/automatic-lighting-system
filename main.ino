int pir = 1;
int relay = 12;

void setup(){
  pinMode(pir,INPUT);
  pinMode(relay,OUTPUT);
}

void loop(){
  if(detect_motion()){
    switchOnLights();
  }else{
    SwitchOff();
  }
}

bool detect_motion(){
  int status = digitalRead(pir);
  if(status == HIGH){
    return true;
  }else{
    return false;
  }
}

void switchOnLights(){
  // check if lights were on
  
  if(digitalRead(relay) == LOW){
   digitalWrite(relay,HIGH);
   // Turn on lights for 5 minutes 
    // Change this accordingly
    delay(50000);  
    SwitchOff();
  }else{
    // Do nothing
  }

  	
}

void SwitchOff(){
  digitalWrite(relay,LOW);
}
