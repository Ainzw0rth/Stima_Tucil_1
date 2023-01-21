#ifndef MATRIX_H
#define MATRIX_H

// struktur matrix untuk permainan "Make it 24"
typedef struct
{
   int mem[24][4];
   int effective;
} Matrix;

// Selektor
#define ELMT(M, i, j) (M).mem[(i)][(j)]
#define EFF(M) (M).effective

#endif