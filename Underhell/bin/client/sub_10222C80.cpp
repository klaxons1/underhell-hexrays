int __thiscall sub_10222C80(_DWORD *this, int a2, float *a3)
{
  int v3; // ebx
  int v4; // edx
  int v5; // edi
  int v6; // ebp
  int v7; // edx
  double v8; // st7
  int v9; // ebp
  double v10; // st6
  int v11; // edi
  int v12; // ebx
  double v13; // st7
  double v14; // st6
  int result; // eax

  v3 = this[1];
  v4 = a2 / 4 * *this;
  v5 = a2 / 4 * this[4];
  v6 = (a2 & 3) + 4 * v4 + 8;
  v7 = (a2 & 3) + 4 * v4;
  v8 = *(float *)(v3 + 4 * v6);
  v9 = (a2 & 3) + 4 * v5 + 8;
  v10 = *(float *)(v3 + 4 * v7 + 16);
  v11 = (a2 & 3) + 4 * v5;
  *a3 = *(float *)(v3 + 4 * v7);
  a3[1] = v10;
  a3[2] = v8;
  v12 = this[5];
  v13 = *(float *)(v12 + 4 * v9);
  v14 = *(float *)(v12 + 4 * v11 + 16);
  a3[3] = *(float *)(v12 + 4 * v11);
  a3[4] = v14;
  a3[5] = v13;
  a3[8] = *(float *)(this[7] + 4 * ((a2 & 3) + 4 * a2 / 4 * this[6]));
  result = (a2 & 3) + 4 * a2 / 4 * this[2];
  a3[7] = *(float *)(this[3] + 4 * result);
  return result;
}
