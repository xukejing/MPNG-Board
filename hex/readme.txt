用来测试的hex文件，固件版本：MegaPirateNG ArduPlane V2.76
烧写到arduino mega 2560

PWM-OUT有10个： D2、D3、D5、D6、D7、D8、D11、D12,D44,D45
PWM通道对应关系
CH1---D5
CH2---D6
CH3---D2
CH4---D3
CH5---D44
CH6---D45
CH7---D7
CH8---D8
CH10---D11
CH11---D12

PWM-in 8个：a8,a9,a10,a11,a12,a13,a14,a15
对应于pinRcChannel[8] = {0, 1, 2, 3, 4, 5, 6, 7}; // ROLL,PITCH,THROTTLE,YAW,MODE,AUX2,CAMPITCH,CAMROLL

led 3个： D13,D31,D30
一个相机触发： D46

serial0 调试串口 telemetry 115200
serial2 接GPS 38400
数传接 serial3 telemetry 57600

空速 a0
电压 a1
电流 a2

GY-86模块接到I2C
