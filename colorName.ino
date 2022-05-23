void colorName(){
  if (Red <=15 && Green <=15 && Blue <=15)       
      Serial.print("White");                    
  else if (Red<Blue && Red<=Green && Red<23)      
      Serial.print("Red");
  else if (Blue<Green && Blue<Red && Blue<20)    
      Serial.print("Blue");
  else if (Green<Red && Green-Blue<= 8)          
      Serial.print("Green");                    
  else
     Serial.println("update me");     
  
}
