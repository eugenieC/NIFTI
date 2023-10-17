#include "AS726X.h"

AS726X sensor;
bool previous = 0;
int counter = 0;
double sumT = 0.0;
double sumS = 0.0;

void printLine()
{
  Serial.println();
}

template <typename T, typename... Types>
void printLine(T first, Types... other)
{
  Serial.println(first);
  printLine(other...) ;
}

void setup() {
  Wire.begin();
  Serial.begin(115200);
  pinMode(13, OUTPUT);
  pinMode(3, INPUT_PULLUP);
  sensor.begin();
}

void loop() {

  Serial.println();
  
  byte sensorval = digitalRead(3);
  if (sensorval == LOW) {
    if (previous == 0) {
      delay(250);
      Serial.println("turning on");
      digitalWrite(13, HIGH);
      previous = 1;
    } 
    else {
      delay(250);
      Serial.println("turning off");
      digitalWrite(13, LOW);
      previous = 0;
    }
  }
  
  sensor.takeMeasurements();
  //Prints all measurements
  if (sensor.getVersion() == SENSORTYPE_AS7263)
  {
    //Near IR readings

    
    /*Serial.print(" Reading: R["); 
    Serial.print(sensor.getCalibratedR(), 2); */

    /*
    Serial.print("S[");
    Serial.print(sensor.getCalibratedS(), 2);
    Serial.print("] T[");
    Serial.print(sensor.getCalibratedT(), 2);
    Serial.print("]");*/

    

    /*sumT = sumT + ratioTS;
    sumS = sumS + ratioST;

    if (counter % 10 == 0) {
      printLine("Average Ratio T/S: ", sumT/10);
      printLine("Average Ratio S/T: ", sumS/10);
      sumT = 0;
      sumS = 0; 
    }

    counter++;

    */

    /*float T = sensor.getCalibratedT();
    float S = sensor.getCalibratedS();
    float ratioTS = (T)/(S);
    float ratioST = (S)/(T);
    
    printLine("Ratio T/S: ", ratioTS);
    printLine("Ratio S/T: ", ratioST);*/
    
    Serial.print("] U[");
    Serial.print(sensor.getCalibratedU(), 2);
    Serial.print("] V[");
    Serial.print(sensor.getCalibratedV(), 2);
    Serial.print("]") ;

    
    

    float U = sensor.getCalibratedU();
    float V = sensor.getCalibratedV();
    float ratioUV = (U)/(V);
    float ratioVU = (V)/(U);

    printLine("Ratio U/V: ", ratioUV);
    printLine("Ratio V/U: ", ratioVU);
    
   }



   /* sumT = sumT + sensor.getCalibratedT();
   sumS = sumS + sensor.getCalibratedS();
  

   if (counter%10 == 0) {
    printLine("Average for T: ", sumT/10.0);
    printLine("Average for S: ", sumS/10.0);
    sumT = 0.0;
    sumS = 0.0;
   }

   counter++; */

  // Serial.print("] tempF[");
  // Serial.print(sensor.getTemperatureF(), 1);
  // Serial.print("]");

  Serial.println();
}
