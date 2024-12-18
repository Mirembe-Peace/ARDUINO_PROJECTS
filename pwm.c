#define NUM_LEDS 5   // Number of LEDs
#define POT_PIN A0    // Analog pin connected to the potentiometer

int red = 3;
int green = 5;
int blue = 6;
int yellow = 10;
int white = 11;
int ledPins[NUM_LEDS] = {red, green, blue, yellow, white};
void setup() {
    // Set all LED pins as outputs
     pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(A0, INPUT);

}

void loop() {
    // Read the potentiometer value (0 to 1023)
    int potValue = analogRead(A0);
    
    // Map the potentiometer value to an LED index (0 to NUM_LEDS-1)
    int ledIndex = (potValue * NUM_LEDS) / 1024;
    
  
    for (int i = 0; i < NUM_LEDS; i++) {
            analogWrite(ledPins[i], 255);  // Turn on the selected LED

    }
    
}
