int red = 9;
int green = 10;
int blue = 11;
void setup(){
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop(){
  fader(red,green);
  fader(green,blue);
  fader(blue, red);
}
void fader(int color1, int color2){
    for (int brightness=0;brightness<256;brightness++){
        analogWrite(color1, 255-brightness);
        analogWrite(color2, brightness);
        delay(10);
    }
}
