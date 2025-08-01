#include "APP_Interface.h"

void initialize() {
    // Initialize hardware components and variables
	lcd_init();
	LED_Init();
	keypad_init();
	SERVO_Init();
}

void runLockSystem() {
    // Main logic of the door locker system
	lcd_command_write(LCD_CLEAR);
	lcd_string_write("The door is LOCKED!");
	LED_Off('G');
	LED_On('R');
	SERVO_Change(SERVO_OFF);
	wait_ms(1000);
	lcd_command_write(LCD_CLEAR);
    lcd_string_write("ENTER Password:");
	lcd_command_write(LCD_START_LINE2);
	handlePasswordInput();
}

void handlePasswordInput() {
    // Handle keypad input and interact with below layers
	for(int i=0;i<4;i++)
	{
		inputed_key=scankey();
		wait_ms(1000);
		lcd_data_write('*');
		password[i] = inputed_key;	}
	if((password[0] == '1')&&(password[1] == '2')&&password[2] == '3'&&password[3] == '4')
	{
		lcd_command_write(LCD_CLEAR);
		lcd_string_write("DOOR UNLOCKED!");
		LED_Off('R');
		LED_On('G');
		SERVO_Change(SERVO_ON);
		wait_ms(3000);
		lcd_command_write(LCD_CLEAR);
		lcd_string_write("Press 1 if you want");
		lcd_command_write(LCD_START_LINE2);
		lcd_string_write("to lock it again: ");
		inputed_key=scankey();
		wait_ms(1000);
		lcd_data_write(inputed_key);
		lock_again[0] = inputed_key;
		if (lock_again[0] == '1')
		{
			return main();
		}
	}
	else
	{
		lcd_command_write(LCD_CLEAR);
		lcd_string_write("WRONG PASSWORD");
		lcd_command_write(LCD_START_LINE2);
		lcd_string_write("Try again!");
		wait_ms(2000);
		return main();
	}
}




	
	
	
	
	

