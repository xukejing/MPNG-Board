// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

// This file is just a placeholder for your configuration file.  If
// you wish to change any of the setup parameters from their default
// values, place the appropriate #define statements here.

// If you used to define your CONFIG_APM_HARDWARE setting here, it is no
// longer valid! You should switch to using CONFIG_HAL_BOARD via the HAL_BOARD
// flag in your local config.mk instead.

// The following are the recommended settings for Xplane
// simulation. Remove the leading "/* and trailing "*/" to enable:

// Select Megapirate board type:
#define MPNG_BOARD_TYPE   CRIUS_V1
/*
  RCTIMER_CRIUS_V2    -- (DEFAULT!!!) Use ONLY for RCTimer CRIUS V2 board
  CRIUS_V1            -- Use this define for RCTimer CRIUS V1(1.1) board and all HobbyKing AIOP boards
  HK_RED_MULTIWII_PRO -- HobbyKing MultiWii Pro board with ITG3205 and BMA180, BMP085 sensors
  BLACK_VORTEX
  MULTIWII_PRO_EZ3_BLACK  -- ReadyToFlyQuads - MultiWii PRO Ez3.0 Blacked MAG Editon Flight Controller w/ GPS Option (NO COMPASS) 
  PARIS_V5_OSD            -- PARIS v5 Mega iOSD - http://www.multiwiicopter.com/products/multiwii-paris-v5-mega-iosd-gps-autopilot 
 */
 
 // GPS port speed (Serial2) 38400 by default
#define SERIAL2_BAUD 38400

// GPS driver selection
#define GPS_PROTOCOL GPS_PROTOCOL_UBLOX
/*
	GPS_PROTOCOL_AUTO   (Default)
	GPS_PROTOCOL_NONE
	GPS_PROTOCOL_NMEA
	GPS_PROTOCOL_SIRF
	GPS_PROTOCOL_UBLOX
	GPS_PROTOCOL_IMU
	GPS_PROTOCOL_MTK
	GPS_PROTOCOL_HIL
	GPS_PROTOCOL_MTK19
*/


#define HIL_MODE            HIL_MODE_DISABLED

/*
 *  // HIL_MODE SELECTION
 *  //
 *  // Mavlink supports
 *  // 2. HIL_MODE_SENSORS: full sensor simulation
 *
 */

#define MAGNETOMETER		DISABLED

#define GCS_PROTOCOL		GCS_PROTOCOL_MAVLINK
#define GCS_PORT			3
#define MAV_SYSTEM_ID		1

#define SERIAL0_BAUD        115200
#define SERIAL3_BAUD         57600

 #define BATTERY_EVENT			DISABLED
 #define LOW_VOLTAGE			9.6
 #define VOLT_DIV_RATIO		3.56
 #define CURR_AMPS_PER_VOLT	27.32	
 #define CURR_AMPS_OFFSET		0.0	
 #define HIGH_DISCHARGE		1760

 #define THROTTLE_FAILSAFE   ENABLED
 #define THROTTLE_FS_VALUE   950

#define AUTO_TRIM           DISABLED

 //////////////////////////////////////////////////////////////////////////////
 // ENABLE_AIR_START                         OPTIONAL
 //
 // If air start is disabled then you will get a ground start (including INS
 // calibration) every time the AP is powered up. This means that if you get
 // a power glitch or reboot for some reason in the air, you will probably
 // crash, but it prevents a lot of problems on the ground like unintentional
 // motor start-ups, etc.
 //
 // If air start is enabled then you will get an air start at power up and a
 // ground start will be performed if the speed is near zero when we get gps
 // lock.
 //
 // The default is to disable air start.
#define ENABLE_AIR_START    1


 #define LOG_ATTITUDE_FAST   DISABLED
 #define LOG_ATTITUDE_MED    DISABLED
 #define LOG_GPS             DISABLED
 #define LOG_PM              DISABLED
 #define LOG_CTUN            DISABLED
 #define LOG_NTUN            DISABLED
 #define LOG_MODE            DISABLED
 #define LOG_RAW             DISABLED
 #define LOG_CMD             DISABLED
 #define LOG_CUR			DISABLED