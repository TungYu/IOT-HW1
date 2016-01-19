//Define 
int led = 13;
int count = 1000;
int delta = 100;
int count_init = 1000;
int count_Max = 2000;
int count_min = 100;
char cmd;
//setup
void setup()
{
  Serial.begin( 9600 ); // build-in lib
  pinMode(led, OUTPUT);
}
//loop
void loop()
{
  if(Serial.available()){
    cmd = Serial.read();
    switch (cmd) {
        case '+':
          // do something
          count -= delta;
          break;
        case '-':
          // do something
          count += delta;
          break;
        default:
          // do something
          Serial.println("Please input + and - only.");
        break;

    }
  }
  Serial.println(count);
  digitalWrite(led, HIGH);
  delay(count);
  digitalWrite(led, LOW);
  delay(count);
}

/*
if(count > count_min || count < count_Max)
  count += delta;
else
  count = count_init;

 */