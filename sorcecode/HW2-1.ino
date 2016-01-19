
int pin = 42;
int value;
int led = 13;
int threhold = 300;
//setup
void setup()
{
	pinMode(pin, INPUT);
	pinMode(led, OUTPUT);
	Serial.begin(9600);
}
//loop
void loop()
{
	value = analogRead(pin);
	Serial.println(value);
	if(value<threhold)
	{
		digitalWrite(led, HIGH);
	}
	else
	{
		digitalWrite(led, LOW);
	}
}