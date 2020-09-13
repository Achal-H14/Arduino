int red = 9;
int green = 10;
int blue = 11;
void setup(){
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop(){
  //pick a random color
  analogWrite(red, random(256));
  
  analogWrite(blue, random(256));
  
  analogWrite(green, random(256));
  
  delay(1000);//wait one second
}
