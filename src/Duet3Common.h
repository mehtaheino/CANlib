/*
 * Duet3Limits.h
 *
 * This file defines the system-wide limits for Duet 3 that need to be known by main boards and expansion boards
 *
 *  Created on: 27 Dec 2019
 *      Author: David
 */

#ifndef SRC_DUET3COMMON_H_
#define SRC_DUET3COMMON_H_

#include <cstdint>
#include <cstddef>
#include <General/NamedEnum.h>

// Limits of Duet 3 systems
constexpr size_t MaxSensors = 56;						// limited by the size of bitmap we can store in an ExpressionValue
constexpr size_t MaxHeaters = 32;
constexpr size_t MaxMonitorsPerHeater = 3;

constexpr size_t MaxZProbes = 4;
constexpr size_t MaxZProbeProgramBytes = 8;				// maximum number of bytes in a Z probe program

constexpr size_t MaxFans = 16;

constexpr size_t MaxGpOutPorts = 32;					// increased as requested by Jimmykc

// The following currently don't need to be known by expansion boards, but might in future
constexpr size_t MaxGpInPorts = 16;
constexpr size_t MaxSpindles = 2;						// maximum number of configurable spindles

// Other constants etc. that are common across Duet 3 main and expansion boards
constexpr float DefaultThermistorR25 = 100000.0;
constexpr float DefaultThermistorBeta = 4725.0;
constexpr float DefaultThermistorC = 7.060e-8;

constexpr float DefaultMinFanPwm = 0.1;					// minimum fan PWM
constexpr uint32_t DefaultFanBlipTime = 100;			// fan blip time in milliseconds

// The values of this enumeration must correspond to the meanings of the M569.1 S parameter
NamedEnum(EncoderType, uint8_t, none, linearQuadrature, rotaryQuadrature, as5047, tli5012);

#endif /* SRC_DUET3COMMON_H_ */
