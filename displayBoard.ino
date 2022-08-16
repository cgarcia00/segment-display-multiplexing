#define BOTTOM_LEFT A5
#define BOTTOM A4
#define BOTTOM_RIGHT A3
#define MIDDLE A2
#define TOP_RIGHT A1
#define TOP A0
#define TOP_LEFT 2

#define L1 1
#define L2 3
#define L3 4
#define L4 5
#define L5 6
#define L6 7
#define L7 13
#define L8 11
#define L9 12
#define L10 10
#define L11 9
#define L12 8

//  Here the Serial port is started and all the pins are setup.
void setup() {
  Serial.begin(9600);
  pinMode(A5, OUTPUT); // Bottom Left
  pinMode(A4, OUTPUT); // Bottom
  pinMode(A3, OUTPUT); // Bottom Right
  pinMode(A2, OUTPUT); // Middle
  pinMode(A1, OUTPUT); // Top Right
  pinMode(A0, OUTPUT); // Top
  pinMode(2, OUTPUT); // Top Left

  //pinMode(1, OUTPUT); PIN 1 cannot be used if the Serial port is used which it is ): 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

//This function sets all pins low so the next character can be displayed
void setAllLow() {
  digitalWrite(TOP, LOW);
  digitalWrite(TOP_LEFT, LOW);
  digitalWrite(TOP_RIGHT, LOW);
  digitalWrite(MIDDLE, LOW);
  digitalWrite(BOTTOM, LOW);
  digitalWrite(BOTTOM_LEFT, LOW);
  digitalWrite(BOTTOM_RIGHT, LOW);
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L4, LOW);
  digitalWrite(L5, LOW);
  digitalWrite(L6, LOW);
  digitalWrite(L7, LOW);
  digitalWrite(L8, LOW);
  digitalWrite(L9, LOW);
  digitalWrite(L10, LOW);
  digitalWrite(L11, LOW);
  digitalWrite(L12, LOW);
}

/* 
 *  This large switch statement goes through all capital and lowercase letters
 *  and numbers and encodes them into a list of digitalWrites that will
 *  write the character if those pins are set high. 
 */

void setCharHigh(char c) {
  switch (c) {
    case 'A':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'B':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'C':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'D':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'E':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'F':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'G':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'H':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'I':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'J':
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'K':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'L':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'M':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM, HIGH);
      break;
    case 'N':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'O':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'P':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'Q':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'R':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'S':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'T':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'U':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'V':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'W':
      digitalWrite(TOP, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'X':
      digitalWrite(TOP, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      break;
    case 'Y':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'Z':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'a':
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'b':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'c':
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'd':
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'e':
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'f':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'g':
      digitalWrite(TOP, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'h':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'i':
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'j':
      digitalWrite(TOP, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'k':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      break;
    case 'l':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'm':
      digitalWrite(TOP, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'n':
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'o':
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'p':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'q':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'r':
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 's':
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 't':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case 'u':
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'v':
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'w':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM, HIGH);
      break;
    case 'x':
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      break;
    case 'y':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case 'z':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case '1':
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case '2':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      break;
    case '3':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case '4':
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case '5':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case '6':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case '7':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case '8':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case '9':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case '0':
      digitalWrite(TOP, HIGH);
      digitalWrite(TOP_LEFT, HIGH);
      digitalWrite(TOP_RIGHT, HIGH);
      digitalWrite(BOTTOM, HIGH);
      digitalWrite(BOTTOM_LEFT, HIGH);
      digitalWrite(BOTTOM_RIGHT, HIGH);
      break;
    case '=':
      digitalWrite(MIDDLE, HIGH);
      digitalWrite(BOTTOM, HIGH);
      break;
    default:
      break;
  }
}

/* 
 *  The L[] array has the constant values for lights 2 through 12.
 *  The loop then waits for Serial input using Serial.available.
 *  Once data is available the data is read as a string and displayed.
 *  Then the inner for loop goes through each of the lights and displays
 *  the corresponding character from the string. If new data is entered 
 *  that loop is broken out of and that new string is displayed. 
 */
void loop() {
  //L1 skipped in the L[] array because the extra pins is needed for Serial input
  short L[] = {L2, L3, L4, L5, L6, L7, L8, L9, L10, L11, L12};
  while(true){
    short dataExists = Serial.available();
    String string = Serial.readString();
    while(string != "") {
      short curLight = 0;
      for (int i=0; i < string.length(); i++) {
        delay(1);
        if (curLight == 11) {
          curLight == 1;
        }
        setAllLow();
        digitalWrite(L[curLight], HIGH);
        setCharHigh(string[i]);
        curLight++;
      }
      //This code checks if new data is available to display a new string
      dataExists = Serial.available();
      if (dataExists > 0) break;
    }  
  }
}
