/*
 * AI-Thinker ESP32-CAM board has an internal SD Card reader
 * which recommends SD_MMC library for access.
 *
 * SdFat library could be used knowing how reader is connected:
 * 
 * CARD          ESP32-CAM
 * CS  <---------> G13 (HS2_DATA3)
 * SCK <---------> G14 (HS2_CLK)
 * MISO <--------> G2  (HS2_DATA0)
 * MOSI <--------> G15 (HS2_CMD)
 * VCC <---------> 3V3
 * GND <---------> GND
 *
 * MicroSD card has te be less than 32GB and formatted as W95 FAT32 (0x0B)
 */
 
#ifndef ESP32_H
#define ESP32_H

// Ensure SPI_DRIVER_SELECT is set to 0 in SdFat/SdFatConfig.h

SdFat SD;

#define SPIINIT 14,2,15,13
#define SDMHZ 16 // Worked safe
#define SDINIT 13, SD_SCK_MHZ(SDMHZ)
#define LED 33
#define LEDinv 0
#define BOARD "AI-Thinker ESP32-CAM"
#define board_esp32
#define board_digital_io

uint8 esp32bdos(uint16 dmaaddr) {
	return(0x00);
}

#endif

