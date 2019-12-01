

const int bizzPin = 8;
const int buttonLedPin = 9;
const int buttonSwitchPin = 10;
const int lightPin = 11;


void setup() {
  Serial.begin(9600);
  pinMode(bizzPin, OUTPUT);
  pinMode(buttonLedPin, OUTPUT);
  pinMode(buttonSwitchPin, INPUT_PULLUP);
  pinMode(lightPin, OUTPUT);
  
}

void loop() {
  
int buttonState = digitalRead(buttonSwitchPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW) 
  {
    // turn LED on:
    digitalWrite(bizzPin, HIGH);
    digitalWrite(buttonLedPin, HIGH);
    digitalWrite(lightPin, HIGH);

    Serial.println("goods hight");

    
  } else {
    // turn LED off:
    digitalWrite(bizzPin, LOW);
    digitalWrite(buttonLedPin, LOW);
    digitalWrite(lightPin, LOW);
    
    Serial.println("goods low");
  }
  
}
