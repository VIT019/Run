int end_pin = 5;
int switch_pin = 13;
int my_switch = LOW;
boolean work = true;
void setup() {
  for (int i = 2; i <= end_pin+1; i++) //end_pin+1  N6 pin we gona use for switch
  {
    pinMode(i, OUTPUT); //initalize pins used
  }
  pinMode(13, INPUT);//where we will listen to the switch
}


void loop() {

int ii = 2;//starting on pin N2
  while (work)
 { 
  if (ii > end_pin){
    ii=2;
  }
    digitalWrite(ii, HIGH); 
    delay(1000); //lets wait for it to glow
    digitalWrite(ii, LOW);
    my_switch=digitalRead(switch_pin); //lets check if switch is turned and we have 5v on pin
    if(my_switch == HIGH)
    {   
      ii--;//back
    }else{
    ii++;//gogo
    }
        if (ii < 2 ){
    ii=5;
  }
  }

}