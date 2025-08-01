#include "LCD_Interface.h"
void lcd_init()
{
	// Set the DDR UP and configure LCD
	LCD_DATA_DDR=0xff;	LCD_CONTROL_DDR=0x07;
	wait_ms(20);
	lcd_command_write(LCD_FUNCTION_SET);	lcd_command_write(LCD_DISPLAY_ON);	lcd_command_write(LCD_CLEAR);	lcd_command_write(LCD_ENTRY_MODE);}void lcd_command_write(unsigned char command){	// Take command code from user and preform it 	LCD_DATA_PORT = command;	LCD_CONTROL_PORT=(0<<LCD_RS)|(0<<LCD_RW)|(1<<LCD_EN);	wait_ms(1);	LCD_CONTROL_PORT=(0<<LCD_RS)|(0<<LCD_RW)|(0<<LCD_EN);	wait_ms(50);}
void lcd_data_write(char data){	// Display a single char	LCD_DATA_PORT= data;
	LCD_CONTROL_PORT= (1<<LCD_RS)|(0<<LCD_RW)|(1<<LCD_EN);
	wait_ms(1);
	LCD_CONTROL_PORT= (1<<LCD_RS)|(0<<LCD_RW)|(0<<LCD_EN);
	wait_ms(50);
}
void lcd_string_write(char* string)
{	
	// Use "lcd_data_write" to display multiple chars
	while(*string != '\0') //Send each char of string till Null;
	{
		lcd_data_write(*string);
		string++;
	}	
}


