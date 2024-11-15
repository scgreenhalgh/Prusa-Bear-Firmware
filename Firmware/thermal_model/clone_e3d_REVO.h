#pragma once

#define THERMAL_MODEL_E3D_REVO_VER 1      // model parameters version

#define THERMAL_MODEL_E3D_REVO_P 40.      // heater power (W)
#define THERMAL_MODEL_E3D_REVO_U -0.0014  // linear temperature coefficient (W/K/power)
#define THERMAL_MODEL_E3D_REVO_V 1.05     // linear temperature intercept (W/power)

#define THERMAL_MODEL_E3D_REVO_C 8.77     // initial guess for heatblock capacitance (J/K)
#define THERMAL_MODEL_E3D_REVO_R 25.3     // initial guess for heatblock resistance (K/W)

#define THERMAL_MODEL_E3D_REVO_fS 0.15    // sim. 1st order IIR filter factor (f=100/27)
#define THERMAL_MODEL_E3D_REVO_LAG 270    // sim. response lag (ms, 0-2160)

#define THERMAL_MODEL_E3D_REVO_W 0.85     // Default warning threshold (K/s)
#define THERMAL_MODEL_E3D_REVO_E 1.23     // Default error threshold (K/s)

// fall-back resistance vector (R0-15)
#define THERMAL_MODEL_E3D_REVO_Rv {THERMAL_MODEL_E3D_REVO_R, 23.9, 22.5, 19.6, 19.0, 18.3, 17.7, 17.1, 16.8, 16.5, 16.3, 16.0, 15.9, 15.7, 15.6, 15.4}

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

// NEW
// Recv: echo:Thermal Model settings:
// Recv: echo:  M310 I0 R12.98
// Recv: echo:  M310 I1 R12.39
// Recv: echo:  M310 I2 R11.81
// Recv: echo:  M310 I3 R10.65
// Recv: echo:  M310 I4 R10.33
// Recv: echo:  M310 I5 R10.01
// Recv: echo:  M310 I6 R9.70
// Recv: echo:  M310 I7 R9.38
// Recv: echo:  M310 I8 R9.24
// Recv: echo:  M310 I9 R9.11
// Recv: echo:  M310 I10 R8.97
// Recv: echo:  M310 I11 R8.83
// Recv: echo:  M310 I12 R8.75
// Recv: echo:  M310 I13 R8.66
// Recv: echo:  M310 I14 R8.58
// Recv: echo:  M310 I15 R8.49
// Recv: echo:  M310 P38.00 U0.0000 V1.00 C12.28 D0.0650 L2160 S1 B1 E1.74 W1.20 T-7.00
