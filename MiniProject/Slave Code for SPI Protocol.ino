#include<SPI.h>
volatile boolean val_obtained;
volatile boolean Slave_obtained;

void setup()
{
  Serial.begin(9600);
  pinMode(MISO, OUTPUT);
  pinMode(10, INPUT);
  digitalWrite(10, LOW);
  SPCR |= _BV(SPE);
  val_obtained = false;
  SPI.attachInterrupt();
  Serial.print("SYSTEM STARTING...........");
  delay(2000);
  Serial.print("SYSTEM READY TO START.......");
}
ISR(SPI_STC_vect)
{
  Slave_obtained = SPDR;
  val_obtained = true;
}
void loop()
{
  if (val_obtained)
  {
    if (Slave_obtaineded == HIGH)
    {
      val_obtained = false;
      Serial.print("\n Night Lamp Triggered\n");
      delay(1000);
    }
  }
  else
  {
    val_obtained = false;
    Serial.print("Night Lamp Switched Off\n");
    delay(1000);
  }
}
