void __thiscall sub_100E8AE0(float *this, float *a2, float *a3, int a4, char a5)
{
  int v5; // ebx
  int v6; // edi
  float *v7; // edx
  double v8; // st3
  BOOL v9; // ebx
  double v10; // rt1
  double v11; // st3
  double v12; // st4
  float *v13; // eax
  double v14; // st6
  double v15; // st5
  double v16; // st4
  int v17; // [esp+10h] [ebp-4h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v5 = *((_DWORD *)this + 25);
  v6 = 0;
  v17 = v5;
  if ( v5 <= 0 )
  {
LABEL_8:
    *(float *)(a4 + 24) = 0.0;
    *(float *)(a4 + 28) = 0.0;
    *(float *)(a4 + 32) = 0.0;
    *(float *)(a4 + 36) = 0.0;
    *(_WORD *)(a4 + 54) = 0;
    *(_DWORD *)(a4 + 76) = 0;
    *(float *)(a4 + 44) = 1.0;
    return;
  }
  v7 = this + 3;
  while ( 1 )
  {
    if ( -1.0 == v7[1] )
      goto LABEL_7;
    v8 = a2[1] * *(v7 - 1) + *a2 * *(v7 - 2) + a2[2] * *v7 - v7[1];
    if ( v8 < -0.0099999998 )
      goto LABEL_7;
    v9 = v8 > 0.0099999998;
    v10 = v8;
    v11 = a3[1] * *(v7 - 1) + *a3 * *(v7 - 2) + a3[2] * *v7 - v7[1];
    v12 = v10;
    if ( v9 != v11 > 0.0099999998 )
      break;
    v5 = v17;
LABEL_7:
    ++v6;
    v7 += 4;
    if ( v6 >= v5 )
      goto LABEL_8;
  }
  v13 = &this[4 * v6];
  v14 = v12 / (v12 - v11);
  v15 = (a3[2] - a2[2]) * v14 + a2[2];
  v16 = (a3[1] - a2[1]) * v14 + a2[1];
  *(float *)(a4 + 12) = (*a3 - *a2) * v14 + *a2;
  *(float *)(a4 + 16) = v16;
  *(float *)(a4 + 20) = v15;
  *(float *)(a4 + 44) = v14 - 0.0099999998;
  *(float *)(a4 + 24) = v13[1];
  *(float *)(a4 + 28) = v13[2];
  *(float *)(a4 + 32) = v13[3];
  *(float *)(a4 + 36) = v13[4];
  if ( !a5 && *(float *)(a4 + 44) < 1.0 )
    sub_1000FCE0((int)&savedregs, (int)a2, a2, a3, 16395, 0, 0, a4);
}
