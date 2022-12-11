const int x_pin = A0;
const int y_pin = A1;
const int butt_pin = 4;

int x_value;
int y_value;
int butt_value;


void setup() {
  pinMode(x_pin, INPUT);
  pinMode(y_pin, INPUT);
  pinMode(butt_pin, INPUT);
  Serial.begin(9600);

}

void loop() {
  x_value = analogRead(x_pin);
  y_value = analogRead(y_pin);
  butt_value = digitalRead(butt_pin);
  
  Serial.print("X: ");
  Serial.println(x_value);
  Serial.print("Y: ");
  Serial.println(y_value);
  Serial.print("Butt: ");
  Serial.println(butt_value);
  delay(500);

}
