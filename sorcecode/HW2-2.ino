//define
int led = 13;
char cmd;

//setup
void setup()
{
	pinMode(led, OUTPUT);
	Serial.begin(9600);
}
//loop
void loop()
{
	if(Serial.available() > 0)
	{
		cmd = Serial.read();
	}
	switch (cmd) {
	    case 'o':
	    case 's':
	      digitalWrite(led, HIGH);
	      break;
	    case 'x':    
	    case 'e':
	      digitalWrite(led, LOW);
	      break;
	    default:
	      Serial.println("Please input \'o\' or \'x\'.");
	}
}