/*
 * dht.h
 *
 * Created: 14.05.2019
 * Author: Pl4yingNight
 */

#include <stdint.h>

#ifndef DHT_H
#define DHT_H

#define F_CPU			16000000	// 16 MHz
#define DHT_PORT		PORTC		// port of the DHT sensor data pin
#define DHT_PIN			3			// number of the DHT sensor data pin

extern uint8_t UpdateData();		// returns 1 if the checksum is wrong else 0 gets returned

extern uint8_t dht_rh_high();		// returns the humidity before the comma
extern uint8_t dht_rh_low();		// returns the humidity after the comma
extern uint8_t dht_temp_high();		// returns the temperature before the comma
extern uint8_t dht_temp_low();		// returns the temperature after the comma

#endif /* DHT_H_ */