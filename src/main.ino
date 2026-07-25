//=====================================================
// Traffic Light Controller using Finite State Machine
//=====================================================

// LED Pin Definitions
const int RED_LED = 8;
const int YELLOW_LED = 9;
const int GREEN_LED = 10;
//=====================================================
// Traffic Light States
//=====================================================

enum TrafficState
{
    RED,
    RED_YELLOW,
    GREEN,
    YELLOW
};

TrafficState currentState = RED;
//=====================================================
// Arduino Entry Functions
//=====================================================

void setup()
{
   pinMode(RED_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
}

void loop()
{
    switch (currentState)
    {
        case RED:

            digitalWrite(RED_LED, HIGH);
            digitalWrite(YELLOW_LED, LOW);
            digitalWrite(GREEN_LED, LOW);

            delay(3000);

            currentState = RED_YELLOW;
            break;


        case RED_YELLOW:

            digitalWrite(RED_LED, HIGH);
            digitalWrite(YELLOW_LED, HIGH);
            digitalWrite(GREEN_LED, LOW);

            delay(1000);

            currentState = GREEN;
            break;


        case GREEN:

            digitalWrite(RED_LED, LOW);
            digitalWrite(YELLOW_LED, LOW);
            digitalWrite(GREEN_LED, HIGH);

            delay(3000);

            currentState = YELLOW;
            break;


        case YELLOW:

            digitalWrite(RED_LED, LOW);
            digitalWrite(YELLOW_LED, HIGH);
            digitalWrite(GREEN_LED, LOW);

            delay(1000);

            currentState = RED;
            break;
    }
}