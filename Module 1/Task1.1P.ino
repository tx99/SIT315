int run = 0;

int temperature = 0;

int input = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  analogRead(A0);

  digitalWrite(13, LOW);
  run = 1;
  temperature = 0;

  while (run == 1) {
    temperature = analogRead(A0);
    Serial.println(temperature);
    if (temperature > 20) {
      digitalWrite(13, HIGH);
    } else {
      digitalWrite(13, LOW);
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}