void getColors(){ 
  Serial.println("getting Colors...");  
  Serial.println("Lights turnning ON ");
  digitalWrite(Led, HIGH);
  digitalWrite(s2, LOW);                                           //S2/S3 levels define which set of photodiodes we are using LOW/LOW is for RED LOW/HIGH is for Blue and HIGH/HIGH is for green 
  digitalWrite(s3, LOW);  
  Serial.println("..");
  Serial.println("...");                                        
  Red = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);       //here we wait until "out" go LOW, we start measuring the duration and stops when "out" is HIGH again, if you have trouble with this expression check the bottom of the code
  delay(20);  
  digitalWrite(s3, HIGH);                                         //Here we select the other color (set of photodiodes) and measure the other colors value using the same techinque
  Serial.println("....");
  Serial.println(".....");
  Blue = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  delay(20);  
  digitalWrite(s2, HIGH);
  Serial.println("......");
  Serial.println(".......");  
  Green = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  delay(20); 
  Serial.println("........");
  digitalWrite(Led, LOW);
  Serial.println("Finish ...! ");  
}
