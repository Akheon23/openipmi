/*
 * ipmi_bits.h
 *
 * MontaVista IPMI interface, various values.
 *
 * Author: MontaVista Software, Inc.
 *         Corey Minyard <minyard@mvista.com>
 *         source@mvista.com
 *
 * Copyright 2002 MontaVista Software Inc.
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation; either version 2 of
 *  the License, or (at your option) any later version.
 *
 *
 *  THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED
 *  WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 *  OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 *  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 *  TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 *  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this program; if not, write to the Free
 *  Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef _IPMI_BITS_H
#define _IPMI_BITS_H

/*
 * Sensor bits
 */
#define IPMI_HYSTERESIS_SUPPORT_NONE		0
#define IPMI_HYSTERESIS_SUPPORT_READABLE	1
#define IPMI_HYSTERESIS_SUPPORT_SETTABLE	2
#define IPMI_HYSTERESIS_SUPPORT_FIXED		3
char *ipmi_get_hysteresis_support_string(unsigned int val);

#define IPMI_THRESHOLD_ACCESS_SUPPORT_NONE	0
#define IPMI_THRESHOLD_ACCESS_SUPPORT_READABLE	1
#define IPMI_THRESHOLD_ACCESS_SUPPORT_SETTABLE	2
#define IPMI_THRESHOLD_ACCESS_SUPPORT_FIXED	3
char *ipmi_get_threshold_access_support_string(unsigned int val);

#define IPMI_EVENT_SUPPORT_PER_STATE		0
#define IPMI_EVENT_SUPPORT_ENTIRE_SENSOR	1
#define IPMI_EVENT_SUPPORT_GLOBAL_DISABLE	2
#define IPMI_EVENT_SUPPORT_NONE			3
char *ipmi_get_event_support_string(unsigned int val);


#define IPMI_SENSOR_TYPE_TEMPERATURE			0x01
#define IPMI_SENSOR_TYPE_VOLTAGE			0x02
#define IPMI_SENSOR_TYPE_CURRENT			0x03
#define IPMI_SENSOR_TYPE_FAN				0x04
#define IPMI_SENSOR_TYPE_PHYSICAL_SECURITY		0x05
#define IPMI_SENSOR_TYPE_PLATFORM_SECURITY		0x06
#define IPMI_SENSOR_TYPE_PROCESSOR			0x07
#define IPMI_SENSOR_TYPE_POWER_SUPPLY			0x08
#define IPMI_SENSOR_TYPE_POWER_UNIT			0x09
#define IPMI_SENSOR_TYPE_COOLING_DEVICE			0x0a
#define IPMI_SENSOR_TYPE_OTHER_UNITS_BASED_SENSOR	0x0b
#define IPMI_SENSOR_TYPE_MEMORY				0x0c
#define IPMI_SENSOR_TYPE_DRIVE_SLOT			0x0d
#define IPMI_SENSOR_TYPE_POWER_MEMORY_RESIZE		0x0e
#define IPMI_SENSOR_TYPE_SYSTEM_FIRMWARE_PROGRESS	0x0f
#define IPMI_SENSOR_TYPE_EVENT_LOGGING_DISABLED		0x10
#define IPMI_SENSOR_TYPE_WATCHDOG_1			0x11
#define IPMI_SENSOR_TYPE_SYSTEM_EVENT			0x12
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT		0x13
#define IPMI_SENSOR_TYPE_BUTTON				0x14
#define IPMI_SENSOR_TYPE_MODULE_BOARD			0x15
#define IPMI_SENSOR_TYPE_MICROCONTROLLER_COPROCESSOR	0x16
#define IPMI_SENSOR_TYPE_ADD_IN_CARD			0x17
#define IPMI_SENSOR_TYPE_CHASSIS			0x18
#define IPMI_SENSOR_TYPE_CHIP_SET			0x19
#define IPMI_SENSOR_TYPE_OTHER_FRU			0x1a
#define IPMI_SENSOR_TYPE_CABLE_INTERCONNECT		0x1b
#define IPMI_SENSOR_TYPE_TERMINATOR			0x1c
#define IPMI_SENSOR_TYPE_SYSTEM_BOOT_INITIATED		0x1d
#define IPMI_SENSOR_TYPE_BOOT_ERROR			0x1e
#define IPMI_SENSOR_TYPE_OS_BOOT			0x1f
#define IPMI_SENSOR_TYPE_OS_CRITICAL_STOP		0x20
#define IPMI_SENSOR_TYPE_SLOT_CONNECTOR			0x21
#define IPMI_SENSOR_TYPE_SYSTEM_ACPI_POWER_STATE	0x22
#define IPMI_SENSOR_TYPE_WATCHDOG_2			0x23
#define IPMI_SENSOR_TYPE_PLATFORM_ALERT			0x24
#define IPMI_SENSOR_TYPE_ENTITY_PRESENCE		0x25
#define IPMI_SENSOR_TYPE_MONITOR_ASIC_IC		0x26
#define IPMI_SENSOR_TYPE_LAN				0x27
#define IPMI_SENSOR_TYPE_MANAGEMENT_SUBSYSTEM_HEALTH	0x28
#define IPMI_SENSOR_TYPE_BATTERY			0x29
char *ipmi_get_sensor_type_string(unsigned int val);

#define IPMI_EVENT_READING_TYPE_THRESHOLD			0x01
#define IPMI_EVENT_READING_TYPE_DISCRETE_USAGE			0x02
#define IPMI_EVENT_READING_TYPE_DISCRETE_STATE			0x03
#define IPMI_EVENT_READING_TYPE_DISCRETE_PREDICTIVE_FAILURE	0x04
#define IPMI_EVENT_READING_TYPE_DISCRETE_LIMIT_EXCEEDED		0x05
#define IPMI_EVENT_READING_TYPE_DISCRETE_PERFORMANCE_MET	0x06
#define IPMI_EVENT_READING_TYPE_DISCRETE_SEVERITY		0x07
#define IPMI_EVENT_READING_TYPE_DISCRETE_DEVICE_PRESENCE	0x08
#define IPMI_EVENT_READING_TYPE_DISCRETE_DEVICE_ENABLE		0x09
#define IPMI_EVENT_READING_TYPE_DISCRETE_AVAILABILITY		0x0a
#define IPMI_EVENT_READING_TYPE_DISCRETE_REDUNDANCY		0x0b
#define IPMI_EVENT_READING_TYPE_DISCRETE_ACPI_POWER		0x0c
#define IPMI_EVENT_READING_TYPE_SENSOR_SPECIFIC			0x6f
char *ipmi_get_event_reading_type_string(unsigned int val);

char *ipmi_get_reading_name(unsigned int event_reading_type,
			    unsigned int sensor_type,
			    unsigned int val);

#define IPMI_ANALOG_DATA_FORMAT_UNSIGNED   0
#define IPMI_ANALOG_DATA_FORMAT_1_COMPL    1
#define IPMI_ANALOG_DATA_FORMAT_2_COMPL    2
#define IPMI_ANALOG_DATA_FORMAT_NOT_ANALOG 3

#define IPMI_RATE_UNIT_NONE	0
#define IPMI_RATE_UNIT_PER_US	1
#define IPMI_RATE_UNIT_PER_MS	2
#define IPMI_RATE_UNIT_PER_SEC	3
#define IPMI_RATE_UNIT_MIN	4
#define IPMI_RATE_UNIT_HOUR	5
#define IPMI_RATE_UNIT_DAY	6
char *ipmi_get_rate_unit_string(unsigned int val);

#define IPMI_UNIT_TYPE_UNSPECIFIED	0
#define IPMI_UNIT_TYPE_DEGREES_C	1
#define IPMI_UNIT_TYPE_DEGREES_F	2
#define IPMI_UNIT_TYPE_DEGREES_K	3
#define IPMI_UNIT_TYPE_VOLTS		4
#define IPMI_UNIT_TYPE_AMPS		5
#define IPMI_UNIT_TYPE_WATTS		6
#define IPMI_UNIT_TYPE_JOULES		7
#define IPMI_UNIT_TYPE_COULOMBS		8
#define IPMI_UNIT_TYPE_VA		9
#define IPMI_UNIT_TYPE_NITS		10
#define IPMI_UNIT_TYPE_LUMENS		11
#define IPMI_UNIT_TYPE_LUX		12
#define IPMI_UNIT_TYPE_CANDELA		13
#define IPMI_UNIT_TYPE_KPA		14
#define IPMI_UNIT_TYPE_PSI		15
#define IPMI_UNIT_TYPE_NEWTONS		16
#define IPMI_UNIT_TYPE_CFM		17
#define IPMI_UNIT_TYPE_RPM		18
#define IPMI_UNIT_TYPE_HZ		19
#define IPMI_UNIT_TYPE_USECONDS		20
#define IPMI_UNIT_TYPE_MSECONDS		21
#define IPMI_UNIT_TYPE_SECONDS		22
#define IPMI_UNIT_TYPE_MINUTE		23
#define IPMI_UNIT_TYPE_HOUR		24
#define IPMI_UNIT_TYPE_DAY		25
#define IPMI_UNIT_TYPE_WEEK		26
#define IPMI_UNIT_TYPE_MIL		27
#define IPMI_UNIT_TYPE_INCHES		28
#define IPMI_UNIT_TYPE_FEET		29
#define IPMI_UNIT_TYPE_CUBIC_INCHS	30
#define IPMI_UNIT_TYPE_CUBIC_FEET	31
#define IPMI_UNIT_TYPE_MILLIMETERS	32
#define IPMI_UNIT_TYPE_CENTIMETERS	33
#define IPMI_UNIT_TYPE_METERS		34
#define IPMI_UNIT_TYPE_CUBIC_CENTIMETERS 35
#define IPMI_UNIT_TYPE_CUBIC_METERS	36
#define IPMI_UNIT_TYPE_LITERS		37
#define IPMI_UNIT_TYPE_FL_OZ		38
#define IPMI_UNIT_TYPE_RADIANS		39
#define IPMI_UNIT_TYPE_SERADIANS	40
#define IPMI_UNIT_TYPE_REVOLUTIONS	41
#define IPMI_UNIT_TYPE_CYCLES		42
#define IPMI_UNIT_TYPE_GRAVITIES	43
#define IPMI_UNIT_TYPE_OUNCES		44
#define IPMI_UNIT_TYPE_POUNDS		45
#define IPMI_UNIT_TYPE_FOOT_POUNDS	46
#define IPMI_UNIT_TYPE_OUNCE_INCHES	47
#define IPMI_UNIT_TYPE_GAUSS		48
#define IPMI_UNIT_TYPE_GILBERTS		49
#define IPMI_UNIT_TYPE_HENRIES		50
#define IPMI_UNIT_TYPE_MHENRIES		51
#define IPMI_UNIT_TYPE_FARADS		52
#define IPMI_UNIT_TYPE_UFARADS		53
#define IPMI_UNIT_TYPE_OHMS		54
#define IPMI_UNIT_TYPE_SIEMENS		55
#define IPMI_UNIT_TYPE_MOLES		56
#define IPMI_UNIT_TYPE_BECQUERELS	57
#define IPMI_UNIT_TYPE_PPM		58
#define IPMI_UNIT_TYPE_reserved1	59
#define IPMI_UNIT_TYPE_DECIBELS		60
#define IPMI_UNIT_TYPE_DbA		61
#define IPMI_UNIT_TYPE_DbC		62
#define IPMI_UNIT_TYPE_GRAYS		63
#define IPMI_UNIT_TYPE_SIEVERTS		64
#define IPMI_UNIT_TYPE_COLOR_TEMP_DEG_K	65
#define IPMI_UNIT_TYPE_BITS		66
#define IPMI_UNIT_TYPE_KBITS		67
#define IPMI_UNIT_TYPE_MBITS		68
#define IPMI_UNIT_TYPE_GBITS		69
#define IPMI_UNIT_TYPE_BYTES		70
#define IPMI_UNIT_TYPE_KBYTES		71
#define IPMI_UNIT_TYPE_MBYTES		72
#define IPMI_UNIT_TYPE_GBYTES		73
#define IPMI_UNIT_TYPE_WORDS		74
#define IPMI_UNIT_TYPE_DWORDS		75
#define IPMI_UNIT_TYPE_QWORDS		76
#define IPMI_UNIT_TYPE_LINES		77
#define IPMI_UNIT_TYPE_HITS		78
#define IPMI_UNIT_TYPE_MISSES		79
#define IPMI_UNIT_TYPE_RETRIES		80
#define IPMI_UNIT_TYPE_RESETS		81
#define IPMI_UNIT_TYPE_OVERRUNS		82
#define IPMI_UNIT_TYPE_UNDERRUNS       	83
#define IPMI_UNIT_TYPE_COLLISIONS	84
#define IPMI_UNIT_TYPE_PACKETS		85
#define IPMI_UNIT_TYPE_MESSAGES		86
#define IPMI_UNIT_TYPE_CHARACTERS	87
#define IPMI_UNIT_TYPE_ERRORS		88
#define IPMI_UNIT_TYPE_CORRECTABLE_ERRORS 89
#define IPMI_UNIT_TYPE_UNCORRECTABLE_ERRORS 90
char *ipmi_get_unit_type_string(unsigned int val);

#define IPMI_MODIFIER_UNIT_NONE			0
#define IPMI_MODIFIER_UNIT_BASE_DIV_MOD		1
#define IPMI_MODIFIER_UNIT_BASE_MULT_MOD	2

#define IPMI_LINEARIZATION_LINEAR	0
#define IPMI_LINEARIZATION_LN		1
#define IPMI_LINEARIZATION_LOG10	2
#define IPMI_LINEARIZATION_LOG2		3
#define IPMI_LINEARIZATION_E		4
#define IPMI_LINEARIZATION_EXP10	5
#define IPMI_LINEARIZATION_EXP2		6
#define IPMI_LINEARIZATION_1_OVER_X	7
#define IPMI_LINEARIZATION_SQR		8
#define IPMI_LINEARIZATION_CUBE		9
#define IPMI_LINEARIZATION_SQRT		10
#define IPMI_LINEARIZATION_1_OVER_CUBE	11
#define IPMI_LINEARIZATION_NONLINEAR	0x70

/* Event types and directions for sensors. */
enum ipmi_thresh_e {
    IPMI_LOWER_NON_CRITICAL = 0,
    IPMI_LOWER_CRITICAL,
    IPMI_LOWER_NON_RECOVERABLE,
    IPMI_UPPER_NON_CRITICAL,
    IPMI_UPPER_CRITICAL,
    IPMI_UPPER_NON_RECOVERABLE
};
char *ipmi_get_threshold_string(unsigned int val);

enum ipmi_event_value_dir_e {
    IPMI_GOING_LOW = 0,
    IPMI_GOING_HIGH
};
char *ipmi_get_value_dir_string(unsigned int val);

enum ipmi_event_dir_e {
    IPMI_ASSERTION = 0,
    IPMI_DEASSERTION
};
char *ipmi_get_event_dir_string(unsigned int val);

/* Global init field for MC device locator SDR. */
#define IPMI_GLOBAL_INIT_ENABLE_EVENT_MSG_GENERATION 0
#define IPMI_GLOBAL_INIT_DISABLE_EVENT_MSG_GENERATION 1
#define IPMI_GLOBAL_INIT_DO_NOT_INIT 2

/*
 * Entity IDs
 */
#define IPMI_ENTITY_ID_UNSPECIFIED			0
#define IPMI_ENTITY_ID_OTHER				1
#define IPMI_ENTITY_ID_UNKOWN				2
#define IPMI_ENTITY_ID_PROCESSOR			3
#define IPMI_ENTITY_ID_DISK				4
#define IPMI_ENTITY_ID_PERIPHERAL			5
#define IPMI_ENTITY_ID_SYSTEM_MANAGEMENT_MODULE		6
#define IPMI_ENTITY_ID_SYSTEM_BOARD			7
#define IPMI_ENTITY_ID_MEMORY_MODULE			8
#define IPMI_ENTITY_ID_PROCESSOR_MODULE			9
#define IPMI_ENTITY_ID_POWER_SUPPLY			10
#define IPMI_ENTITY_ID_ADD_IN_CARD			11
#define IPMI_ENTITY_ID_FRONT_PANEL_BOARD		12
#define IPMI_ENTITY_ID_BACK_PANEL_BOARD			13
#define IPMI_ENTITY_ID_POWER_SYSTEM_BOARD		14
#define IPMI_ENTITY_ID_DRIVE_BACKPLANE			15
#define IPMI_ENTITY_ID_SYSTEM_INTERNAL_EXPANSION_BOARD	16
#define IPMI_ENTITY_ID_OTHER_SYSTEM_BOARD		17
#define IPMI_ENTITY_ID_PROCESSOR_BOARD			18
#define IPMI_ENTITY_ID_POWER_UNIT			19
#define IPMI_ENTITY_ID_POWER_MODULE			20
#define IPMI_ENTITY_ID_POWER_MANAGEMENT_BOARD		21
#define IPMI_ENTITY_ID_CHASSIS_BACK_PANEL_BOARD		22
#define IPMI_ENTITY_ID_SYSTEM_CHASSIS			23
#define IPMI_ENTITY_ID_SUB_CHASSIS			24
#define IPMI_ENTITY_ID_OTHER_CHASSIS_BOARD		25
#define IPMI_ENTITY_ID_DISK_DRIVE_BAY			26
#define IPMI_ENTITY_ID_PERIPHERAL_BAY			27
#define IPMI_ENTITY_ID_DEVICE_BAY			28
#define IPMI_ENTITY_ID_FAN_COOLING			29
#define IPMI_ENTITY_ID_COOLING_UNIT			30
#define IPMI_ENTITY_ID_CABLE_INTERCONNECT		31
#define IPMI_ENTITY_ID_MEMORY_DEVICE			32
#define IPMI_ENTITY_ID_SYSTEM_MANAGEMENT_SOFTWARE	33
#define IPMI_ENTITY_ID_BIOS				34
#define IPMI_ENTITY_ID_OPERATING_SYSTEM			35
#define IPMI_ENTITY_ID_SYSTEM_BUS			36
#define IPMI_ENTITY_ID_GROUP				37
#define IPMI_ENTITY_ID_REMOTE_MGMT_COMM_DEVICE		38
#define IPMI_ENTITY_ID_EXTERNAL_ENVIRONMENT		39
#define IPMI_ENTITY_ID_BATTERY				40
#define IPMI_ENTITY_ID_PROCESSING_BLADE			41
#define IPMI_ENTITY_ID_CONNECTIVITY_SWITCH		42
#define IPMI_ENTITY_ID_PROCESSOR_MEMORY_MODULE		43
#define IPMI_ENTITY_ID_IO_MODULE			44
#define IPMI_ENTITY_ID_PROCESSOR_IO_MODULE		45
#define IPMI_ENTITY_ID_MGMT_CONTROLLER_FIRMWARE		46
char *ipmi_get_entity_id_string(unsigned int val);


/*
 * Indicator types.
 */
#define IPMI_CONTROL_LIGHT		1
#define IPMI_CONTROL_RELAY		2
#define IPMI_CONTROL_DISPLAY		3
#define IPMI_CONTROL_ALARM		4
#define IPMI_CONTROL_RESET		5
#define IPMI_CONTROL_POWER		6
#define IPMI_CONTROL_FAN_SPEED		7
#define IPMI_CONTROL_IDENTIFIER		8
char *ipmi_get_control_type_string(unsigned int val);

#define IPMI_CONTROL_COLOR_BLACK	0
#define IPMI_CONTROL_COLOR_WHITE	1
#define IPMI_CONTROL_COLOR_RED		2
#define IPMI_CONTROL_COLOR_GREEN	3
#define IPMI_CONTROL_COLOR_BLUE		4
#define IPMI_CONTROL_COLOR_YELLOW	5
char *ipmi_get_color_string(unsigned int val);

#endif /* _IPMI_BITS_H */
