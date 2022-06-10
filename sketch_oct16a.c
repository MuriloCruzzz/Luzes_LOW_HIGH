int q1=13, q2=12;
int i=0;
char buf;

void setup() {
     Serial.begin(9600);
     Serial.println("Digite os comandos dos comodos :"); 
   
     pinMode (q1, OUTPUT);
     pinMode (q2, OUTPUT);
 

}



void loop() { 
   while(Serial.available() > 0)
  {
    buf = Serial.read();
  
     if (buf == '1')
    {
      digitalWrite(q1, HIGH);
     Serial.println(buf);
      delay (5000);
      digitalWrite(q1, LOW);
      
    }
    if (buf == '2')
    {
      digitalWrite(q2, HIGH);
  
      Serial.println(buf);
      
      delay (5000);
      digitalWrite(q2, LOW);
    }  }}
      
