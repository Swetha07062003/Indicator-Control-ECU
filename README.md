# Indicator Control ECU

Embedded Software Assignment – Indicator Control ECU.

## Project Description

This project implements an automotive-style Indicator Control ECU
using a layered embedded software architecture.

Features implemented:

* Left Indicator Control
* Right Indicator Control
* Hazard Mode
* 100 ms Task Scheduler
* UART Event Logging

## System Architecture

Application Software
↓
Generated C Code
↓
Base Software
↓
Hardware Layer

## State Machine

The system contains the following states:

* IDLE
* LEFT_ACTIVE
* RIGHT_ACTIVE
* HAZARD_ACTIVE

Transitions between states are triggered by push-button inputs.

## Project Structure

main.c              → Main program
gpio_driver.c       → Button input handling
pwm_driver.c        → LED output control
uart_driver.c       → UART logging
scheduler.c         → 100 ms scheduler
indicator_logic.c   → Indicator state machine logic

## Author

Swetha K
Electronics and Communication Engineering
