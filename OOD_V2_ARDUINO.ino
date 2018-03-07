//Inputs
int in = A0;

void setup() {
  Serial.begin(9600);   //Set the baud rate of the comunication
  pinMode(in,INPUT);    //Define the pin as input
}

void loop() {
  //Read the analog value
  float val = analogRead(in);
  
  //Chainging to Illuminance by using the formula provided by the vandor
  float val2 = (1.25*pow(10,7))*pow(val,-1.4059);
  
  //Use serial.print to send the data in a "text" format
  Serial.print(val2);
  delay(1000);//Small delay between each data send 
}
