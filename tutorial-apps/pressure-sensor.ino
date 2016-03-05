int led = D0; // LED is connected to D0
int pressureSensor = D2; // Pressure sensor is connected to D2

// This routine runs only once upon reset
void setup()
{
  pinMode(led, OUTPUT); // Initialize D0 pin as output
  pinMode(pressureSensor, INPUT_PULLUP);
  // Initialize D2 pin as input with an internal pull-up resistor
}

// This routine loops forever
void loop()
{
  int pressureSensorState;

  pressureSensorState = digitalRead(pressureSensor);

  if(pressureSensorState == LOW){ //If we push down on the push button
    digitalWrite(led, HIGH);  // Turn ON the LED
  }
  else
  {
    if(pressureSensorState == HIGH){
      digitalWrite(led, LOW); // Turn OFF the LED
    }
  }
}