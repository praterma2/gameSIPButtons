
#define 2 digPadLeft
#define 3 digPadRight
 int currTime = 0;
 int runTime = 0;

 bool valDigPadLeft = 0;
void setup() {
  Serial.begin(9600);
  //SETUP ALL PINS AS INPUTS....
  pinMode(digPadLeft,INPUT);
  pinMode(digPadRight,INPUT)

  //test code
  currTime = millis();
  runTime = millis();
  Serial.println("Checking digPadLeft");
  while(runTime < currTime + 3000 || valDigPadLeft == 0){
    runTime = millis();
    if(digitalRead(digPadLeft) == 1){
      valDigPadLeft = 1;
    }   
  }

  Serial.print("digPadLeft value is: ");
  Serial.print(valDigPadLeft);



  
}

void loop() {
  // put your main code here, to run repeatedly:
  //remain blank
}
