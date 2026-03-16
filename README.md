Embedded Software Assignment – Indicator Control ECU

This project implements an automotive-style Indicator Control ECU using
a layered embedded software architecture.

Features implemented:

• Left Indicator Control
• Right Indicator Control
• Hazard Light Mode
• 100 ms Task Scheduler
• UART Event Logging
# Indicator Control ECU

Embedded software assignment for Gray Mobility.

## Features

- Left indicator control
- Right indicator control
- Hazard lights
- 100 ms scheduler
- UART event logging

## Architecture

Application Software
↓
Generated C Code
↓
Base Software
↓
Hardware Layer

## State Machine

States implemented:

- IDLE
- LEFT_ACTIVE
- RIGHT_ACTIVE
- HAZARD_ACTIVE
