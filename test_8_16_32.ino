
uint8_t polje[200];

//16 pojnteri
uint16_t *p0;
uint16_t *p1;
uint16_t *p2;
uint16_t *p3;

//32 pojnteri
uint32_t *p4;
uint16_t *p5;
uint16_t *p6;
uint16_t *p7;

void setup()
{
    Serial.begin(9600);
    Serial.println("Hello suckers");
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    uint8_t i;

    for (i = 0; i < 200; i++)
        polje[i] = i + 5; //neki drek da mogu vidjet kaj se zbiva

    //test 0
    Serial.println("Test 0");
    delay(250);
    p0 = (uint16_t*)&polje[0];
    Serial.print("p0 = ");
    delay(250);
    Serial.println(*p0);
    delay(250);

    //test 1
    Serial.println("Test 1");
    delay(250);
    p1 = (uint16_t*)&polje[1];
    Serial.print("p1 = ");
    delay(250);
    Serial.println(*p1);
    delay(250);

    //test 2
    Serial.println("Test 2");
    delay(250);
    p2 = (uint16_t*)&polje[2];
    Serial.print("p2 = ");
    delay(250);
    Serial.println(*p2);
    delay(250);

    //test 3
    Serial.println("Test 3");
    delay(250);
    p3 = (uint16_t*)&polje[3];
    Serial.print("p3 = ");
    delay(250);
    Serial.println(*p3);
    delay(250);

    //test 4
    Serial.println("Test 4");
    delay(250);
    p4 = (uint32_t*)&polje[0];
    Serial.print("p4 = ");
    delay(250);
    Serial.println(*p4);
    delay(250);

    //test 5
    Serial.println("Test 5");
    delay(250);
    p5 = (uint16_t*)&polje[1];
    Serial.print("p5 = ");
    delay(250);
    Serial.println(*p5);
    delay(250);

    //test 6
    Serial.println("Test 6");
    delay(250);
    p6 = (uint16_t*)&polje[2];
    Serial.print("p6 = ");
    delay(250);
    Serial.println(*p6);
    delay(250);

    //test 0
    Serial.println("Test 7");
    delay(250);
    p7 = (uint16_t*)&polje[3];
    Serial.print("p7 = ");
    delay(250);
    Serial.println(*p7);
    delay(250);

    while (1)
    {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(1000);
        digitalWrite(LED_BUILTIN, LOW);
        delay(1000);
    }
}