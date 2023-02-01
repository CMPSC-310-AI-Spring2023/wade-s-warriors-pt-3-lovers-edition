/*
Jake, Stephen, and Jake

*/

#include "pitches.h"

// notes in the melody:
int melody[] = {

    NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {

    4, 8, 8, 4, 4, 4, 4, 4};

void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(4, HIGH);
  delay(500);
}

void loop()
{
  if (analogRead(A0) > 60)
  {
    digitalWrite(4, HIGH);
    // iterate over the notes of the melody:

    for (int thisNote = 0; thisNote < 8; thisNote++)
    {

      // to calculate the note duration, take one second divided by the note type.

      // e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.

      int noteDuration = 1000 / noteDurations[thisNote];

      tone(8, melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.

      // the note's duration + 30% seems to work well:

      int pauseBetweenNotes = noteDuration * 1.30;

      delay(pauseBetweenNotes);

      // stop the tone playing:

      noTone(8);
    }
    else
    {
      digitalWrite(4, LOW);
    }
    if (analogRead(A0) > 20)
    {
      digitalWrite(2, HIGH);
    }
    else
    {
      digitalWrite(2, LOW);
    }
    if (analogRead(A0) > 45)
    {
      digitalWrite(3, HIGH);
    }
    else
    {
      digitalWrite(3, LOW);
    }

    Serial.println(analogRead(A0));
    delay(20);
  }
}