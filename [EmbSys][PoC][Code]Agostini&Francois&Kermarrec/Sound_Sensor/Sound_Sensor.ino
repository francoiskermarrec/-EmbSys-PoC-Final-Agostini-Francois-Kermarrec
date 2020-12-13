
void setup(){
  Serial.begin (115200);
}
  
void loop (){
  int val;
  val=analogRead(13);  
  Serial.println(val);
  delay(100);
}
