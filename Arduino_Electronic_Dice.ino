const int buttonPin = 2;

int leds[] = {3,4,5,6,7,8}; 

int dice;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  for (int i = 0; i < 6; i++)
  {
   
    pinMode(leds[i], OUTPUT);

  }

}

void loop() {
 if (digitalRead(buttonPin) == LOW)
 {
 for(int i = 0; i < 6; i++)
{
 
  digitalWrite(leds[i], LOW);

}
 dice = random(1,7);

 for(int i = 0; i < dice; i++)
 {
 
digitalWrite(leds[i], HIGH);


 }
 while (digitalRead(buttonPin) ==LOW)
 {
  // Wait until the button is released.
 }
  }
   }
