/*
  Botão
 Liga e desliga um diodo emissor de luz (LED) conectado ao
 pino 13, ao pressionar um botão preso ao pino 2.
 O circuito:
 * LED conectado do pino 13 ao terra
 * botão ligado ao pino 2 de + 5V
 * Resistor de 10K conectado ao pino 2 do chão
 * Nota: na maioria dos Arduinos já existe um LED na placa
 anexado ao pino 13.
 criado em 2005
 por DojoDave <http://www.0j0.org>
 modificado em 30 de agosto de 2011
 por Tom Igoe
 Este código de exemplo está no domínio público.
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
