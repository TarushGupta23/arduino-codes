// button pins
const int btns[] = {A5, A4, A3, A2, A1, A0, 10, 11};

// led pins
const int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};

// speaker pin
const int spk = 12;
// frequencies in an octave [Sa, Re, Ga, Ma ...]
int freq[] = {262, 294, 330, 349, 392, 440, 493, 523};

void setup() {
    for (int i=0; i<8; i++) {
        pinMode(btns[i], INPUT);
        pinMode(leds[i], OUTPUT);
    }
    pinMode(spk, OUTPUT);
    tone(spk, 2000);
}

void loop() {
    int btnPressed = 0;
    for (int i=0; i<8; i++) {
        if (digitalRead(btns[i]) == HIGH) {
            btnPressed = 1;
            tone(spk, freq[i], 50);
            digitalWrite(leds[i], HIGH);
            delay(50);
            digitalWrite(leds[i], LOW);
            noTone(spk);
        }
    }
    if (!btnPressed) {
        delay(50);
    }
}