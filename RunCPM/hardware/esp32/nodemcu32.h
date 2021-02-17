/*
 * AZ-Delivery NodeMCU ESP32 board based on ESP32 DevKitC v2.
 * AZ-Delivery SPI Reader (for MicroSD) is plugged as follows:
 * 
 * CARD          NodeMCU
 * CS  <---------> G5
 * SCK <---------> G18
 * MISO <--------> G19
 * MOSI <--------> G23
 * VCC <---------> 5V  (3V3 not recommended as some loss was seen)
 * GND <---------> GND
 *
 * MicroSD card has te be less than 32GB and formatted as W95 FAT32 (0x0B)
 */
 
#ifndef ESP32_H
#define ESP32_H

// Ensure SPI_DRIVER_SELECT is set to 0 in SdFat/SdFatConfig.h

SdFat SD;

#define SPIINIT 18,19,23,5
#define SDMHZ 4 // Over 8Mhz, card cannot be read
#define SDINIT SS, SD_SCK_MHZ(SDMHZ)
#define LED 2
#define LEDinv 0
#define BOARD "ESP32 NodeMCU"
#define board_esp32
#define board_digital_io

uint8 esp32bdos(uint16 dmaaddr) {
	return(0x00);
}

#endif

