int ir1 = A0;
int ir2 = A1;
int ir3 = A2;
int ir4 = A3;
int ir5 = A4;
int ir6 = A5;
int ir7 = A6;
int ir8 = A7;

int ir1Value = 0;
int ir2Value = 0;
int ir3Value = 0;
int ir4Value = 0;
int ir5Value = 0;
int ir6Value = 0;
int ir7Value = 0;
int ir8Value = 0;

int ir = 13;

unsigned long vorige;



void setup() 
{
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
  pinMode(ir6, INPUT);
  pinMode(ir7, INPUT);
  pinMode(ir8, INPUT);

  pinMode(ir, OUTPUT);

  Serial.begin(9600);

  vorige = millis();

  digitalWrite(ir, HIGH);
}

void loop() 
{
  unsigned long huidige = millis();

  if (huidige - vorige > 1000)
  {
    ir1Value = analogRead(ir1);
    ir2Value = analogRead(ir2);
    ir3Value = analogRead(ir3);
    ir4Value = analogRead(ir4);
    ir5Value = analogRead(ir5);
    ir6Value = analogRead(ir6);
    ir7Value = analogRead(ir7);
    ir8Value = analogRead(ir8);

    Serial.print(ir1Value);
    Serial.print(", ");
    Serial.print(ir2Value);
    Serial.print(", ");
    Serial.print(ir3Value);
    Serial.print(", ");
    Serial.print(ir4Value);
    Serial.print(", ");
    Serial.print(ir5Value);
    Serial.print(", ");
    Serial.print(ir6Value);
    Serial.print(", ");
    Serial.print(ir7Value);
    Serial.print(", ");
    Serial.println(ir8Value);

    vorige = huidige;
  }
}
