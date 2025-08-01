<h1 align="center">Door Locker System</h1>

<h2 align="center">A modular, layered-architecture door locking system developed in C as a college embedded systems project.</h2>

<h2 align="center">▶️ YouTube Video Illustrating the Project</h2>

<p align="center">
  <a href="https://youtu.be/L7Uvak6_KpI">
    <img src="https://img.youtube.com/vi/L7Uvak6_KpI/0.jpg" alt="Door Locker System Demo" width="480">
  </a>
</p>


## Architecture

- **Modular Programming**: Code is separated into independent, reusable modules.
- **Layered Architecture**:
  - **MCAL** (Low-Level Drivers): DIO, WAIT
  - **HCL** (Hardware Component Layer): Keypad, LCD, Servo, LED
  - **Application Layer**: High-level logic

## Features

- LCD interface and keypad for password input
- Servo motor control to simulate lock/unlock
- LED indicators for status (locked/unlocked)
- Password checking and retry mechanism


## Project Structure

```
├── README.md     
├── build/                    
│   ├── DOOR_LOCKER.hex
├── simulation/                    
│   ├── DOOR_LOCKER.pdsprj          # Simluation
├── layers/
│   ├── application/                    # Application logic  
│   │   ├── APP_Interface.h  
│   │   └── APP_Program.c  
│   ├── HCL/                            # High-level component drivers  
│   │   ├── KEYPAD/  
│   │   │   ├── KEYPAD_Interface.h  
│   │   │   └── KEYPAD_Program.c  
│   │   ├── LCD/  
│   │   │   ├── LCD_Interface.h  
│   │   │   └── LCD_Program.c  
│   │   ├── LED/  
│   │   │   ├── LED_Interface.h  
│   │   │   └── LED_Program.c  
│   │   └── SERVO/  
│   │       ├── SERVO_Interface.h  
│   │       └── SERVO_Program.c  
│   ├── MCAL/                           # Low-level drivers  
│   │   ├── DIO/  
│   │   │   ├── DIO_Interface.h  
│   │   │   ├── DIO_Program.c  
│   │   │   └── DIO_Register.h  
│   │   └── WAIT/  
│   │       ├── WAIT.h  
│   │       └── WAIT.c  
│   └── lib/                            # Utility headers  
│       ├── BIT_MATH.h  
│       └── STD_TYPES.h 
```
## Tools Used

- C Programming
- AVR Microcontrollers
- Proteus for simulation
- Atmel Studio

## Getting Started

1. Compile the project in **Atmel Studio** or similar IDE.
2. Simulate in **Proteus** using LCD + Keypad + Servo + LEDs.
3. Default password: `1234`

## Example Flow

- System starts in "Locked" mode.
- User enters 4-digit password.
- If correct:
  - Door unlocks (servo motor moves)
  - Green LED turns ON
- If incorrect:
  - Error message appears
  - Retry allowed

---
## 🙏 Special Thanks

A big thank you to **Dr. Abdallah Hassan** for his guidance and support throughout this project.

- 📺 YouTube Channel: [Dr. Abdallah Hassan's Channel](https://www.youtube.com/@channel_name)
- 📘 Facebook: [Dr. Abdallah Hassan on Facebook](https://www.facebook.com/AbdallahHassanCSE)

---
📌 Created with ❤️ by Hussein Mohamed

```
<p align="center">
  <img src="https://visitor-badge.laobi.icu/badge?page_id=husseinMohamed7.Layered-Architecture-Door-Locker" alt="Visitors Badge"/>
</p>
