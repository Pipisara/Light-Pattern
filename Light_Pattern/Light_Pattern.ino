/*
  Author: Pipisara Chandrabhanu
  Description: This program controls multiple LEDs connected to an Arduino.
  The LEDs will light up in various patterns with adjustable timing for visual effects.
*/


void setup() {
  // Initialize pins 2 to 9 as OUTPUT
  for (int i = 2; i <= 9; i++) {
    for (int m = 2; m <= 9; m++) {
      for (int l = 2; l <= 9; l++) {
        pinMode(i, OUTPUT); // Set pin i as OUTPUT
        pinMode(l, OUTPUT); // Set pin l as OUTPUT
        pinMode(m, OUTPUT); // Set pin m as OUTPUT
      }
    }
  }
}

void loop() {
  // Loop for a variable n that increments to control timing
  for (int n = 20; n <= 40; n = n + 40) {
    // Sequentially turn on pins 2 to 9 with a delay
    for (int m = 2; m <= 9; m++) {
      digitalWrite(m, HIGH); // Turn pin m ON
      delay(n);              // Wait for n milliseconds
      digitalWrite(m, LOW);  // Turn pin m OFF
      delay(n);              // Wait for n milliseconds
    }
    
    // Reverse the order of turning on pins 2 to 9
    for (int m = 2; m <= 9; m++) {
      digitalWrite(m, LOW); // Ensure pin m is OFF
      delay(n);
      digitalWrite(m, HIGH); // Turn pin m ON
      delay(n);
    }

    delay(n + 100); // Pause for a brief moment

    // Turn on pins in reverse order from 9 to 2
    for (int m = 9; m >= 2; m--) {
      digitalWrite(m, HIGH); // Turn pin m ON
      delay(n);
      digitalWrite(m, LOW);  // Turn pin m OFF
      delay(n);
    }

    delay(n + 100); // Pause for a brief moment

    // Reverse the order of turning on pins from 9 to 2
    for (int m = 9; m >= 2; m--) {
      digitalWrite(m, LOW); // Ensure pin m is OFF
      delay(n);
      digitalWrite(m, HIGH); // Turn pin m ON
      delay(n);
    }

    // Turn on pins from 5 to 2
    for (int m = 5; m >= 2; m--) {
      digitalWrite(m, HIGH); // Turn pin m ON
      delay(n);
      digitalWrite(m, LOW);  // Turn pin m OFF
      delay(n);
    }

    // Turn on pins from 6 to 9
    for (int m = 6; m <= 9; m++) {
      digitalWrite(m, HIGH); // Turn pin m ON
      delay(n);
      digitalWrite(m, LOW);  // Turn pin m OFF
      delay(n);
    }

    // Alternate between LOW and HIGH for even pins from 2 to 9
    for (int m = 2; m <= 9; m = m + 2) {
      digitalWrite(m, LOW);  // Turn pin m OFF
      delay(n);
      digitalWrite(m, HIGH); // Turn pin m ON
      delay(n);
    }

    // Alternate between LOW and HIGH for odd pins from 3 to 9
    for (int m = 3; m <= 9; m = m + 2) {
      digitalWrite(m, LOW);  // Turn pin m OFF
      delay(n);
      digitalWrite(m, HIGH); // Turn pin m ON
      delay(n);
    }

    // Reverse the order for odd pins from 9 to 3
    for (int m = 9; m >= 3; m = m - 2) {
      digitalWrite(m, LOW);  // Turn pin m OFF
      delay(n);
      digitalWrite(m, HIGH); // Turn pin m ON
      delay(n);
    }

    // Reverse the order for even pins from 8 to 3
    for (int m = 8; m >= 3; m = m - 2) {
      digitalWrite(m, LOW);  // Turn pin m OFF
      delay(n);
      digitalWrite(m, HIGH); // Turn pin m ON
      delay(n);
    }

    // Turn on pairs of pins (m and m + 1)
    for (int m = 2; m <= 9; m++) {
      digitalWrite(m, HIGH);         // Turn pin m ON
      digitalWrite(m + 1, HIGH);     // Turn pin m + 1 ON
      delay(n);
      digitalWrite(m, LOW);          // Turn pin m OFF
      digitalWrite(m + 1, LOW);      // Turn pin m + 1 OFF
      delay(n);
    }

    // Turn off pairs of pins in reverse order
    for (int m = 9; m >= 2; m--) {
      digitalWrite(m, LOW);          // Turn pin m OFF
      digitalWrite(m - 1, LOW);      // Turn pin m - 1 OFF
      delay(n);
      digitalWrite(m, HIGH);         // Turn pin m ON
      digitalWrite(m - 1, HIGH);     // Turn pin m - 1 ON
      delay(n);
    }

    // Flash lights on pins 5 and 6 with a sequence
    for (int j = 4; j > 0; j = j - 1) {
      digitalWrite(5 + j, LOW);      // Turn pin 5 + j OFF
      digitalWrite(6 - j, LOW);      // Turn pin 6 - j OFF
      delay(n);
      digitalWrite(5 + j, HIGH);     // Turn pin 5 + j ON
      digitalWrite(6 - j, HIGH);     // Turn pin 6 - j ON
      delay(n);
    }

    // Repeat flashing sequence in reverse
    for (int j = 4; j > 0; j = j - 1) {
      digitalWrite(5 + j, HIGH);     // Turn pin 5 + j ON
      digitalWrite(6 - j, HIGH);     // Turn pin 6 - j ON
      delay(n);
      digitalWrite(5 + j, LOW);      // Turn pin 5 + j OFF
      digitalWrite(6 - j, LOW);      // Turn pin 6 - j OFF
      delay(n);
    }

    // Flash lights on pins 5 and 6 with a sequence
    for (int j = 1; j < 5; j = j + 1) {
      digitalWrite(5 + j, LOW);      // Turn pin 5 + j OFF
      digitalWrite(6 - j, LOW);      // Turn pin 6 - j OFF
      delay(n);
      digitalWrite(5 + j, HIGH);     // Turn pin 5 + j ON
      digitalWrite(6 - j, HIGH);     // Turn pin 6 - j ON
      delay(n);
    }

    // Ensure pins 5 and 6 are turned OFF
    for (int j = 4; j > 0; j = j - 1) {
      digitalWrite(5 + j, LOW);      // Turn pin 5 + j OFF
      digitalWrite(6 - j, LOW);      // Turn pin 6 - j OFF
      delay(n);
    }

    // Turn ON all pins 2 to 9
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);

    // Turn OFF selected pins for a brief pause
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(400); // Wait for 400 milliseconds

    // Turn ON selected pins again
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);

    // Turn OFF and ON sequence for pins 3, 4, 7, and 8
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(400);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);

    // Turn OFF and ON sequence for pins 4, 5, 8, and 9
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(400);

    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);

    // Repeat the pattern for selected pins
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(400); // Wait for 400 milliseconds

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);

    // Turn OFF and ON sequence for pins 3, 4, 7, and 8
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(400);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);

    // Final OFF sequence for all pins
    for (int m = 2; m <= 9; m++) {
      digitalWrite(m, LOW); // Turn all pins OFF
    }

    delay(400); // Wait before restarting the loop
  }
}
