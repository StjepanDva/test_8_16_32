
uint8_t polje[200];

//16 pojnteri
uint16_t *p0;
uint16_t *p1;
uint16_t *p2;
uint16_t *p3;

uint16_t a;

//32 pojnteri
uint32_t *p4;
uint32_t *p5;
uint32_t *p6;
uint32_t *p7;

uint32_t b;

void setup()
{
    SerialUSB.begin(9600);
    delay(1000);
    SerialUSB.println("Hello suckers");
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    uint8_t i;

    for (i = 0; i < 20; i++)
        polje[i] = i + 5; //neki drek da mogu vidjet kaj se zbiva

    //test 0
    SerialUSB.println("Test 0");
    delay(250);
    p0 = (uint16_t*)&polje[0];
    a = *p0;
    SerialUSB.print("p0 = ");
    delay(250);
    SerialUSB.println(a,HEX);
    delay(250);

    //test 1
    SerialUSB.println("Test 1");
    delay(250);
    p1 = (uint16_t*)&polje[1];
    a = *p1;
    SerialUSB.print("p1 = ");
    delay(250);
    SerialUSB.println(a,HEX);
    delay(250);

    //test 2
    SerialUSB.println("Test 2");
    delay(250);
    p2 = (uint16_t*)&polje[2];
    a = *p2;
    SerialUSB.print("p2 = ");
    delay(250);
    SerialUSB.println(a,HEX);
    delay(250);

    //test 3
    SerialUSB.println("Test 3");
    delay(250);
    p3 = (uint16_t*)&polje[3];
    a = *p3;
    SerialUSB.print("p3 = ");
    delay(250);
    SerialUSB.println(a,HEX);
    delay(250);

    //test 4
    SerialUSB.println("Test 4");
    delay(250);
    p4 = (uint32_t*)&polje[0];
    b = *p4;
    SerialUSB.print("p4 = ");
    delay(250);
    SerialUSB.println(b,HEX);
    delay(250);

    //test 5
    SerialUSB.println("Test 5");
    delay(250);
    p5 = (uint32_t*)&polje[1];
    b = *p5;
    SerialUSB.print("p5 = ");
    delay(250);
    SerialUSB.println(b,HEX);
    delay(250);

    //test 6
    SerialUSB.println("Test 6");
    delay(250);
    p6 = (uint32_t*)&polje[2];
    b = *p6;
    SerialUSB.print("p6 = ");
    delay(250);
    SerialUSB.println(b,HEX);
    delay(250);

    //test 0
    SerialUSB.println("Test 7");
    delay(250);
    p7 = (uint32_t*)&polje[3];
    b = *p7;
    SerialUSB.print("p7 = ");
    delay(250);
    SerialUSB.println(b,HEX);
    delay(250);

    while (1)
    {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(1000);
        digitalWrite(LED_BUILTIN, LOW);
        delay(1000);
    }
}