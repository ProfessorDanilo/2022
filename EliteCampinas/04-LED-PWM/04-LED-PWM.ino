int led = 3;

int i = 0;

void setup()
{  
}

void loop()
{
  for (i = 0; i <= 255; i=i+1) {
    analogWrite(led, i);
    delay(10); // Wait for 100 millisecond(s)
  }
  for (i = 255; i >= 0; i=i-1) {
    analogWrite(led, i);
    delay(10); // Wait for 100 millisecond(s)
  }
}
