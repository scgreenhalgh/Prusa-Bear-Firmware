#pragma once

#define THERMAL_MODEL_E3D_REVO_VER 1      // model parameters version

#define THERMAL_MODEL_E3D_REVO_P 40.      // heater power (W)
#define THERMAL_MODEL_E3D_REVO_U -0.0014  // linear temperature coefficient (W/K/power)
#define THERMAL_MODEL_E3D_REVO_V 1.05     // linear temperature intercept (W/power)

#define THERMAL_MODEL_E3D_REVO_C 11.76     // initial guess for heatblock capacitance (J/K)
#define THERMAL_MODEL_E3D_REVO_R 17.0     // initial guess for heatblock resistance (K/W)

#define THERMAL_MODEL_E3D_REVO_fS 0.15    // sim. 1st order IIR filter factor (f=100/27)
#define THERMAL_MODEL_E3D_REVO_LAG 270    // sim. response lag (ms, 0-2160)

#define THERMAL_MODEL_E3D_REVO_W 0.85     // Default warning threshold (K/s)
#define THERMAL_MODEL_E3D_REVO_E 1.23     // Default error threshold (K/s)

// fall-back resistance vector (R0-15)
#define THERMAL_MODEL_E3D_REVO_Rv {THERMAL_MODEL_E3D_REVO_R, 16.2, 15.5, 14.0, 13.6, 13.2, 12.8, 12.4, 12.2, 12.0, 11.8, 11.6, 11.5, 11.4, 11.3, 11.2}

// Send: M301
// Recv: ok p:40.98 i:7.99 d:52.56

// Original values from Firmware/thermal_model/e3d_REVO.h
// Send: M310
// Recv: echo:Thermal Model settings:
// Recv: echo:  M310 I0 R25.30
// Recv: echo:  M310 I1 R23.90
// Recv: echo:  M310 I2 R22.50
// Recv: echo:  M310 I3 R19.60
// Recv: echo:  M310 I4 R19.00
// Recv: echo:  M310 I5 R18.30
// Recv: echo:  M310 I6 R17.70
// Recv: echo:  M310 I7 R17.10
// Recv: echo:  M310 I8 R16.80
// Recv: echo:  M310 I9 R16.50
// Recv: echo:  M310 I10 R16.30
// Recv: echo:  M310 I11 R16.00
// Recv: echo:  M310 I12 R15.90
// Recv: echo:  M310 I13 R15.70
// Recv: echo:  M310 I14 R15.60
// Recv: echo:  M310 I15 R15.40
// Recv: echo:  M310 P40.00 U-0.0014 V1.05 C8.77 D0.1500 L270 S1 B1 E1.23 W0.85 T-7.00
// Recv: ok

// New values from Firmware/thermal_model/e3d_REVO.h post PID tuning.
// Send: M310
// Recv: echo:Thermal Model settings:
// Recv: echo:  M310 I0 R16.95
// Recv: echo:  M310 I1 R16.22
// Recv: echo:  M310 I2 R15.49
// Recv: echo:  M310 I3 R14.03
// Recv: echo:  M310 I4 R13.62
// Recv: echo:  M310 I5 R13.21
// Recv: echo:  M310 I6 R12.80
// Recv: echo:  M310 I7 R12.38
// Recv: echo:  M310 I8 R12.18
// Recv: echo:  M310 I9 R11.97
// Recv: echo:  M310 I10 R11.77
// Recv: echo:  M310 I11 R11.56
// Recv: echo:  M310 I12 R11.46
// Recv: echo:  M310 I13 R11.35
// Recv: echo:  M310 I14 R11.25
// Recv: echo:  M310 I15 R11.15
// Recv: echo:  M310 P40.00 U-0.0014 V1.05 C11.76 D0.1500 L270 S1 B1 E1.23 W0.85 T-7.00

// OLD
// Recv: echo:Thermal Model settings:
// Recv: echo:  M310 I0 R12.98
// Recv: echo:  M310 I1 R12.21
// Recv: echo:  M310 I2 R11.45
// Recv: echo:  M310 I3 R9.93
// Recv: echo:  M310 I4 R9.60
// Recv: echo:  M310 I5 R9.26
// Recv: echo:  M310 I6 R8.93
// Recv: echo:  M310 I7 R8.60
// Recv: echo:  M310 I8 R8.46
// Recv: echo:  M310 I9 R8.32
// Recv: echo:  M310 I10 R8.18
// Recv: echo:  M310 I11 R8.05
// Recv: echo:  M310 I12 R7.95
// Recv: echo:  M310 I13 R7.86
// Recv: echo:  M310 I14 R7.76
// Recv: echo:  M310 I15 R7.67
// Recv: echo:  M310 P38.00 U0.0000 V1.00 C12.28 D0.0650 L2160 S1 B1 E1.74 W1.20 T-7.00




