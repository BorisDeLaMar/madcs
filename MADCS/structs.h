#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
    float x1;
    float x2;
    float x3;
} PlantState;

typedef struct {
    float x1;
    float x2;
} SignalState;

typedef struct {
    double data[3][3];
} Matrix3x3;

typedef struct {
    double data[2][2];
} Matrix2x2;

#endif // STRUCTS_H
