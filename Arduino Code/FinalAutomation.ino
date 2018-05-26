byte data = 0;                //Variable for storing received data
int Lightpin = 2;
int Fanpin = 3;
int TVpin = 4;
int ACpin = 5;
int doorLock = 6;
 
void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
   //Sets digital pin 13 as output pin
  pinMode(Lightpin, OUTPUT);
  pinMode(Fanpin, OUTPUT);
  pinMode(TVpin, OUTPUT);
  pinMode(ACpin, OUTPUT);
  pinMode(doorLock, OUTPUT);
}
void loop()
{
  if(Serial.available() > 0)  // Send data only when you receive data:
  {
    data = Serial.read();      //Read the incoming data and store it into variable data
    Serial.print(data);        //Print Value inside data in Serial monitor
    Serial.print("\n");        //New line 
    if(int(data) == 49)            //Checks whether value of data is equal to 1 
      digitalWrite(Lightpin, HIGH);  //If value is 1 then LED turns ON
    else if(int(data) == 50)       //Checks whether value of data is equal to 0
      digitalWrite(Lightpin, LOW);//If value is 0 then LED turns OFF
    else if(int(data) == 51)       //Checks whether value of data is equal to 0
      digitalWrite(Fanpin, HIGH);//If value is 0 then LED turns OFF
    else if(int(data) == 52)       //Checks whether value of data is equal to 0
      digitalWrite(Fanpin, LOW);//If value is 0 then LED turns OFF
    else if(int(data) == 53)       //Checks whether value of data is equal to 0
      digitalWrite(TVpin, HIGH);//If value is 0 then LED turns OFF
    else if(int(data) == 54)       //Checks whether value of data is equal to 0
      digitalWrite(TVpin, LOW);//If value is 0 then LED turns OFF
    else if(int(data) == 55)       //Checks whether value of data is equal to 0
      digitalWrite(ACpin, HIGH);//If value is 0 then LED turns OFF
    else if(int(data) == 56)       //Checks whether value of data is equal to 0
      digitalWrite(ACpin, LOW);//If value is 0 then LED turns OFF
    else if(int(data) == 57)       //Checks whether value of data is equal to 0
      digitalWrite(doorLock, HIGH);//If value is 0 then LED turns OFF
    else if(int(data) == 58)       //Checks whether value of data is equal to 0
      digitalWrite(doorLock, LOW);
    
  }                            
 
}
