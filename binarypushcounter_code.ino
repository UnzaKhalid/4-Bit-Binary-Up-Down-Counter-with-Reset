int led4 = 2;
int led3 = 3;
int led2 = 4;
int led1 = 5;

int buttonpositive = 10;
int buttonnegative = 9;
int resetbutton = 8;

int lastUpState = HIGH;
int lastDownState = HIGH;
int lastResetState = HIGH;

int count = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  
  
  pinMode(buttonpositive, INPUT_PULLUP);
  pinMode(buttonnegative, INPUT_PULLUP);
  pinMode(resetbutton, INPUT_PULLUP);
 
  
  updateLEDs(); 
}

void loop() {
  int currentUpState = digitalRead(buttonpositive);
  int currentDownState = digitalRead(buttonnegative);
  int currentResetState = digitalRead(resetbutton);

  // Count Up Button
  if (currentUpState == LOW && lastUpState == HIGH) {
    count++;
    if (count > 15) count = 0; 
    updateLEDs();
    delay(200);
  }
  lastUpState = currentUpState; 

  // Count Down Button
  if (currentDownState == LOW && lastDownState == HIGH) {
    count--; 
    if (count < 0) count = 15; 
    updateLEDs(); 
    delay(200);
  }
  lastDownState = currentDownState;

  // Reset Button
if (currentResetState == LOW && lastResetState == HIGH) {
    count = 0;      
    updateLEDs();   
    delay(200);      
  }
  lastResetState = currentResetState;

} 


void updateLEDs() {
  digitalWrite(led1, bitRead(count, 0)); 
  digitalWrite(led2, bitRead(count, 1)); 
  digitalWrite(led3, bitRead(count, 2)); 
  digitalWrite(led4, bitRead(count, 3)); 
}
