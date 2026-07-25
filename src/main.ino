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
// Function to Control Traffic Lights
//=====================================================

void setTrafficLights(bool red, bool yellow, bool green)
{
    digitalWrite(RED_LED, red);
    digitalWrite(YELLOW_LED, yellow);
    digitalWrite(GREEN_LED, green);
}
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

            setTrafficLights(HIGH, LOW, LOW);

            delay(3000);

            currentState = RED_YELLOW;
            break;


        case RED_YELLOW:

           setTrafficLights(HIGH, HIGH, LOW);

            delay(1000);

            currentState = GREEN;
            break;


        case GREEN:

           setTrafficLights(LOW, LOW, HIGH);

            delay(3000);

            currentState = YELLOW;
            break;


        case YELLOW:

           setTrafficLights(LOW, HIGH, LOW);

            delay(1000);

            currentState = RED;
            break;
    }
}