
#define LS1 A3
#define LS2 A2 
#define RS1 A1
#define RS2 A0 
#define LM1 8     
#define LM2 9    
#define RM1 10      
#define RM2 11    




void setup()
{ 
  pinMode(LS1, INPUT);
  pinMode(LS2, INPUT);

  pinMode(RS1, INPUT);
  pinMode(RS2, INPUT);

  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);

     digitalWrite(LM1,0);
  digitalWrite(LM2,0);
  digitalWrite(RM1,0);
  digitalWrite(RM2,0);

delay(5000);
}





int left()
{
  if(digitalRead(LS1)||digitalRead(LS2))
  return(0);
  else
  return(1);
}
int right()
{
  if(digitalRead(RS1)||digitalRead(RS2))
  return(0);
  else
  return(1);
}
void loop()
{
if(left()&&right())
{
  digitalWrite(LM1,1);
  digitalWrite(LM2,0);
  digitalWrite(RM1,1);
  digitalWrite(RM2,0);
  
}
else if ((left()==0)&&(right()==1))
{
    digitalWrite(LM1,1);
  digitalWrite(LM2,0);
  digitalWrite(RM1,0);
  digitalWrite(RM2,0);
}
else if ((left()==1)&&(right()==0))
{
    digitalWrite(LM1,0);
  digitalWrite(LM2,0);
  digitalWrite(RM1,1);
  digitalWrite(RM2,0);
}
else
{
   digitalWrite(LM1,0);
  digitalWrite(LM2,0);
  digitalWrite(RM1,0);
  digitalWrite(RM2,0);
}

}
