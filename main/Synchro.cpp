void WiSensor_ini(){
	LiquidCrystal lcd(LCD_RST, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

	SYSConfig_init();
	SYSConfig_load();

	pinMode(DC_ON, OUTPUT);
	pinMode(LCD_ON, OUTPUT);
	pinMode(LCD_BACK_LIGHT, OUTPUT);

	pinMode(BUTTON, INPUT);
	pinMode(LED_GREEN, OUTPUT);
	pinMode(LED_RED, OUTPUT);

	digitalWrite(DC_ON, HIGH);
	digitalWrite(LCD_BACK_LIGHT, HIGH);
	digitalWrite(LCD_ON, HIGH);

	lcd.begin(16, 2);  // set up the LCD's number of columns and rows:

	digitalWrite(LED_GREEN, LOW);
	digitalWrite(LED_RED, LOW);
	
}




/*       Log.notice(F("DC_ON shall be High %d" CR), digitalRead(DC_ON));
      Log.notice(F("LCD_BACK_LIGHT shall be High %d" CR), digitalRead(LCD_BACK_LIGHT));
       Log.notice(F("LCD_ON shall be High %d" CR), digitalRead(LCD_ON));
       digitalWrite(DC_ON, HIGH);
      digitalWrite(LCD_BACK_LIGHT, HIGH);
      digitalWrite(LCD_ON, HIGH);
      lcd.print("Connect to WIFI:");
      lcd.setCursor(0,1);
      lcd.print(WifiManager_ssid); */