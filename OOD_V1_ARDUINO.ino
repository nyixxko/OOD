//Inputs
int in = A0;

void setup() {
  Serial.begin(9600);   //Set the baud rate of the comunication
  pinMode(in,INPUT);    //Define the pin as input
}

void loop() {
  //Read the analog value
  float val = analogRead(in);
  
  //Use serial.print to send the data in a "text" format
  Serial.print(val);
  delay(400);//Small delay between each data send 
}
