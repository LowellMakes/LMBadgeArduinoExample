#define LED1 4
#define LED2 3
#define LED3 2
#define LED4 1
#define LED5 0

void blinkLED(int led, int delayTime);
void allOn(int delayTime);
void allOff(int delayTime);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  digitalWrite(LED1, LOW);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED2, LOW);
  pinMode(LED3, OUTPUT);
  digitalWrite(LED3, LOW);
  pinMode(LED4, OUTPUT);
  digitalWrite(LED4, LOW);
  pinMode(LED5, OUTPUT);
  digitalWrite(LED5, LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLED(LED1, 500);
  blinkLED(LED2, 500);
  blinkLED(LED3, 500);
  blinkLED(LED4, 500);
  blinkLED(LED5, 500);
  allOn(500);
  allOff(500);
}

void blinkLED(int led, int delayTime)
{
  digitalWrite(led, HIGH);
  delay(delayTime);
  digitalWrite(led, LOW);
  delay(delayTime);
}

void allOn(int delayTime)
{
  digitalWrite(LED1, HIGH);
  delay(delayTime);
  digitalWrite(LED2, HIGH);
  delay(delayTime);
  digitalWrite(LED3, HIGH);
  delay(delayTime);
  digitalWrite(LED4, HIGH);
  delay(delayTime);
  digitalWrite(LED5, HIGH);
  delay(delayTime);
}



void allOff(int delayTime)
{
  digitalWrite(LED1, LOW);
  delay(delayTime);
  digitalWrite(LED2, LOW);
  delay(delayTime);
  digitalWrite(LED3, LOW);
  delay(delayTime);
  digitalWrite(LED4, LOW);
  delay(delayTime);
  digitalWrite(LED5, LOW);
  delay(delayTime);
}

