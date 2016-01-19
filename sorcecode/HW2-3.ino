//http://swf.com.tw/?p=712
//define
#include <SoftwareSerial.h>
SoftwareSerial BT(8,9); //arduino Rx Tx
//SoftwareSerial Serial2(8,9); //arduino Rx Tx
char cmd;

//setup
void setup()
{
	Serial.begin(9600);
	Serial.print("PC Serial OK");
	BT.begin(9600);
	Serial.print("BT Serial OK");
	//Serial2.begin(9600);
}
//loop
void loop()
{
	if(Serial.available() > 0)
	{
		cmd = Serial.read();
		BT.print(cmd);
	}
	if(BT.available() > 0)
	{
		cmd = BT.read();
		Serial.print(cmd);
	}
}