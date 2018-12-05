/*Alphabets*/
char ace_A[] = "+";
char ace_B[] = "!!+";
char ace_C[] = "!+&";
char ace_D[] = "!+";
char ace_E[] = "!";
char ace_F[] = "!+!";
char ace_G[] = "++";
char ace_H[] = "!++";
char ace_I[] = "!!";
char ace_J[] = "+!!";
char ace_K[] = "!&";
char ace_L[] = "!!&";
char ace_M[] = "+!";
char ace_N[] = "+&";
char ace_O[] = "&+";
char ace_P[] = "&!";
char ace_Q[] = "+++";
char ace_R[] = "!&+";
char ace_S[] = "++!";
char ace_T[] = "&";
char ace_U[] = "&&";
char ace_V[] = "!&!";
char ace_W[] = "+!&";
char ace_X[] = "+&!";
char ace_Y[] = "!&&";
char ace_Z[] = "++&";

/*Digits*/
char ace_1[] = "&!!+";
char ace_2[] = "&!!&";
char ace_3[] = "&!+!";
char ace_4[] = "&!++";
char ace_5[] = "&!+&";
char ace_6[] = "&!&!";
char ace_7[] = "&!&+";
char ace_8[] = "&!&&";
char ace_9[] = "&+!!";
char ace_0[] = "&!!!";

/*Puncuation*/
char ace_FullStop[] = "&!!";
char ace_Comma[] = "&!+";
char ace_Apostrophe[] = "&+!";
char ace_QuestionMark[] = "&++";
char ace_ExclamationMark[] = "&+&";
char ace_Plus[] = "&&+";
char ace_Minus[] = "&&!";
char ace_Multiply[] = "&&&";
char ace_Divide[] = "&!&";
char ace_Equals[] = "&+++&";


// Returns the ACE of the Ascii that is entered
char * asciitoace(char c) {
  c = toupper (c); // uppercase letters to be read by the code
  switch (c) {
    case 'A': return ace_A;// If the letter A is entered then return  code for A
      break;
    case 'B': return ace_B;// If the letter B is entered then return  code for B
      break;
    case 'C': return ace_C;
      break;
    case 'D': return ace_D;
      break;
    case 'E': return ace_E;
      break;
    case 'F': return ace_F;
      break;
    case 'G': return ace_G;
      break;
    case 'H': return ace_H;
      break;
    case 'I': return ace_I;
      break;
    case 'J': return ace_J;
      break;
    case 'K': return ace_K;
      break;
    case 'L': return ace_L;
      break;
    case 'M': return ace_M;
      break;
    case 'N': return ace_N;
      break;
    case 'O': return ace_O;
      break;
    case 'P': return ace_P;
      break;
    case 'Q': return ace_Q;
      break;
    case 'R': return ace_R;
      break;
    case 'S': return ace_S;
      break;
    case 'T': return ace_T;
      break;
    case 'U': return ace_U;
      break;
    case 'V': return ace_V;
      break;
    case 'W': return ace_W;
      break;
    case 'X': return ace_X;
      break;
    case 'Y': return ace_Y;
      break;
    case 'Z': return ace_Z;
      break;
    case '0': return ace_0;// Returning  Digits
      break;
    case '1': return ace_1;
      break;
    case '2': return ace_2;
      break;
    case '3': return ace_3;
      break;
    case '4': return ace_4;
      break;
    case '5': return ace_5;
      break;
    case '6': return ace_6;
      break;
    case '7': return ace_7;
      break;
    case '8': return ace_8;
      break;
    case '9': return ace_9;
      break;
    case '.': return ace_FullStop; // Returning Punctuation
      break;
    case ',': return ace_Comma;
      break;
    case '\'': return ace_Apostrophe;
      break;
    case '?': return ace_QuestionMark;
      break;
    case '!': return ace_ExclamationMark;
      break;
    case '+': return ace_Plus;
      break;
    case '-': return ace_Minus;
      break;
    case '*': return ace_Multiply;
      break;
    case '/': return ace_Divide;
      break;
    case '=': return ace_Equals;
      break;
  }
}
// Prints each ACE as an Ascii character
char acetoascii(String c) {
  if (c.equals(ace_A)) Serial.print('A');
  if (c.equals(ace_B)) Serial.print('B');
  if (c.equals(ace_C)) Serial.print('C');
  if (c.equals(ace_D)) Serial.print('D');
  if (c.equals(ace_E)) Serial.print('E');
  if (c.equals(ace_F)) Serial.print('F');
  if (c.equals(ace_G)) Serial.print('G');
  if (c.equals(ace_H)) Serial.print('H');
  if (c.equals(ace_I)) Serial.print('I');
  if (c.equals(ace_J)) Serial.print('J');
  if (c.equals(ace_K)) Serial.print('K');
  if (c.equals(ace_L)) Serial.print('L');
  if (c.equals(ace_M)) Serial.print('M');
  if (c.equals(ace_N)) Serial.print('N');
  if (c.equals(ace_O)) Serial.print('O');
  if (c.equals(ace_P)) Serial.print('P');
  if (c.equals(ace_Q)) Serial.print('Q');
  if (c.equals(ace_R)) Serial.print('R');
  if (c.equals(ace_S)) Serial.print('S');
  if (c.equals(ace_T)) Serial.print('T');
  if (c.equals(ace_U)) Serial.print('U');
  if (c.equals(ace_V)) Serial.print('V');
  if (c.equals(ace_W)) Serial.print('W');
  if (c.equals(ace_X)) Serial.print('X');
  if (c.equals(ace_Y)) Serial.print('Y');
  if (c.equals(ace_Z)) Serial.print('Z');
  if (c.equals(ace_0)) Serial.print('0');;//Digits
  if (c.equals(ace_1)) Serial.print('1');
  if (c.equals(ace_2)) Serial.print('2');
  if (c.equals(ace_3)) Serial.print('3');
  if (c.equals(ace_4)) Serial.print('4');
  if (c.equals(ace_5)) Serial.print('5');
  if (c.equals(ace_6)) Serial.print('6');
  if (c.equals(ace_7)) Serial.print('7');
  if (c.equals(ace_8)) Serial.print('8');
  if (c.equals(ace_9)) Serial.print('9');
  if (c.equals(ace_FullStop)) Serial.print ('.');//Punctuation
  if (c.equals(ace_Comma))Serial.print (',');
  if (c.equals(ace_Apostrophe)) Serial.print ('\'');
  if (c.equals(ace_QuestionMark)) Serial.print ('?');
  if (c.equals(ace_ExclamationMark)) Serial.print ('!');
  if (c.equals(ace_Plus)) Serial.print ('+');
  if (c.equals(ace_Minus)) Serial.print ('-');
  if (c.equals(ace_Multiply)) Serial.print ('*');
  if (c.equals(ace_Divide)) Serial.print ('/');
  if (c.equals(ace_Equals)) Serial.print ('=');

}
const byte modifiedled = 5 ; //red LED
const byte unmodifiedled = 11; //blue LED
int potpin = A0;//potentiometer pin
String unmodifiedString = "";//unmodified string variable to store keyboard input

void setup() {
  Serial.begin (9600);//board read for the serial connection
  pinMode (unmodifiedled, OUTPUT);
  pinMode (modifiedled, OUTPUT);
  pinMode (potpin, INPUT);

}


void loop() {
  if (Serial.available() == 0) {//if serial moniter is open
    unmodifiedString = Serial.readString();//take any input from serial moniter and put it into a string
    //Serial.println(unmodifiedString);
  }
  chooseEncodeorDecode(unmodifiedString);//function to decide what to do
}

//choose encode or decode
void chooseEncodeorDecode(String s) {//parameter string for unmodified string
  if ((s.charAt(0) == '!') || (s.charAt(0) == '&') || (s.charAt(0) == '+')) {//if the 1st charactor of unmidfied string is eitehr of those charactors then decode
    decodeAceToAscii(s); //function to decode using unmodified string
    flashledfuntion(s, unmodifiedled);
  }
  else {
    encodeAsciiToAce(s);//if its anyother charactor then encode
  }
}
// Encodes the Ascii text to ACE
void encodeAsciiToAce(String s) {//takes in a parameter of unmodified string
  for (int i = 0; i < s.length(); i++) {//itirating through each charactor of the stringt
    if (s.charAt (i) == ' ') {//if position i in the string is a space
      Serial.print(" ");//print a space
    }
    else {
      Serial.print(asciitoace(s[i]));//else look at the relevent position in the table and print out
      if (i == s.length() - 1) {//if we have arrived at the last character in the string we don't want anymore slashes
        Serial.println();//start a new line
      }
      else if (s.charAt(i + 1) == ' ') {//if the next charactor in the string is a space,

      }//do nothing
      else {
        Serial.print("/");//print the slash to divide each ace
      }
    }
  }
}


void decodeAceToAscii(String s) {//pass through a parameter of unmodified string
  int lastslash = 0;//create a variable to store the position of last slash
  String subs;//create a string to store the sequenc of ace charactors
  s += "/";//add an artificial forward slash at the end of the string
  s.replace(" ", "/ /");//replace all spaces in the unmodified string with //
  for (int i = 0; i < s.length(); i++) {//itirating through the adapted string
    if (s.charAt(i) == '/') {//if a position in the string is a slash
      if (lastslash == 0) {//if its at position zero
        subs = s.substring(0, i);//anything b/w zero and i is a substring
      }
      else {
        subs = s.substring(lastslash + 1, i);//everything between the next position slash and position i will be a substring
      }
      lastslash = i;//last slash will be the current position
      acetoascii(subs);//use the look up table to print out the matching substring
      if (i != s.length() - 1) {//if position i is not the last charactor
        if (s.charAt(i + 1) == ' ') {//if the next charactor is a space
          Serial.print(" ");//print a space
        }
      }
    }
  }
  Serial.println();//start a new line ready for next message
}
void flashledfunction(String s, int inputpin) {
  int timeinput = analogRead (potpin);
  int timeunit = map(timeinput, 0, 1024, 20, 500);
  int timeexclamationmark = timeunit; //this is one time unit
  int timeplus = timeunit * 2; //this is 2 time units
  int timeampersand = timeunit * 4; //this is 4 times unit
  int inchar = timeunit;
  int betweenchar = timeunit * 3;
  int betweenwords = timeunit * 5;



  int whichpin = 0 ;
  if (inputpin == unmodifiedled) {
    whichpin = unmodifiedled;
  }
  else if (inputpin == modifiedled) {
    whichpin = modifiedled;

  }
  for (int i = 0, i < s.length(), i++) {
    switch (s.charAt(i) {
    case '!':
      digitalWrite(whichpin, HIGH);
        delay(timeexclamationmark);
        break;
      case '+':
        digitalWrite(whichPin, HIGH); //Turn on the stated LED
        delay(timeplus);
        break; //exit
      case '&':
        digitalWrite(whichPin, HIGH);
        delay(timeampersand);
        break; //exit

    }
  }

}
}



